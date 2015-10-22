#include "PAR_Compton.h"

PAR_Compton::PAR_Compton()
{ 
     //Compton Hists:
    Com_MM_hp = new GH1("Com_MM_hp","Rootino Missing Mass-Helicity = +1", 1200,600,1800);
    //Com_pMass = new GH1("Com_pMass","Rootino Mass",180,0,180);  	
    
    Com_MM_hm = new GH1("Com_MM_hm","Rootino Missing Mass-Helicity = -1", 1200,600,1800);
    //Com_pMass = new GH1("Com_pMass","Rootino Mass",180,0,180);  	
    	
	Theta_hp = new GH1("Theta_hp","Yield for 0<Photon.Theta<180-Helicity=+1",18,0,180);
    	Theta_hm = new GH1("Theta_hm","Yield for 0<Photon.Theta<180-Helicity=-1",18,0,180);

	Com_MM_OA_hp_0 = new GH1("Com_MM_OA_hp_0","Rootino Missing Mass 0<Theta<10,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_0 = new GH1("Com_MM_OA_hm_0","Rootino Missing Mass 0<Theta<10,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_10 = new GH1("Com_MM_OA_hp_10","Rootino Missing Mass 10<Theta<20,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_10 = new GH1("Com_MM_OA_hm_10","Rootino Missing Mass 10<Theta<20,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_20 = new GH1("Com_MM_OA_hp_20","Rootino Missing Mass 20<Theta<30,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_20 = new GH1("Com_MM_OA_hm_20","Rootino Missing Mass 20<Theta<30,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_30 = new GH1("Com_MM_OA_hp_30","Rootino Missing Mass 30<Theta<40,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_30 = new GH1("Com_MM_OA_hm_30","Rootino Missing Mass 30<Theta<40,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_40 = new GH1("Com_MM_OA_hp_40","Rootino Missing Mass 40<Theta<50,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_40 = new GH1("Com_MM_OA_hm_40","Rootino Missing Mass 40<Theta<50,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_50 = new GH1("Com_MM_OA_hp_50","Rootino Missing Mass 50<Theta<60,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_50 = new GH1("Com_MM_OA_hm_50","Rootino Missing Mass 50<Theta<60,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_60 = new GH1("Com_MM_OA_hp_60","Rootino Missing Mass 60<Theta<70,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_60 = new GH1("Com_MM_OA_hm_60","Rootino Missing Mass 60<Theta<70,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_70 = new GH1("Com_MM_OA_hp_70","Rootino Missing Mass 70<Theta<80,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_70 = new GH1("Com_MM_OA_hm_70","Rootino Missing Mass 70<Theta<80,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_80 = new GH1("Com_MM_OA_hp_80","Rootino Missing Mass 80<Theta<90,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_80 = new GH1("Com_MM_OA_hm_80","Rootino Missing Mass 80<Theta<90,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_90 = new GH1("Com_MM_OA_hp_90","Rootino Missing Mass 90<Theta<100,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_90 = new GH1("Com_MM_OA_hm_90","Rootino Missing Mass 90<Theta<100,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_100 = new GH1("Com_MM_OA_hp_100","Rootino Missing Mass 100<Theta<110,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_100 = new GH1("Com_MM_OA_hm_100","Rootino Missing Mass 100<Theta<110,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_110 = new GH1("Com_MM_OA_hp_110","Rootino Missing Mass 110<Theta<120,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_110 = new GH1("Com_MM_OA_hm_110","Rootino Missing Mass 110<Theta<120,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_120 = new GH1("Com_MM_OA_hp_120","Rootino Missing Mass 120<Theta<130,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_120 = new GH1("Com_MM_OA_hm_120","Rootino Missing Mass 120<Theta<130,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_130 = new GH1("Com_MM_OA_hp_130","Rootino Missing Mass 130<Theta<140,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_130 = new GH1("Com_MM_OA_hm_130","Rootino Missing Mass 130<Theta<140,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_140 = new GH1("Com_MM_OA_hp_140","Rootino Missing Mass 140<Theta<150,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_140 = new GH1("Com_MM_OA_hm_140","Rootino Missing Mass 140<Theta<150,After OA-cut-Helicity = -1", 700,600,1300);

	Com_MM_OA_hp_150 = new GH1("Com_MM_OA_hp_150","Rootino Missing Mass 150<Theta<160,After OA-cut-Helicity = +1", 700,600,1300);
	Com_MM_OA_hm_150 = new GH1("Com_MM_OA_hm_150","Rootino Missing Mass 150<Theta<160,After OA-cut-Helicity = -1", 700,600,1300);

}

PAR_Compton::~PAR_Compton()
{
}

Bool_t	PAR_Compton::Init()
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if(!InitBackgroundCuts()) return kFALSE;
    if(!InitTargetMass()) return kFALSE;

    if(!PPhysics::Init()) return kFALSE;

    cout << "--------------------------------------------------" << endl;
	return kTRUE;
}
Double_t PAR_Compton::myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 )
{
	 TVector3 p1 = t1.Vect();
	 TVector3 p2 = t2.Vect();
	//Double_t cosinoos =p1*p2/(p1.Mag()*p2.Mag()) ;
	//return cosinoos;
	return p1.Angle(p2);
}
//--------------------------------Compton Analysis Functions starts here:-----------------------------------------

void PAR_Compton::Test_Compton(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hm,GH1* com_MM_OA_hp_0,GH1* com_MM_OA_hm_0, GH1* com_MM_OA_hp_10,GH1* com_MM_OA_hm_10, GH1* com_MM_OA_hp_20,GH1* com_MM_OA_hm_20, GH1* com_MM_OA_hp_30,GH1* com_MM_OA_hm_30, GH1* com_MM_OA_hp_40,GH1* com_MM_OA_hm_40, GH1* com_MM_OA_hp_50,GH1* com_MM_OA_hm_50, GH1* com_MM_OA_hp_60,GH1* com_MM_OA_hm_60, GH1* com_MM_OA_hp_70,GH1* com_MM_OA_hm_70, GH1* com_MM_OA_hp_80,GH1* com_MM_OA_hm_80, GH1* com_MM_OA_hp_90,GH1* com_MM_OA_hm_90, GH1* com_MM_OA_hp_100,GH1* com_MM_OA_hm_100, GH1* com_MM_OA_hp_110,GH1* com_MM_OA_hm_110, GH1* com_MM_OA_hp_120,GH1* com_MM_OA_hm_120, GH1* com_MM_OA_hp_130,GH1* com_MM_OA_hm_130, GH1* com_MM_OA_hp_140,GH1* com_MM_OA_hm_140, GH1* com_MM_OA_hp_150,GH1* com_MM_OA_hm_150,GH1* theta_hp,GH1* theta_hm)
{
	Double_t Mytime;	
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			for (Int_t i = 0; i < photontree.GetNParticles(); i++)
			{
				if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high)&&(photontree.GetNParticles()==1))
				{	
					Mytime=GetTagger()->GetTaggedTime(j)-photontree.GetTime(i);	
					if (triggertree.GetHelicity() ) // now if the helicity is 1
					{	
						if ((CalcMissingMass(photontree,0,j)<940)&&(CalcMissingMass(photontree,0,j)>850))
						{
							theta_hp->Fill(photontree.GetTheta(0),Mytime);
						}
        					
						//FillBeamAsymmetry(photontree,i,j,com_pMass,0);
						if  (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							FillMissingMass(photontree,i,j,com_MM_hp);
							if ((photontree.GetTheta(0)>=0)&&(photontree.GetTheta(0)<10))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_0);
							}
							else if ((photontree.GetTheta(0)>=10)&&(photontree.GetTheta(0)<20))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_10);
							}
							else if ((photontree.GetTheta(0)>=20)&&(photontree.GetTheta(0)<30))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_20);
							}
							else if ((photontree.GetTheta(0)>=30)&&(photontree.GetTheta(0)<40))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_30);
							}
							else if ((photontree.GetTheta(0)>=40)&&(photontree.GetTheta(0)<50))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_40);
							}
							else if ((photontree.GetTheta(0)>=50)&&(photontree.GetTheta(0)<60))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_50);
							}
							else if ((photontree.GetTheta(0)>=60)&&(photontree.GetTheta(0)<70))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_60);
							}
							else if ((photontree.GetTheta(0)>=70)&&(photontree.GetTheta(0)<80))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_70);
							}
							else if ((photontree.GetTheta(0)>=80)&&(photontree.GetTheta(0)<90))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_80);
							}
							else if ((photontree.GetTheta(0)>=90)&&(photontree.GetTheta(0)<100))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_90);
							}
							else if ((photontree.GetTheta(0)>=100)&&(photontree.GetTheta(0)<110))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_100);
							}
							else if ((photontree.GetTheta(0)>=110)&&(photontree.GetTheta(0)<120))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_110);
							}
							else if ((photontree.GetTheta(0)>=120)&&(photontree.GetTheta(0)<130))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_120);
							}
							else if ((photontree.GetTheta(0)>=130)&&(photontree.GetTheta(0)<140))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_130);
							}
							else if ((photontree.GetTheta(0)>=140)&&(photontree.GetTheta(0)<150))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_140);
							}
							else if ((photontree.GetTheta(0)>=150)&&(photontree.GetTheta(0)<160))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_150);
							}
							
						}		
					}
					else if (!triggertree.GetHelicity() ) // now if the helicity is 0
					{
						if ((CalcMissingMass(photontree,0,j)<940)&&(CalcMissingMass(photontree,0,j)>850))
						{
							theta_hm->Fill(photontree.GetTheta(0),Mytime);
						}
						
						//FillBeamAsymmetry(photontree,i,j,com_pMass,0);
						if  (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							FillMissingMass(photontree,i,j,com_MM_hm);
							if ((photontree.GetTheta(0)>=0)&&(photontree.GetTheta(0)<10))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_0);
							}
							else if ((photontree.GetTheta(0)>=10)&&(photontree.GetTheta(0)<20))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_10);
							}
							else if ((photontree.GetTheta(0)>=20)&&(photontree.GetTheta(0)<30))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_20);
							}
							else if ((photontree.GetTheta(0)>=30)&&(photontree.GetTheta(0)<40))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_30);
							}
							else if ((photontree.GetTheta(0)>=40)&&(photontree.GetTheta(0)<50))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_40);
							}
							else if ((photontree.GetTheta(0)>=50)&&(photontree.GetTheta(0)<60))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_50);
							}
							else if ((photontree.GetTheta(0)>=60)&&(photontree.GetTheta(0)<70))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_60);
							}
							else if ((photontree.GetTheta(0)>=70)&&(photontree.GetTheta(0)<80))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_70);
							}
							else if ((photontree.GetTheta(0)>=80)&&(photontree.GetTheta(0)<90))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_80);
							}
							else if ((photontree.GetTheta(0)>=90)&&(photontree.GetTheta(0)<100))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_90);
							}
							else if ((photontree.GetTheta(0)>=100)&&(photontree.GetTheta(0)<110))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_100);
							}
							else if ((photontree.GetTheta(0)>=110)&&(photontree.GetTheta(0)<120))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_110);
							}
							else if ((photontree.GetTheta(0)>=120)&&(photontree.GetTheta(0)<130))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_120);
							}
							else if ((photontree.GetTheta(0)>=130)&&(photontree.GetTheta(0)<140))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_130);
							}
							else if ((photontree.GetTheta(0)>=140)&&(photontree.GetTheta(0)<150))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_140);
							}
							else if ((photontree.GetTheta(0)>=150)&&(photontree.GetTheta(0)<160))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_150);
							}
							

						}
					}
				}	

			}
		}
		
		
	}


}

Bool_t	PAR_Compton::Start()
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

void	PAR_Compton::ProcessEvent()
{
    // Uncomment the following line to decode double hits in the tagger
    //GetTagger()->DecodeDoubles();
/***
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

    }***/
	Test_Compton(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),15,295,305,Com_MM_hp,Com_MM_hm,Com_MM_OA_hp_0,Com_MM_OA_hm_0, Com_MM_OA_hp_10,Com_MM_OA_hm_10, Com_MM_OA_hp_20,Com_MM_OA_hm_20, Com_MM_OA_hp_30,Com_MM_OA_hm_30, Com_MM_OA_hp_40,Com_MM_OA_hm_40, Com_MM_OA_hp_50,Com_MM_OA_hm_50, Com_MM_OA_hp_60,Com_MM_OA_hm_60, Com_MM_OA_hp_70,Com_MM_OA_hm_70, Com_MM_OA_hp_80,Com_MM_OA_hm_80, Com_MM_OA_hp_90,Com_MM_OA_hm_90, Com_MM_OA_hp_100,Com_MM_OA_hm_100, Com_MM_OA_hp_110,Com_MM_OA_hm_110, Com_MM_OA_hp_120,Com_MM_OA_hm_120, Com_MM_OA_hp_130,Com_MM_OA_hm_130, Com_MM_OA_hp_140,Com_MM_OA_hm_140, Com_MM_OA_hp_150,Com_MM_OA_hm_150,Theta_hp,Theta_hm);	
}

void	PAR_Compton::ProcessScalerRead()
{
    PPhysics::ProcessScalerRead();
}

Bool_t	PAR_Compton::Write()
{
    // Write all GH1's and TObjects defined in this class
    return GTreeManager::Write();
}
