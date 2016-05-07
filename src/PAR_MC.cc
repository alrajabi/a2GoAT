#include "PAR_MC.h"
#include "EffLookUp.h"

PAR_MC::PAR_MC()
{ 
    time 	= new GH1("time", 	"time", 	1400, -700, 700);
    time_cut 	= new GH1("time_cut", 	"time_cut", 	1400, -700, 700);

    time_2g 	= new GH1("time_2g",	"time_2g", 	1400, -700, 700);
    time_2g_cut = new GH1("time_2g_cut","time_2g_cut", 	1400, -700, 700);

    IM 		= new GH1("IM", 	"IM", 		400,   0, 400);
    IM_2g 	= new GH1("IM_2g", 	"IM_2g", 	400,   0, 400);
  
    MM		= new GH1("MM", 	"MM", 	 	400,   800, 1200);     
    MM_2g	= new GH1("MM_2g", 	"MM_2g", 	400,   800, 1200);
/***
    Com_MM = new GH1("Com_MM","MC Rootino Missing Mass", 200,500,1300);
    Pi0_MM = new GH1("Pi0_MM","MC Pi0 Missing Mass", 200,500,1300);
    Pi0_MM_OA = new GH1("Pi0_MM_OA","MC Pi0 Missing Mass,after OA cut", 200,500,1300);
    Com_OA = new GH1("Com_OA","MC OA between Rootino and missing P off of #pi^{0}", 180,0,180);	
    Com_OA_Eff = new GH1("Com_OA_Eff","MC OA between Rootino and missing P off of #pi^{0},weighted by Eff ", 180,0,180);	
	***/

    //pi0 Eff Revisited Hists: (Added May3,2016)
    Time_Eff 	= new GH1("Time_Eff", 	"time", 	1400, -700, 700);    
    //Mgg_all_theta = new GH1("Mgg_all_theta","Mgg for 0 <Theta < 180 with cut on MM",250,0,250);
    OA		= new GH1("OA",	"Opening Angle " ,180,0, 180);
   // Missing_Mass = new GH1("Missing_Mass","Mass of Rootino",125,0,1250);
    NChargedOA	= new GH2("NChargedOA",	"NC Prime at OA,E_k vs. Proton #Theta-Helicity=+1" ,75,0, 150,27,20,155);
    Denom 	= new GH2("Denom",	"Denom, #E_{k} vs. Proton #Theta-Helicity=+1" ,75,0, 150,27,20,155);
    Denom_19_30	= new GH1("Denom_19_30","#epsilon, denom for 19 <#Theta < 30",75,0,150);
    Num_19_30	= new GH1("Num_19_30","#epsilon, num. for 19 <#Theta < 30",75,0,150);
    Denom_30_40	= new GH1("Denom_30_40","#epsilon, denom for 30 <#Theta < 40",75,0,150);
    Num_30_40	= new GH1("Num_30_40","#epsilon, num. for 30 <#Theta < 40",75,0,150);
    Denom_40_50	= new GH1("Denom_40_50","#epsilon, denom for 40 <#Theta < 50",75,0,150);
    Num_40_50	= new GH1("Num_40_50","#epsilon, num. for 40 <#Theta < 50",75,0,150);
    Denom_50_60	= new GH1("Denom_50_60","#epsilon, denom for 50 <#Theta < 60",75,0,150);
    Num_50_60	= new GH1("Num_50_60","#epsilon, num. for 50 <#Theta < 60",75,0,150);
    Denom_60_70	= new GH1("Denom_60_70","#epsilon, denom for 60 <#Theta < 70",75,0,150);
    Num_60_70	= new GH1("Num_60_70","#epsilon, num. for 60 <#Theta < 70",75,0,150); 
    //Find Holes Hists:
    //CosTheta_Phi = new GH2("CosTheta_Phi","Pi0 Photons Cos#theta vs. #phi",180,-1,1,360,-180,180);
    //CosTheta_Phi = new GH2("CosTheta_Phi","Pi0 Photons Cos#theta vs. #phi",180,-1,1,360,-180,180);
    ////CosPhotons = new GH1("CosPhotons","Pi0 Photons Cos#theta",360,-1,1);
    //CosTheta_Phi_MM = new GH2("CosTheta_Phi_MM","Pi0 Photons Cos#theta vs. #phi with MM-cut",180,-1,1,360,-180,180);
    //Pi0_IM = new GH1("Pi0_IM", "Pi0 Invariant Mass", 180,0,180);
}

PAR_MC::~PAR_MC()
{
}

Bool_t	PAR_MC::Init()
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if(!InitBackgroundCuts()) return kFALSE;
    if(!InitTargetMass()) return kFALSE;

    if(!PPhysics::Init()) return kFALSE;

    cout << "--------------------------------------------------" << endl;
	return kTRUE;
}
Double_t PAR_MC::myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 )
{
	 TVector3 p1 = t1.Vect();
	 TVector3 p2 = t2.Vect();
	//Double_t cosinoos =p1*p2/(p1.Mag()*p2.Mag()) ;
	//return cosinoos;
	return p1.Angle(p2);
}

void PAR_MC::Pi0_background(const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree,const GTreeA2Geant a2geant,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM,GH1* pi0_MM,GH1* pi0_MM_OA,GH1* com_OA,GH1* com_OA_Eff)
{
	Double_t Ek;
	Double_t Th;
	Double_t Rnd;
	
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high) && (photontree.GetNParticles() == 1))

			//&& (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(l))<angle*TMath::Pi()/180) )//OA-cut	
			{
				//Int_t num_mc_track = a2geant.GetNTrueParticles();
				//cout << "# of pts is:  " << num_mc_track << "\n" << endl;	
				//for (int l=0; l < num_mc_track; l++)
				for (int i=0; i< photontree.GetNParticles(); i++)
				{
					//cout << TMath::Abs(a2geant.GetTrueVector(l).Mag())*1000 <<  "\n" << endl;
					//cout <<  "l was" << l <<" and theta of the track is: " << a2geant.GetTrueTheta(l) << "  with mass    "<< TMath::Abs(a2geant.GetTrueVector(l).Mag())*1000 <<"\n" <<endl;
					//if ( a2geant.GetTrueTheta(l) > 155 && photontree.GetNParticles()==1)
					//{
						//Int_t y = (l==2) ? 3 : 2 ;
						//cout << "particle #  " << l << "   just passed the backward hole, and it is actually a " << a2geant.GetTrueID(l)<< "\n" << endl;
					
					TLorentzVector origPi0 = a2geant.GetTrueVector(1)*1000;
					TLorentzVector missP_pi0 = CalcMissingP4(origPi0,j);
					TLorentzVector missP_comp = CalcMissingP4(photontree,i,j);
					com_OA->Fill(myOA_Calculator(missP_pi0,missP_comp)*TMath::RadToDeg());
					//cout << "OA is:  " << myOA_Calculator(missP_pi0,missP_comp)*TMath::RadToDeg() << "\n" << endl;	
						//for (int i=0; i < photontree.GetNParticles(); i++)
						//{
							//cout << photontree.GetNParticles() <<" of photons with theta of:  " << photontree.GetTheta(i) <<"   theta of proton is:  "<< rootinotree.GetTheta(0) <<"\n" << endl;
							//if (i==1) cout << "extra photon found" << "\n" << endl;
							//if (triggertree.GetHelicity() ) // now if the helicity is 1
							//{	
							//	FillMissingMass(photontree,i,j,com_MM_hp);
							//}
							//else if (!triggertree.GetHelicity() ) // now if the helicity is 0
					
							//{
					TRandom3* MyRnd = new TRandom3(0);
					//MyRnd->SetSeed(6678);
					//Ek = CalcMissingP4(photontree,i,j).E() - CalcMissingP4(photontree,i,j).M();
					//Th = CalcMissingP4(photontree,i,j).Theta()*TMath::RadToDeg();
					Ek = missP_pi0.E() - missP_pi0.M();
					Th = missP_pi0.Theta()*TMath::RadToDeg();
					//cout << origPi0.E() << "  Ek= " << Ek << "  Th = "<< Th << "\t" << origPi0.Theta()*TMath::RadToDeg() <<endl;
					Rnd = MyRnd->Rndm();
					//if (Rnd <= eff->GetBinContent(lookup->FindBin(Ek,Th)))
					if (Rnd <= eff_without_OA[TMath::CeilNint(Ek/2)-1][TMath::CeilNint((Th-20)/5)-1])				
					{
						FillMissingMass(photontree,i,j,com_MM);
						FillMissingMass(origPi0,j,pi0_MM);
						com_OA_Eff->Fill(myOA_Calculator(missP_pi0,missP_comp)*TMath::RadToDeg());
						if ((rootinotree.GetNParticles()==1) && (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<15*TMath::DegToRad()) )
						{
							FillMissingMass(origPi0,j,pi0_MM_OA);
						}
					}
						
				} 				
				
			}
		}
		
}
//-----------------------------------Eff revisited, May 3 2016 ----------------------------------------------------
void PAR_MC::Eff_rev(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,Float_t angle,GH1* time_eff,GH2* denom,GH2* ncoa,GH1* denom_19_30,GH1* num_19_30, GH1* denom_30_40,GH1* num_30_40, GH1* denom_40_50,GH1* num_40_50, GH1* denom_50_60,GH1* num_50_60, GH1* denom_60_70,GH1* num_60_70, GH1* oa)
{
	Double_t Mytime;
	Double_t E_k;
	Double_t Th;		
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			//cout << Th << "  was theta" << endl;	
			if(pi0tree.GetNParticles()!=0)
			{
        			if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) && (CalcMissingMass(pi0tree,0,j)<970) && (CalcMissingMass(pi0tree,0,j)>910))//Select events based on MissMass.	
				{
				//cout << ".Theta()*TMath::RadToDeg() gives: " << CalcMissingP4(pi0tree,0,j).Theta()*TMath::RadToDeg() << endl;
					Th = CalcMissingP4(pi0tree,0,j).Theta()*TMath::RadToDeg();
					Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);
					//cout << Mytime << endl;
					time_eff->Fill(Mytime);	
					E_k = CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j);
					denom->Fill(E_k,Th,Mytime);
					if (rootinotree.GetNParticles()==1){						
						oa->Fill(myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))*TMath::RadToDeg(),Mytime);
						//oa_table->Fill(E_k,Th,myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))*TMath::RadToDeg(),Mytime);
						if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
						{
							ncoa->Fill(E_k,Th,Mytime);
						}
									
					}
					if((Th >= 19) && (Th < 30))
					{	
						denom_19_30->Fill(E_k,Mytime);
						if (rootinotree.GetNParticles()==1)
						{
							if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
							{
								num_19_30->Fill(E_k,Mytime);
							}
						}
					}	
					else if((Th >= 30) && (Th < 40))
					{
						denom_30_40->Fill(E_k,Mytime);
						if (rootinotree.GetNParticles()==1)
						{
							if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
							{
								num_30_40->Fill(E_k,Mytime);
							}
						}
					}
					else if((Th >= 40) && (Th < 50))
					{
						denom_40_50->Fill(E_k,Mytime);
						if (rootinotree.GetNParticles()==1)
						{
							if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
							{
								num_40_50->Fill(E_k,Mytime);
							}
						}
					}
					else if((Th >= 50) && (Th < 60))
					{
						denom_50_60->Fill(E_k,Mytime);
						if (rootinotree.GetNParticles()==1)
						{
							if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
							{
								num_50_60->Fill(E_k,Mytime);
							}
						}
					}
					else if((Th >= 60) && (Th < 70))
					{
						denom_60_70->Fill(E_k,Mytime);
						if (rootinotree.GetNParticles()==1)
						{
							if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::DegToRad())
							{
								num_60_70->Fill(E_k,Mytime);
							}
						}
					}					
				}
			}
		}	
	//}	
						
		
	
}
//-----------------------------------
void PAR_MC::Find_Holes(const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high,GH2* cos_phi)//,GH2* cos_phi_mm,GH1* pi0_im)
{
	//Double_t Mytime;
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) ) // check if a pi0 was detected and it is a good pi0
		{
				//FillMass(pi0tree,0,j,pi0_im);
				for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
				{
					cos_phi->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180),tracktree.GetPhi(pi0tree.GetTrackIndexList(0)[i]));
					/***if (CalcMissingMass(pi0tree,0,j)<970 && CalcMissingMass(pi0tree,0,j)>910)
					{
						cos_phi_mm->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180),tracktree.GetPhi(pi0tree.GetTrackIndexList(0)[i]));
					}***/
			}
		}
	}

}
Bool_t	PAR_MC::Start()
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

void	PAR_MC::ProcessEvent()
{
    // Uncomment the following line to decode double hits in the tagger
    //GetTagger()->DecodeDoubles();

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
	
	//Pi0_background(*GetTagger(),*GetRootinos(),*GetPhotons(),*GetGeant(),15,285,305,Com_MM,Pi0_MM,Pi0_MM_OA,Com_OA,Com_OA_Eff);
        Eff_rev(*GetRootinos(),*GetNeutralPions(),150,Time_Eff,Denom,NChargedOA,Denom_19_30,Num_19_30, Denom_30_40, Num_30_40, Denom_40_50, Num_40_50, Denom_50_60, Num_50_60, Denom_60_70, Num_60_70,OA);

}

void	PAR_MC::ProcessScalerRead()
{
    PPhysics::ProcessScalerRead();
}

Bool_t	PAR_MC::Write()
{
    // Write all GH1's and TObjects defined in this class
    return GTreeManager::Write();
}
