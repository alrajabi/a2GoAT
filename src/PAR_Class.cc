#include "PAR_Class.h"

PAR_Class::PAR_Class()
{ 
    time 	= new GH1("time", 	"time", 	1400, -700, 700);
    time_cut 	= new GH1("time_cut", 	"time_cut", 	1400, -700, 700);

    time_2g 	= new GH1("time_2g",	"time_2g", 	1400, -700, 700);
    time_2g_cut = new GH1("time_2g_cut","time_2g_cut", 	1400, -700, 700);

    IM 		= new GH1("IM", 	"IM", 		400,   0, 400);
    IM_2g 	= new GH1("IM_2g", 	"IM_2g", 	400,   0, 400);
  
    MM		= new GH1("MM", 	"MM", 	 	400,   800, 1200);     
    MM_2g	= new GH1("MM_2g", 	"MM_2g", 	400,   800, 1200);
    TaggerAccScal = new TH1D("TaggerAccScal","TaggerAccScal",352,0,352);
    NChargedOA	= new GH1("NChargedOA",	"NC Prime at OA" ,300,0, 300);
    NCharged	= new GH1("NCharged",	"NC " ,300,0, 300);
    NMissing	= new GH1("NMissing",	"NM " ,300,0, 300);
    MM_after_cut	= new GH2("MM_after_cut",	"Missing Mass after cut" ,300,0,300,40,800, 1000); 	
    OA		= new GH1("OA",	"Opening Angle " ,180,0, 180);
    MissingM	= new GH1("MissingMass",	"Proton Missing Mass " ,1000,300, 1300);
    pi0checker	= new GH1("pi0checker", "No-2g subs pi0 events",250,700,1200);
    Denom_incsv	=new GH1("Denom_incsv","Inclusive Denominator", 300,0,300);
    MM_before_cut	=new GH2("MM_before_cut","MissingM before cut",300,0,300,40,800, 1000);
    MM_failed_cut	= new GH1("MM_failed_cut",	"Events Failed Missing Mass cut" ,1300,0, 1300);



   gHist1	= new GH1("gHist",	"Test MissMass"    , 250,700,1200);	
   ThMM1	  = new GH2("Theta_vs_MM1","Theta vs. MissMass1", 18,0,180,500,700,1200);
   ThMM0	  = new GH2("Theta_vs_MM0","Theta vs. MissMass0", 18,0,180,500,700,1200);
   Theta1 = new GH1("Theta1",	"Theta Dist. Helicity=1"    , 18,0,180);	
   Theta0 = new GH1("Theta0",	"Theta Dist. Helicity=0 "    , 18,0,180);
   Phi1 = new GH1("Phi1",	"Phi Dist. Helicity=1"    , 36,-180,180);	
   Phi0 = new GH1("Phi0",	"Phi Dist. Helicity=0 "    , 36,-180,180);
   MissingM_asym	=new GH1("MissingMassAsymm",	"Missing Mass Asym Analysis" ,1000,300, 1300);
}

PAR_Class::~PAR_Class()
{
}

Bool_t	PAR_Class::Init()
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if(!InitBackgroundCuts()) return kFALSE;
	if(!InitTargetMass()) return kFALSE;
	if(!InitTaggerChannelCuts()) return kFALSE;
	if(!InitTaggerScalers()) return kFALSE;
	cout << "--------------------------------------------------" << endl;
	return kTRUE;
}

Bool_t	PAR_Class::Start()
{
    if(!IsGoATFile())
    {
        cout << "ERROR: Input File is not a GoAT file." << endl;
        return kFALSE;
    }
    SetAsPhysicsFile();

    TraverseValidEvents();

    return kTRUE;
}
//AR's edit begins:
Double_t PAR_Class::myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 )
{
	 TVector3 p1 = t1.Vect();
	 TVector3 p2 = t2.Vect();
	//Double_t cosinoos =p1*p2/(p1.Mag()*p2.Mag()) ;
	//return cosinoos;
	return p1.Angle(p2);
}
void PAR_Class::Eff(const GTreeParticle& tree1,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* mm_b4cut,GH1* gHist,GH2* mm_aftercut,GH2* mm_b4cut_2d,GH1* pi0check,GH1* inclusive_denom, GH1* mm_failedcut, Float_t angle )
{
			
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		for (Int_t i = 0; i < tree2.GetNParticles(); i++)
   		{
			if((CalcMissingP4(tree2,0,j).Theta()>35*TMath::Pi()/180) && (CalcMissingP4(tree2,0,j).Theta()<40*TMath::Pi()/180))
			{
        			if ((tree2.GetNSubParticles(i) == 2) && (tree2.GetNSubPhotons(i) == 2))
       				{		
					mm_b4cut->Fill(CalcMissingMass(tree2,0,j));//2nd criterion, to check the MM distribution before cut.
					mm_b4cut_2d->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j),CalcMissingMass(tree2, 0,j));//Checkpoint before applying mm-cut-Rory suggested on August27th-3:30PM

					if (TMath::Abs(CalcMissingMass(tree2,0,j)-938.2)<50)//Select events based on MissMass.
					{
						mm_aftercut->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j),CalcMissingMass(tree2, 0,j));//find the denominator-Rory suggested on August21st-10:30AM
						inclusive_denom->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));//inclusive denominator, we need to see if it is equal to the sum of nm and nc.
						if ((tree1.GetNParticles() != 0) ) // check if a rootino(proton or charged pion) was detected
						{
							Hist2->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));	//NC calculated.
							Hist4->Fill(myOA_Calculator(CalcMissingP4(tree2,0,j),tree1.Particle(0))*180/TMath::Pi());
						
							if  (myOA_Calculator(CalcMissingP4(tree2,0,j),tree1.Particle(0))<angle*TMath::Pi()/180)
							{
								Hist1->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));
							
							}
								
						}
						else  //NM calculation:
						{
							Hist3->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));
						}

					}
					else // see how many events don't pass the mm-cut.
					{
						mm_failedcut->Fill(CalcMissingMass(tree2,0,j)); //events that failed mm-cut.
					}

				 }
				else
				{
					pi0check->Fill(CalcMissingMass(tree2,0,j));
				}
			}
		}
	}
					
	

}

//Asymmetry block:

void PAR_Class::Test_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* gHist3,GH1* gHist4,GH2* thvsmm1,GH2* thvsmm0,GH1* MM_dist_b4_1)
//,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* Hist5,GH1* gHist, Float_t angle )
{
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		for (Int_t k = 0; k < pi0tree.GetNParticles(); k++) //pi0 events:
   			{
     				if ((pi0tree.GetNSubParticles(k) == 2) && (pi0tree.GetNSubPhotons(k) == 2))
       				{		
				
					if ((taggertree.GetTaggedEnergy(j)>280)&&( taggertree.GetTaggedEnergy(j)<300))
					{
						MM_dist_b4_1->Fill(CalcMissingMass(pi0tree,0,j));					
						if (TMath::Abs(CalcMissingMass(pi0tree,0,j)-938.2)<50)//Select events based on MissMass.
						{							
							//cout << "energy is:" << tree3.GetTaggedEnergy(j) << "\n";
							if(triggertree.GetNErrors()==0)
							{
								if (triggertree.GetHelicity() ) // now if the helicity is 1
								{
									gHist1->Fill(pi0tree.GetTheta(k));
									gHist3->Fill(pi0tree.GetPhi(k));
									thvsmm1->Fill(pi0tree.GetTheta(k),CalcMissingMass(pi0tree,0,j));
								}
								if (!triggertree.GetHelicity() ) // now if the helicity is 
								{
									gHist2->Fill(pi0tree.GetTheta(k));
									gHist4->Fill(pi0tree.GetPhi(k));
									thvsmm0->Fill(pi0tree.GetTheta(k),CalcMissingMass(pi0tree,0,j));
								} 	
									
							}
						}						
											
					}
				}


			}		
	}	
}
//AR's edit ends.
void	PAR_Class::ProcessEvent()
{
	// fill time diff (tagger - pi0), all pi0
    FillTime(*GetNeutralPions(),time);
    FillTimeCut(*GetNeutralPions(),time_cut);
	/*** Not necessary part
	// fill missing mass, all pi0
     FillMissingMass(*GetNeutralPions(),MM);
	
	// fill invariant mass, all pi0
    FillMass(*GetNeutralPions(),IM);
	
    // Some neutral decays
    for (Int_t i = 0; i < GetNeutralPions()->GetNParticles(); i++)
    {
        // Fill MM for 2 photon decay
        if ((GetNeutralPions()->GetNSubParticles(i) == 2) & (GetNeutralPions()->GetNSubPhotons(i) == 2))
        {
		// fill time diff (tagger - pi0), this pi0
        FillTime(*GetNeutralPions(),i,time_2g);
        FillTimeCut(*GetNeutralPions(),i,time_2g_cut);
			
		// fill missing mass, this pi0
                FillMissingMass(*GetNeutralPions(),i,MM_2g);
            
		// fill invariant mass, this pi0
            FillMass(*GetNeutralPions(),i,IM_2g);
        }

    }***/

        Eff(*GetRootinos(),*GetNeutralPions(),NChargedOA,NCharged,NMissing,OA,MissingM,gHist1,MM_after_cut,MM_before_cut,pi0checker,Denom_incsv,MM_failed_cut,15);
	//Eff(*GetChargedPions(),*GetNeutralPions(),Test1,Test2,Test3,OA,MissMass,gHist1,180);
	Test_Asym(*GetTrigger(),*GetTagger(),*GetNeutralPions(),Theta1,Theta0,Phi1,Phi0,ThMM1,ThMM0,MissingM_asym);
}

void	PAR_Class::ProcessScalerRead()
{
	// Fill Tagger Scalers
	FillScalers(GetTC_scaler_min(),GetTC_scaler_max(),TaggerAccScal);
}

Bool_t	PAR_Class::Write()
{
	// Write some TH1s
	GTreeManager::Write(TaggerAccScal);
	//GTreeManager::Write(Test1);
	//GTreeManager::Write(Test2);
	//GTreeManager::Write(Test3);
	//GTreeManager::Write(OA);
	//GTreeManager::Write(MissMass);
	// Write all GH1's easily
	GTreeManager::Write();
}
