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
    NChecked	= new GH1("NChecked",	"NM " ,300,0, 300); 	
    OA		= new GH1("OA",	"Opening Angle " ,180,0, 180);
    MissMass	= new GH1("MissMass",	"Proton MissMass " ,1000,300, 1300);
    
    gHist1	= new GH1("gHist",	"Test MissMass"    , 250,700,1200);	

   
   Theta1 = new GH1("Theta1",	"Theta Dist. Helicity=1"    , 18,0,180);	
   Theta0 = new GH1("Theta0",	"Theta Dist. Helicity=0 "    , 18,0,180);
   Phi1 = new GH1("Phi1",	"Phi Dist. Helicity=1"    , 36,-180,180);	
   Phi0 = new GH1("Phi0",	"Phi Dist. Helicity=0 "    , 36,-180,180);
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
void PAR_Class::Eff(const GTreeParticle& tree1,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* Hist5,GH1* gHist,GH1* NMCheck, Float_t angle )
{
	//Int_t N_c_prime = 0;
	//Int_t N_c = 0;
	//Int_t N_m = 0;
	
	if ((tree1.GetNParticles() != 0) ) // check if a rootino(proton or charged pion) was detected
	{
				
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			for (Int_t i = 0; i < tree2.GetNParticles(); i++)
   			{
     					   // Fill MM for 2 photon decay
				if((CalcMissingP4(tree2,0,j).Theta()>35*TMath::Pi()/180) && (CalcMissingP4(tree2,0,j).Theta()<40*TMath::Pi()/180))
				{
        				if ((tree2.GetNSubParticles(i) == 2) && (tree2.GetNSubPhotons(i) == 2))
       					{		
						Hist5->Fill(CalcMissingMass(tree2,0,j));//2nd criterion, to check the MM distribution.
						FillMissingMass(tree2, 0,j, gHist);
						if (TMath::Abs(CalcMissingMass(tree2,0,j)-938.2)<50)//Select events based on MissMass.
						{
					
							Hist2->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));	
							Hist4->Fill(myOA_Calculator(CalcMissingP4(tree2,0,j),tree1.Particle(0))*180/TMath::Pi());
						
							if  (myOA_Calculator(CalcMissingP4(tree2,0,j),tree1.Particle(0))<angle*TMath::Pi()/180)
							{
								Hist1->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));
								//cout << "angle is  " << myOA_Calculator(CalcMissingP4(tree2,0,j),tree1.Particle(0))*180/TMath::Pi() << "\n";
							}
							else
							{
								Hist3->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));
							}	
						}

					 }	
				}
			}
		}
					
	}
	else 
	{ //here there is no proton detected, so it counts the missing energy of undetected protons.
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{	
					
			for (Int_t i = 0; i < tree2.GetNParticles(); i++)
   			{
				NMCheck->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));	
				if((CalcMissingP4(tree2,0,j).Theta()>35*TMath::Pi()/180) && (CalcMissingP4(tree2,0,j).Theta()<40*TMath::Pi()/180))
				{
					if ((tree2.GetNSubParticles(i) == 2) && (tree2.GetNSubPhotons(i) == 2))
       					{	
						NMCheck->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));	
						if (TMath::Abs(CalcMissingMass(tree2,0,j)-938.2)<50)//Select events based on MissMass.
						{
							Hist3->Fill(CalcMissingEnergy(tree2,0,j)-CalcMissingMass(tree2, 0,j));
			
						}
					}	
				}
			}	
		}
	}

}

//Asymmetry block:

void PAR_Class::Test_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* gHist3,GH1* gHist4)
//,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* Hist5,GH1* gHist, Float_t angle )
{
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		for (Int_t k = 0; k < pi0tree.GetNParticles(); k++) //pi0 events:
   			{
     				if ((pi0tree.GetNSubParticles(k) == 2) && (pi0tree.GetNSubPhotons(k) == 2))
       				{		
					if (TMath::Abs(CalcMissingMass(pi0tree,0,j)-938.2)<50)//Select events based on MissMass.
					{
						if ((taggertree.GetTaggedEnergy(j)>280)&&( taggertree.GetTaggedEnergy(j)<300))
						{
							//cout << "energy is:" << tree3.GetTaggedEnergy(j) << "\n";
							if(triggertree.GetNErrors()==0)
							{
								if (triggertree.GetHelicity() ) // now if the helicity is 1
								{
									gHist1->Fill(pi0tree.GetTheta(k));
									gHist3->Fill(pi0tree.GetPhi(k));
								}
								if (!triggertree.GetHelicity() ) // now if the helicity is 1
								{
									gHist2->Fill(pi0tree.GetTheta(k));
									gHist4->Fill(pi0tree.GetPhi(k));
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

    }

        Eff(*GetRootinos(),*GetNeutralPions(),NChargedOA,NCharged,NMissing,OA,MissMass,gHist1,NChecked,15);
	//Eff(*GetChargedPions(),*GetNeutralPions(),Test1,Test2,Test3,OA,MissMass,gHist1,180);
	Test_Asym(*GetTrigger(),*GetTagger(),*GetNeutralPions(),Theta1,Theta0,Phi1,Phi0);
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
