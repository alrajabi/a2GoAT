#include "PAR_Class.h"

PAR_Class::PAR_Class()
{ 
    

    incDenom	= new GH1("incDenom","Inclusive Denominator,35 <Proton.Theta < 40", 30,0,300);
    Mgg_40  =new GH1("Mgg_40","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_40	= new GH1("NChargedOA_40",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_40	= new GH1("NCharged_40",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_40 	= new GH1("Denom_40",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_50  =new GH1("Mgg_50","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_50	= new GH1("NChargedOA_50",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_50	= new GH1("NCharged_50",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_50 	= new GH1("Denom_50",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);	
    Mgg_60  =new GH1("Mgg_60","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_60	= new GH1("NChargedOA_60",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_60	= new GH1("NCharged_60",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_60 	= new GH1("Denom_60",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_70  =new GH1("Mgg_70","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_70	= new GH1("NChargedOA_70",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_70	= new GH1("NCharged_70",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_70 	= new GH1("Denom_70",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_80  =new GH1("Mgg_80","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_80	= new GH1("NChargedOA_80",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_80	= new GH1("NCharged_80",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_80 	= new GH1("Denom_80",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_90  =new GH1("Mgg_90","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_90	= new GH1("NChargedOA_90",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_90	= new GH1("NCharged_90",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_90 	= new GH1("Denom_90",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);	
    Mgg_100  =new GH1("Mgg_100","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_100	= new GH1("NChargedOA_100",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_100	= new GH1("NCharged_100",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_100 	= new GH1("Denom_100",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_110  =new GH1("Mgg_110","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_110	= new GH1("NChargedOA_110",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_110	= new GH1("NCharged_110",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_110 	= new GH1("Denom_110",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_120  =new GH1("Mgg_120","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_120	= new GH1("NChargedOA_120",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_120	= new GH1("NCharged_120",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_120 	= new GH1("Denom_120",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_130  =new GH1("Mgg_130","Mgg for 40 <Theta < 50 with cut on MM",250,0,250);
    NChargedOA_130	= new GH1("NChargedOA_130",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged_130	= new GH1("NCharged_130",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom_130 	= new GH1("Denom_130",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);			
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
void PAR_Class::Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree, Int_t theta0, Int_t theta1, Float_t angle,GH1* inclusive_denom,GH1* mgg_40,GH1* denom_40,GH1* nc_40,GH1* ncoa_40,GH1* mgg_50,GH1* denom_50,GH1* nc_50,GH1* ncoa_50,GH1* mgg_60,GH1* denom_60,GH1* nc_60,GH1* ncoa_60,GH1* mgg_70,GH1* denom_70,GH1* nc_70,GH1* ncoa_70,GH1* mgg_80,GH1* denom_80,GH1* nc_80,GH1* ncoa_80,GH1* mgg_90,GH1* denom_90,GH1* nc_90,GH1* ncoa_90,GH1* mgg_100,GH1* denom_100,GH1* nc_100,GH1* ncoa_100,GH1* mgg_110,GH1* denom_110,GH1* nc_110,GH1* ncoa_110,GH1* mgg_120,GH1* denom_120,GH1* nc_120,GH1* ncoa_120,GH1* mgg_130,GH1* denom_130,GH1* nc_130,GH1* ncoa_130) //GH1* MM_b4_cut )
{
			
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		Float_t E_k=0;
		if((CalcMissingP4(pi0tree,0,j).Theta()>theta0*TMath::Pi()/180) && (CalcMissingP4(pi0tree,0,j).Theta()<theta1*TMath::Pi()/180))
		{
        		if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       			{	
				//MM_b4_cut->Fill(CalcMissingMass(pi0tree, 0,j));	//Not done now for saving time.
				if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))//Select events based on MissMass.
				{
					E_k = CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j);
					inclusive_denom->Fill(CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j));//inc. denominator
					if ((E_k>=40)&&(E_k<50))
					{
						FillMass(pi0tree,0,mgg_40);
						denom_40->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_40->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_40->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=50)&&(E_k<60))
					{
						FillMass(pi0tree,0,mgg_50);
						denom_50->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_50->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_50->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=60)&&(E_k<70))
					{
						FillMass(pi0tree,0,mgg_60);
						denom_60->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_60->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_60->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=70)&&(E_k<80))
					{
						FillMass(pi0tree,0,mgg_70);
						denom_70->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_70->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_70->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=80)&&(E_k<90))
					{
						FillMass(pi0tree,0,mgg_80);
						denom_80->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_80->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_80->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=90)&&(E_k<100))
					{
						FillMass(pi0tree,0,mgg_90);
						denom_90->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_90->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_90->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=100)&&(E_k<110))
					{
						FillMass(pi0tree,0,mgg_100);
						denom_100->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_100->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_100->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=110)&&(E_k<120))
					{
						FillMass(pi0tree,0,mgg_110);
						denom_110->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_110->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_110->Fill(E_k);
							}	
							
						}
					}
					else if ((E_k>=120)&&(E_k<130))
					{
						FillMass(pi0tree,0,mgg_120);
						denom_120->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_120->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_120->Fill(E_k);
							}	
							
						}	
					}
					else if ((E_k>=130)&&(E_k<140))
					{
						FillMass(pi0tree,0,mgg_130);
						denom_130->Fill(E_k);
						if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
						{
							nc_130->Fill(E_k);//NC 
							if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
							{
								ncoa_130->Fill(E_k);
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
{/***
	 // fill time diff (tagger - pi0), all pi0
    FillTime(*GetNeutralPions(),time);
    FillTimeCut(*GetNeutralPions(),time_cut);
	// Not necessary part
	// fill missing mass, all pi0
    FillMissingMass(*GetNeutralPions(),MM);
	
	// fill invariant mass, all pi0
    FillMass(*GetNeutralPions(),IM);
	
    // Some neutral decays
    for (Int_t i = 0; i < GetNeutralPions()->GetNParticles(); i++)
    {
         Fill MM for 2 photon decay
        if ((GetNeutralPions()->GetNSubParticles(i) == 2) & (GetNeutralPions()->GetNSubPhotons(i) == 2))
        {
		// fill time diff (tagger - pi0), this pi0
        FillTime(*GetNeutralPions(),i,time_2g);
        FillTimeCut(*GetNeutralPions(),i,time_2g_cut);
			
		// fill missing mass, this pi0
               FillMissingMass(*GetNeutralPions(),i,MM_2g);
            
		 //fill invariant mass, this pi0
            FillMass(*GetNeutralPions(),i,IM_2g);
        }

    }***/
	Eff(*GetRootinos(),*GetNeutralPions(), 35,40, 15, incDenom,Mgg_40,Denom_40,NCharged_40,NChargedOA_40,Mgg_50,Denom_50,NCharged_50,NChargedOA_50,Mgg_60,Denom_60,NCharged_60,NChargedOA_60,Mgg_70,Denom_70,NCharged_70,NChargedOA_70,Mgg_80,Denom_80,NCharged_80,NChargedOA_80,Mgg_90,Denom_90,NCharged_90,NChargedOA_90,Mgg_100,Denom_100,NCharged_100,NChargedOA_100,Mgg_110,Denom_110,NCharged_110,NChargedOA_110,Mgg_120,Denom_120,NCharged_120,NChargedOA_120,Mgg_130,Denom_130,NCharged_130,NChargedOA_130);
        
		
	
}

void	PAR_Class::ProcessScalerRead()
{
	// Fill Tagger Scalers
	//FillScalers(GetTC_scaler_min(),GetTC_scaler_max(),TaggerAccScal);
}

Bool_t	PAR_Class::Write()
{
	// Write some TH1s
	//GTreeManager::Write(TaggerAccScal);
	//GTreeManager::Write(Test1);
	//GTreeManager::Write(Test2);
	//GTreeManager::Write(Test3);
	//GTreeManager::Write(OA);
	//GTreeManager::Write(MissMass);
	// Write all GH1's easily
	GTreeManager::Write();
}
