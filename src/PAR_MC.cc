#include "PAR_MC.h"

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

    Com_MM_hp = new GH1("Com_MM_hp","MC Rootino Missing Mass-Helicity = +1", 200,500,1300);
    Com_MM_hm = new GH1("Com_MM_hm","MC Rootino Missing Mass-Helicity = -1", 200,500,1300);	
    Com_MM_hp2 = new GH1("Com_MM_hp2","MC MissingMass, based on other pi0 photon", 200,500,1300);
	
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
void PAR_MC::Pi0_background(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree,const GTreeA2Geant a2geant,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hp2,GH1* com_MM_hm,TH2F* lookup)
{
	Double_t Ek;
	Double_t Th;
	Double_t Rnd;
	//Int_t track_size = (int)pi0tree.GetTrackIndexList(0).size();	
	//cout << "Rootino # is:   " << rootinotree.GetNParticles() << "   Photon # is:    " << photontree.GetNParticles() <<"\n" << endl;
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			//if ((pi0tree.GetNParticles() != 0) && (rootinotree.GetNParticles() != 0)&& (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2)) // check if a pio photon goes to a hole and we have one rootino
			//cout << "one good compton found" << endl;
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high) && (photontree.GetNParticles() == 1))

			//&& (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(l))<angle*TMath::Pi()/180) )		
			{
				//Int_t num_mc_track = a2geant.GetNTrueParticles();
				//cout << "# of pts is:  " << num_mc_track << "\n" << endl;	
				//for (int l=2; l < 4; l++)
				for (int i=0; i< photontree.GetNParticles(); i++)
				{
					//cout << TMath::Abs(a2geant.GetTrueVector(l).Mag())*1000 <<  "\n" << endl;
					//cout << l <<"  was l and theta of the track is: " << a2geant.GetTrueTheta(l) << "  with mass    "<< TMath::Abs(a2geant.GetTrueVector(l).Mag())*1000 <<"\n" <<endl;
					//if ( a2geant.GetTrueTheta(l) > 155 && photontree.GetNParticles()==1)
					//{
						//Int_t y = (l==2) ? 3 : 2 ;
						//cout << "particle #  " << l << "   just passed the backward hole, and it is actually a " << a2geant.GetTrueID(l)<< "\n" << endl;
						//TLorentzVector missP = a2geant.GetTrueVector(y);
						//cout << "Missing Mass is:  " << CalcMissingP4(missP,j).M() << "\n" << endl;
						//FillMissingMass(missP,j,com_MM_hp2);
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
					Ek = CalcMissingP4(photontree,i,j).E() - CalcMissingP4(photontree,i,j).M();
					Th = CalcMissingP4(photontree,i,j).Theta()*TMath::RadToDeg();
					Rnd = MyRnd->Rndm();
					//cout << "Event has Ek= "<<Ek<<"  and Th= "<<Th<<"  with Rnd= "<< Rnd<< "\n"<<endl; 
					//if (Rnd <= lookup->GetBinContent((Int_t)(((Int_t)Ek)/2)+1,(Int_t)(((Int_t)Th-19)/2)+1))//means we accept it
					if (Rnd <= lookup->GetBinContent(lookup->FindBin(Ek,Th)))
					{
						FillMissingMass(photontree,i,j,com_MM_hm);
					}
							//}
					
						//}
					//}
				}				
				
			}
		}
		
		
	}


}
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
	TFile *f = new TFile("Eff.root");
	TH2F* LookUp = (TH2F*)f->Get("eff");
	Pi0_background(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetGeant(),15,285,315,Com_MM_hp,Com_MM_hp2,Com_MM_hm,LookUp);


	//Find_Holes(*GetNeutralPions(),*GetTagger(),*GetTracks(),205,305,CosTheta_Phi);//,CosTheta_Phi_MM, Pi0_IM);

	f->Close();


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
