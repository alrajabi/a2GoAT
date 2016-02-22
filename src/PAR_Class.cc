#include "PAR_Class.h"

PAR_Class::PAR_Class()
{ 
	//pi0 Eff Revisited Hists: (Added Jan26,2016)
    Mgg_all_theta = new GH1("Mgg_all_theta","Mgg for 0 <Theta < 180 with cut on MM",250,0,250);
    //Rootino_Mass = new GH1("Rootino_Mass","Mass of Rootino",125,0,1250);
    NChargedOA_hp	= new GH2("NChargedOA_hp",	"NC Prime at OA,E_k vs. Proton #Theta-Helicity=+1" ,75,0, 150,68,19,155);
    NChargedOA_hm	= new GH2("NChargedOA_hm",	"NC Prime at OA,E_k vs. Proton #Theta-Helicity=-1" ,75,0, 150,68,19,155);
    Denom_hp 	= new GH2("Denom_hp",	"Denom, E_k vs. Proton #Theta-Helicity=+1" ,75,0, 150,68,19,155);
    Denom_hm 	= new GH2("Denom_hm",	"Denom, E_k vs. Proton #Theta-Helicity=-1" ,75,0, 150,68,19,155);
/***
	//Carbon SF REvisited Hists: (Added Feb12, 2016)

    Pi0_MM_hp_19_36 = new GH1("Pi0_MM_hp_19_36","Pi0 MM for 19 < Theta < 36, h=+1",125, 800,1300);
    Pi0_MM_hm_19_36 = new GH1("Pi0_MM_hm_19_36","Pi0 MM for 19 < Theta < 36, h=-1",125, 800,1300);

    Pi0_MM_hp_36_53 = new GH1("Pi0_MM_hp_36_53","Pi0 MM for 36 < Theta < 53, h=+1",125, 800,1300);
    Pi0_MM_hm_36_53 = new GH1("Pi0_MM_hm_36_53","Pi0 MM for 36 < Theta < 53, h=-1",125, 800,1300);

    Pi0_MM_hp_53_70 = new GH1("Pi0_MM_hp_53_70","Pi0 MM for 53 < Theta < 70, h=+1",125, 800,1300);
    Pi0_MM_hm_53_70 = new GH1("Pi0_MM_hm_53_70","Pi0 MM for 53 < Theta < 70, h=-1",125, 800,1300);

    Pi0_MM_hp_70_87 = new GH1("Pi0_MM_hp_70_87","Pi0 MM for 70 < Theta < 87, h=+1",125, 800,1300);
    Pi0_MM_hm_70_87 = new GH1("Pi0_MM_hm_70_87","Pi0 MM for 70 < Theta < 87, h=-1",125, 800,1300);

    Pi0_MM_hp_87_104 = new GH1("Pi0_MM_hp_87_104","Pi0 MM for 87 < Theta < 104, h=+1",125, 800,1300);
    Pi0_MM_hm_87_104 = new GH1("Pi0_MM_hm_87_104","Pi0 MM for 87 < Theta < 104, h=-1",125, 800,1300);

    Pi0_MM_hp_104_121 = new GH1("Pi0_MM_hp_104_121","Pi0 MM for 104 < Theta < 121, h=+1",125, 800,1300);
    Pi0_MM_hm_104_121 = new GH1("Pi0_MM_hm_104_121","Pi0 MM for 104 < Theta < 121, h=-1",125, 800,1300);

    Pi0_MM_hp_121_138 = new GH1("Pi0_MM_hp_121_138","Pi0 MM for 121 < Theta < 138, h=+1",125, 800,1300);
    Pi0_MM_hm_121_138 = new GH1("Pi0_MM_hm_121_138","Pi0 MM for 121 < Theta < 138, h=-1",125, 800,1300);

    Pi0_MM_hp_138_155 = new GH1("Pi0_MM_hp_138_155","Pi0 MM for 138 < Theta < 155, h=+1",125, 800,1300);
    Pi0_MM_hm_138_155 = new GH1("Pi0_MM_hm_138_155","Pi0 MM for 138 < Theta < 155, h=-1",125, 800,1300);

    Pi0_MM_hp = new GH1("Pi0_MM_hp","Pi0 MM for All Theta, h=+1",125, 800,1300);
    Pi0_MM_hm = new GH1("Pi0_MM_hm","Pi0 MM for All Theta, h=-1",125, 800,1300);
	
    Theta_hp = new GH1("Theta_hp","Yield for 0<Theta<180-Helicity=+1",18,0,180);
    Theta_hm = new GH1("Theta_hm","Yield for 0<Theta<180-Helicity=-1",18,0,180);
***/
    //pi0 Eff hists:

   /*** incDenom	= new GH1("incDenom","Inclusive Denominator,35 <Proton.Theta < 40", 15,0, 150);
    Mgg_all_theta = new GH1("Mgg_all_theta","Mgg for 0 <Theta < 180 with cut on MM",250,0,250);
    NChargedOA	= new GH1("NChargedOA",	"NC Prime at OA,35 <Proton.Theta < 40" ,15,0, 150);
    NCharged	= new GH1("NCharged",	"NC, 35 <Proton.Theta < 40 " ,15,0, 150);
    Denom 	= new GH1("Denom",	"Denom, 35 <Proton.Theta < 40 " ,15,0, 150);
    Mgg_0  =new GH1("Mgg_0","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_10  =new GH1("Mgg_10","Mgg for 0 <Ek < 10 with cut on MM",250,0,250);
    Mgg_20  =new GH1("Mgg_20","Mgg for 10 <Ek < 20 with cut on MM",250,0,250);
    Mgg_30  =new GH1("Mgg_30","Mgg for 20 <Ek < 30 with cut on MM",250,0,250);	
    Mgg_40  =new GH1("Mgg_40","Mgg for 30 <Ek < 40 with cut on MM",250,0,250);
    Mgg_50  =new GH1("Mgg_50","Mgg for 40 <Ek < 50 with cut on MM",250,0,250);
    Mgg_60  =new GH1("Mgg_60","Mgg for 50 <Ek < 60 with cut on MM",250,0,250);
    Mgg_70  =new GH1("Mgg_70","Mgg for 60 <Ek < 70 with cut on MM",250,0,250);
    Mgg_80  =new GH1("Mgg_80","Mgg for 70 <Ek < 80 with cut on MM",250,0,250);
    Mgg_90  =new GH1("Mgg_90","Mgg for 80 <Ek < 90 with cut on MM",250,0,250);
    Mgg_100  =new GH1("Mgg_100","Mgg for 90 <Ek < 100 with cut on MM",250,0,250);
    Mgg_110  =new GH1("Mgg_110","Mgg for 100 <Ek < 110 with cut on MM",250,0,250);
    Mgg_120  =new GH1("Mgg_120","Mgg for 110 <Ek < 120 with cut on MM",250,0,250);
    Mgg_130  =new GH1("Mgg_130","Mgg for 120 <Ek < 130 with cut on MM",250,0,250);***/
/***
//pi0 Asym. hists:
    Mgg_hp_0 = new GH1("Mgg_hp_0","Mgg for 0 <Theta < 10 -Helicity=+1",250,0,250);
    Mgg_hm_0 = new GH1("Mgg_hm_0","Mgg for 0 <Theta < 10 -Helicity=-1",250,0,250);	
    Mgg_hp_10 = new GH1("Mgg_hp_10","Mgg for 10 <Theta < 20 -Helicity=+1",250,0,250);
    Mgg_hm_10 = new GH1("Mgg_hm_10","Mgg for 10 <Theta < 20 -Helicity=-1",250,0,250);

    Mgg_hp_20 = new GH1("Mgg_hp_20","Mgg for 20 <Theta < 30 -Helicity=+1",250,0,250);
    Mgg_hm_20 = new GH1("Mgg_hm_20","Mgg for 20 <Theta < 30 -Helicity=-1",250,0,250);

    Mgg_hp_30 = new GH1("Mgg_hp_30","Mgg for 30 <Theta < 40 -Helicity=+1",250,0,250);
    Mgg_hm_30 = new GH1("Mgg_hm_30","Mgg for 30 <Theta < 40 -Helicity=-1",250,0,250);

    Mgg_hp_40 = new GH1("Mgg_hp_40","Mgg for 40 <Theta < 50 -Helicity=+1",250,0,250);
    Mgg_hm_40 = new GH1("Mgg_hm_40","Mgg for 40 <Theta < 50 -Helicity=-1",250,0,250);

    Mgg_hp_50 = new GH1("Mgg_hp_50","Mgg for 50 <Theta < 60 -Helicity=+1",250,0,250);
    Mgg_hm_50 = new GH1("Mgg_hm_50","Mgg for 50 <Theta < 60 -Helicity=-1",250,0,250);

    Mgg_hp_60 = new GH1("Mgg_hp_60","Mgg for 60 <Theta < 70 -Helicity=+1",250,0,250);
    Mgg_hm_60 = new GH1("Mgg_hm_60","Mgg for 60 <Theta < 70 -Helicity=-1",250,0,250);

    Mgg_hp_70 = new GH1("Mgg_hp_70","Mgg for 70 <Theta < 80 -Helicity=+1",250,0,250);
    Mgg_hm_70 = new GH1("Mgg_hm_70","Mgg for 70 <Theta < 80 -Helicity=-1",250,0,250);

    Mgg_hp_80 = new GH1("Mgg_hp_80","Mgg for 80 <Theta < 90 -Helicity=+1",250,0,250);
    Mgg_hm_80 = new GH1("Mgg_hm_80","Mgg for 80 <Theta < 90 -Helicity=-1",250,0,250);

    Mgg_hp_90 = new GH1("Mgg_hp_90","Mgg for 90 <Theta < 100 -Helicity=+1",250,0,250);
    Mgg_hm_90 = new GH1("Mgg_hm_90","Mgg for 90 <Theta < 100 -Helicity=-1",250,0,250);

    Mgg_hp_100 = new GH1("Mgg_hp_100","Mgg for 100 <Theta < 110 -Helicity=+1",250,0,250);
    Mgg_hm_100 = new GH1("Mgg_hm_100","Mgg for 100 <Theta < 110 -Helicity=-1",250,0,250);

    Mgg_hp_110 = new GH1("Mgg_hp_110","Mgg for 110 <Theta < 120 -Helicity=+1",250,0,250);
    Mgg_hm_110 = new GH1("Mgg_hm_110","Mgg for 110 <Theta < 120 -Helicity=-1",250,0,250);

    Mgg_hp_120 = new GH1("Mgg_hp_120","Mgg for 120 <Theta < 130 -Helicity=+1",250,0,250);
    Mgg_hm_120 = new GH1("Mgg_hm_120","Mgg for 120 <Theta < 130 -Helicity=-1",250,0,250);

    Mgg_hp_130 = new GH1("Mgg_hp_130","Mgg for 130 <Theta < 140 -Helicity=+1",250,0,250);
    Mgg_hm_130 = new GH1("Mgg_hm_130","Mgg for 130 <Theta < 140 -Helicity=-1",250,0,250);

    Mgg_hp_140 = new GH1("Mgg_hp_140","Mgg for 140 <Theta < 150 -Helicity=+1",250,0,250);
    Mgg_hm_140 = new GH1("Mgg_hm_140","Mgg for 140 <Theta < 150 -Helicity=-1",250,0,250);

    Mgg_hp_150 = new GH1("Mgg_hp_150","Mgg for 150 <Theta < 160 -Helicity=+1",250,0,250);
    Mgg_hm_150 = new GH1("Mgg_hm_150","Mgg for 150 <Theta < 160 -Helicity=-1",250,0,250);

    Mgg_hp_160 = new GH1("Mgg_hp_160","Mgg for 160 <Theta < 170 -Helicity=+1",250,0,250);
    Mgg_hm_160 = new GH1("Mgg_hm_160","Mgg for 160 <Theta < 170 -Helicity=-1",250,0,250);

    Mgg_hp_170 = new GH1("Mgg_hp_170","Mgg for 170 <Theta < 180 -Helicity=+1",250,0,250);
    Mgg_hm_170 = new GH1("Mgg_hm_170","Mgg for 170 <Theta < 180 -Helicity=-1",250,0,250);
   
    Theta_hp = new GH1("Theta_hp","Yield for 0<Theta<180-Helicity=+1",18,0,180);
    Theta_hm = new GH1("Theta_hm","Yield for 0<Theta<180-Helicity=-1",18,0,180);

***/
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
void PAR_Class::Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree, Int_t theta0, Int_t theta1, Float_t angle,GH1* inclusive_denom,GH1* denom,GH1* nc,GH1* ncoa,GH1* mgg_all_theta,GH1* mgg_0,GH1* mgg_10,GH1* mgg_20,GH1* mgg_30,GH1* mgg_40, GH1* mgg_50, GH1* mgg_60, GH1* mgg_70, GH1* mgg_80, GH1* mgg_90, GH1* mgg_100, GH1* mgg_110, GH1* mgg_120, GH1* mgg_130) //GH1* MM_b4_cut )
{
	Double_t Mytime;		
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
					Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);	
					E_k = CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j);
					inclusive_denom->Fill(CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j),Mytime);//inc. denominator
					denom->Fill(E_k,Mytime);
					FillMass(pi0tree,0,j,mgg_all_theta);
					if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
					{
						nc->Fill(E_k,Mytime);//NC 
						if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							ncoa->Fill(E_k,Mytime);
						}	
							
					}
					if ((E_k>0)&&(E_k<10))
					{
						FillMass(pi0tree,0,j,mgg_0);
						
					}
					else if ((E_k>=10)&&(E_k<20))
					{
						FillMass(pi0tree,0,j,mgg_10);
						
					}
					else if ((E_k>=20)&&(E_k<30))
					{
						FillMass(pi0tree,0,j,mgg_20);
						
					}
					else if ((E_k>=30)&&(E_k<40))
					{
						FillMass(pi0tree,0,j,mgg_30);
						
					}					
					else if ((E_k>=40)&&(E_k<50))
					{
						FillMass(pi0tree,0,j,mgg_40);
						
					}
					else if ((E_k>=50)&&(E_k<60))
					{
						FillMass(pi0tree,0,j,mgg_50);
						
					}
					else if ((E_k>=60)&&(E_k<70))
					{
						FillMass(pi0tree,0,j,mgg_60);
						
					}
					else if ((E_k>=70)&&(E_k<80))
					{
						FillMass(pi0tree,0,j,mgg_70);
						
					}
					else if ((E_k>=80)&&(E_k<90))
					{
						FillMass(pi0tree,0,j,mgg_80);
						
					}
					else if ((E_k>=90)&&(E_k<100))
					{
						FillMass(pi0tree,0,j,mgg_90);
						
					}
					else if ((E_k>=100)&&(E_k<110))
					{
						FillMass(pi0tree,0,j,mgg_100);
						
					}
					else if ((E_k>=110)&&(E_k<120))
					{
						FillMass(pi0tree,0,j,mgg_110);
						
					}
					else if ((E_k>=120)&&(E_k<130))
					{
						FillMass(pi0tree,0,j,mgg_120);
							
					}
					else if ((E_k>=130)&&(E_k<140))
					{
						FillMass(pi0tree,0,j,mgg_130);
						
					}

					
				 }
				
			}
		}
	}
					
	

}
//-----------------------------------Eff revisited, Jan 26 2016 ----------------------------------------------------
void PAR_Class::Eff_rev(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrigger& triggertree, Float_t angle,Int_t en_low, Int_t en_high,GH2* denom_hp,GH2* ncoa_hp,GH2* denom_hm,GH2* ncoa_hm,GH1* mgg_all_theta)
{
	Double_t Mytime;
	Float_t E_k=0;
	Float_t Th;	
	//Int_t theta0; 
	//Int_t theta1;
	//for (theta0 = 19; theta0<=153; theta0 = theta0+2)
	//{
	//	theta1 = theta0 + 2;	
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			Th = CalcMissingP4(pi0tree,0,j).Theta()*180/TMath::Pi();
			//cout << Th << "  was theta" << endl;	
			if((Th >=19) && (Th <=155) && (taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{
        			if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       				{	
			
				//MM_b4_cut->Fill(CalcMissingMass(pi0tree, 0,j));	//Not done now for saving time.
					if (CalcMissingMass(pi0tree,0,j)<970 && CalcMissingMass(pi0tree,0,j)>910)//Select events based on MissMass.	
					{
						Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);	
						E_k = CalcMissingEnergy(pi0tree,0,j)-CalcMissingMass(pi0tree, 0,j);
						FillMass(pi0tree,0,j,mgg_all_theta);
						if (triggertree.GetHelicity() && triggertree.GetNErrors()==0) // now if the helicity is 1
						{
							denom_hp->Fill(E_k,Th,Mytime);

							if (rootinotree.GetNParticles()!=0)
							{
								for (Int_t q = 0; q < rootinotree.GetNParticles(); q++)
								{
									if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(q))<angle*TMath::Pi()/180)
									{
										ncoa_hp->Fill(E_k,Th,Mytime);
									}
								}	
							}
						}
						else if (!triggertree.GetHelicity() && triggertree.GetNErrors()==0) // now if the helicity is -1
						{
							denom_hm->Fill(E_k,Th,Mytime);

							if (rootinotree.GetNParticles()!=0)
							{
								for (Int_t q = 0; q < rootinotree.GetNParticles(); q++)
								{
									if (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(q))<angle*TMath::Pi()/180)
									{
										ncoa_hm->Fill(E_k,Th,Mytime);
									}
								}	
							}
						}					
					 }
					
				}
			}
		}	
	//}	
						
		
	
}
//-------------------------------Carbon Scale Factor Revisited (Feb. 12 2016) -------------------------------------------------

void PAR_Class::Carbon_SF(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,Int_t en_low,Int_t en_high,GH1* theta_hp,GH1* theta_hm,GH1* pi0_MM_hp,GH1* pi0_MM_hm,GH1* pi0_MM_hp_19_36,GH1* pi0_MM_hm_19_36,GH1* pi0_MM_hp_36_53,GH1* pi0_MM_hm_36_53,GH1* pi0_MM_hp_53_70,GH1* pi0_MM_hm_53_70,GH1* pi0_MM_hp_70_87,GH1* pi0_MM_hm_70_87,GH1* pi0_MM_hp_87_104,GH1* pi0_MM_hm_87_104,GH1* pi0_MM_hp_104_121,GH1* pi0_MM_hm_104_121,GH1* pi0_MM_hp_121_138,GH1* pi0_MM_hm_121_138,GH1* pi0_MM_hp_138_155,GH1* pi0_MM_hm_138_155) 
{
	Double_t Mytime;
	if ((pi0tree.GetNParticles() == 1)&&(pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       	{		
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{		
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high)&&(CalcMissingMass(pi0tree,0,j)<1200)&&(CalcMissingMass(pi0tree,0,j)>800)&&(triggertree.GetNErrors()==0))//Select events based on MissMass.
			{	
				Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);						
				if (triggertree.GetHelicity() ) // now if the helicity is 1
				{	
					FillMissingMass(pi0tree,0,j,pi0_MM_hp);
					if ((pi0tree.GetMass(0)<150)&&(pi0tree.GetMass(0)>=120))
					{
						theta_hp->Fill(pi0tree.GetTheta(0),Mytime);
					}
					if ((pi0tree.GetTheta(0)>=19)&&(pi0tree.GetTheta(0)<36))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_19_36);
					}
					else if ((pi0tree.GetTheta(0)>=36)&&(pi0tree.GetTheta(0)<53))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_36_53);
					}
					else if ((pi0tree.GetTheta(0)>=53)&&(pi0tree.GetTheta(0)<70))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_53_70);
					}
					else if ((pi0tree.GetTheta(0)>=70)&&(pi0tree.GetTheta(0)<87))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_70_87);
					}
					else if ((pi0tree.GetTheta(0)>=87)&&(pi0tree.GetTheta(0)<104))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_87_104);
					}
					else if ((pi0tree.GetTheta(0)>=104)&&(pi0tree.GetTheta(0)<121))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_104_121);
					}
					else if ((pi0tree.GetTheta(0)>=121)&&(pi0tree.GetTheta(0)<138))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_121_138);
					}
					else if ((pi0tree.GetTheta(0)>=138)&&(pi0tree.GetTheta(0)<155))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hp_138_155);
					}
							
				}
				else if (!triggertree.GetHelicity() ) // now if the helicity is 0
				{
					FillMissingMass(pi0tree,0,j,pi0_MM_hm);
					if ((pi0tree.GetMass(0)<150)&&(pi0tree.GetMass(0)>=120))
					{
						theta_hm->Fill(pi0tree.GetTheta(0),Mytime);
					}							
					if ((pi0tree.GetTheta(0)>=19)&&(pi0tree.GetTheta(0)<36))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_19_36);
					}
					else if ((pi0tree.GetTheta(0)>=36)&&(pi0tree.GetTheta(0)<53))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_36_53);
					}
					else if ((pi0tree.GetTheta(0)>=53)&&(pi0tree.GetTheta(0)<70))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_53_70);
					}
					else if ((pi0tree.GetTheta(0)>=70)&&(pi0tree.GetTheta(0)<87))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_70_87);
					}
					else if ((pi0tree.GetTheta(0)>=87)&&(pi0tree.GetTheta(0)<104))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_87_104);
					}
					else if ((pi0tree.GetTheta(0)>=104)&&(pi0tree.GetTheta(0)<121))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_104_121);
					}
					else if ((pi0tree.GetTheta(0)>=121)&&(pi0tree.GetTheta(0)<138))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_121_138);
					}
					else if ((pi0tree.GetTheta(0)>=138)&&(pi0tree.GetTheta(0)<155))
					{
						FillMissingMass(pi0tree,0,j,pi0_MM_hm_138_155);
					}		
				} 
																			
			}
		}		
	}	
}



//-------------------------------Pi0 Asymmetry Calculation-------------------------------------------------

void PAR_Class::Pi0_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,Int_t en_low,Int_t en_high,GH1* theta_hp,GH1* theta_hm,GH1* mgg_hp_0,GH1* mgg_hm_0, GH1* mgg_hp_10,GH1* mgg_hm_10, GH1* mgg_hp_20,GH1* mgg_hm_20, GH1* mgg_hp_30,GH1* mgg_hm_30, GH1* mgg_hp_40,GH1* mgg_hm_40, GH1* mgg_hp_50,GH1* mgg_hm_50, GH1* mgg_hp_60,GH1* mgg_hm_60, GH1* mgg_hp_70,GH1* mgg_hm_70, GH1* mgg_hp_80,GH1* mgg_hm_80, GH1* mgg_hp_90,GH1* mgg_hm_90, GH1* mgg_hp_100,GH1* mgg_hm_100, GH1* mgg_hp_110,GH1* mgg_hm_110, GH1* mgg_hp_120,GH1* mgg_hm_120, GH1* mgg_hp_130,GH1* mgg_hm_130, GH1* mgg_hp_140,GH1* mgg_hm_140, GH1* mgg_hp_150,GH1* mgg_hm_150, GH1* mgg_hp_160,GH1* mgg_hm_160, GH1* mgg_hp_170, GH1* mgg_hm_170) 
{
	Double_t Mytime;
	if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       	{		
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{		
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{	
				if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))//Select events based on MissMass.
				{	
					Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);						
					if(triggertree.GetNErrors()==0)
					{
						if (triggertree.GetHelicity() ) // now if the helicity is 1
						{	if ((pi0tree.GetMass(0)<150)&&(pi0tree.GetMass(0)>=120))
							{
								theta_hp->Fill(pi0tree.GetTheta(0),Mytime);
							}
							if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<10))
							{
								FillMass(pi0tree,0,j,mgg_hp_0);
							}
							else if ((pi0tree.GetTheta(0)>=10)&&(pi0tree.GetTheta(0)<20))
							{
								FillMass(pi0tree,0,j,mgg_hp_10);
							}
							else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<30))
							{
								FillMass(pi0tree,0,j,mgg_hp_20);
							}
							else if ((pi0tree.GetTheta(0)>=30)&&(pi0tree.GetTheta(0)<40))
							{
								FillMass(pi0tree,0,j,mgg_hp_30);
							}
							else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<50))
							{
								FillMass(pi0tree,0,j,mgg_hp_40);
							}
							else if ((pi0tree.GetTheta(0)>=50)&&(pi0tree.GetTheta(0)<60))
							{
								FillMass(pi0tree,0,j,mgg_hp_50);
							}
							else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<70))
							{
								FillMass(pi0tree,0,j,mgg_hp_60);
							}
							else if ((pi0tree.GetTheta(0)>=70)&&(pi0tree.GetTheta(0)<80))
							{
								FillMass(pi0tree,0,j,mgg_hp_70);
							}
							else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<90))
							{
								FillMass(pi0tree,0,j,mgg_hp_80);
							}
							else if ((pi0tree.GetTheta(0)>=90)&&(pi0tree.GetTheta(0)<100))
							{
								FillMass(pi0tree,0,j,mgg_hp_90);
							}
							else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<110))
							{
								FillMass(pi0tree,0,j,mgg_hp_100);
							}
							else if ((pi0tree.GetTheta(0)>=110)&&(pi0tree.GetTheta(0)<120))
							{
								FillMass(pi0tree,0,j,mgg_hp_110);
							}
							else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<130))
							{
								FillMass(pi0tree,0,j,mgg_hp_120);
							}
							else if ((pi0tree.GetTheta(0)>=130)&&(pi0tree.GetTheta(0)<140))
							{
								FillMass(pi0tree,0,j,mgg_hp_130);
							}
							else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<150))
							{
								FillMass(pi0tree,0,j,mgg_hp_140);
							}
							else if ((pi0tree.GetTheta(0)>=150)&&(pi0tree.GetTheta(0)<160))
							{
								FillMass(pi0tree,0,j,mgg_hp_150);
							}
							else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<170))
							{
								FillMass(pi0tree,0,j,mgg_hp_160);
							}
							else if ((pi0tree.GetTheta(0)>=170)&&(pi0tree.GetTheta(0)<180))
							{
								FillMass(pi0tree,0,j,mgg_hp_170);
							}
						}
						else if (!triggertree.GetHelicity() ) // now if the helicity is 0
						{
							if ((pi0tree.GetMass(0)<150)&&(pi0tree.GetMass(0)>=120))
							{
								theta_hm->Fill(pi0tree.GetTheta(0),Mytime);
							}							
							if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<10))
							{
								FillMass(pi0tree,0,j,mgg_hm_0);
							}
							else if ((pi0tree.GetTheta(0)>=10)&&(pi0tree.GetTheta(0)<20))
							{
								FillMass(pi0tree,0,j,mgg_hm_10);
							}
							else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<30))
							{
								FillMass(pi0tree,0,j,mgg_hm_20);
							}
							else if ((pi0tree.GetTheta(0)>=30)&&(pi0tree.GetTheta(0)<40))
							{
								FillMass(pi0tree,0,j,mgg_hm_30);
							}
							else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<50))
							{
								FillMass(pi0tree,0,j,mgg_hm_40);
							}
							else if ((pi0tree.GetTheta(0)>=50)&&(pi0tree.GetTheta(0)<60))
							{
								FillMass(pi0tree,0,j,mgg_hm_50);
							}
							else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<70))
							{
								FillMass(pi0tree,0,j,mgg_hm_60);
							}
							else if ((pi0tree.GetTheta(0)>=70)&&(pi0tree.GetTheta(0)<80))
							{
								FillMass(pi0tree,0,j,mgg_hm_70);
							}
							else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<90))
							{
								FillMass(pi0tree,0,j,mgg_hm_80);
							}
							else if ((pi0tree.GetTheta(0)>=90)&&(pi0tree.GetTheta(0)<100))
							{
								FillMass(pi0tree,0,j,mgg_hm_90);
							}
							else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<110))
							{
								FillMass(pi0tree,0,j,mgg_hm_100);
							}
							else if ((pi0tree.GetTheta(0)>=110)&&(pi0tree.GetTheta(0)<120))
							{
								FillMass(pi0tree,0,j,mgg_hm_110);
							}
							else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<130))
							{
								FillMass(pi0tree,0,j,mgg_hm_120);
							}
							else if ((pi0tree.GetTheta(0)>=130)&&(pi0tree.GetTheta(0)<140))
							{
								FillMass(pi0tree,0,j,mgg_hm_130);
							}
							else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<150))
							{
								FillMass(pi0tree,0,j,mgg_hm_140);
							}
							else if ((pi0tree.GetTheta(0)>=150)&&(pi0tree.GetTheta(0)<160))
							{
								FillMass(pi0tree,0,j,mgg_hm_150);
							}
							else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<170))
							{
								FillMass(pi0tree,0,j,mgg_hm_160);
							}
							else if ((pi0tree.GetTheta(0)>=170)&&(pi0tree.GetTheta(0)<180))
							{
								FillMass(pi0tree,0,j,mgg_hm_170);
							}
						
						} 
									
					}
				}										
			}
		}		
	}	
}

//-------------------------------Pi0 Asymmetry Calculation Ends -------------------------------------------------
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
	//Eff(*GetRootinos(),*GetNeutralPions(), 50,55, 15, incDenom,Denom,NCharged,NChargedOA,Mgg_all_theta,Mgg_0, Mgg_10, Mgg_20, Mgg_30,Mgg_40, Mgg_50, Mgg_60, Mgg_70, Mgg_80, Mgg_90, Mgg_100, Mgg_110, Mgg_120, Mgg_130);
       // Pi0_Asym(*GetTrigger(),*GetTagger(),*GetNeutralPions(),235,245,Theta_hp,Theta_hm,Mgg_hp_0,Mgg_hm_0, Mgg_hp_10,Mgg_hm_10, Mgg_hp_20,Mgg_hm_20,Mgg_hp_30,Mgg_hm_30,Mgg_hp_40,Mgg_hm_40,Mgg_hp_50,Mgg_hm_50,Mgg_hp_60,Mgg_hm_60, Mgg_hp_70,Mgg_hm_70,Mgg_hp_80,Mgg_hm_80, Mgg_hp_90,Mgg_hm_90,Mgg_hp_100,Mgg_hm_100,Mgg_hp_110,Mgg_hm_110,Mgg_hp_120,Mgg_hm_120,Mgg_hp_130,Mgg_hm_130,Mgg_hp_140,Mgg_hm_140, Mgg_hp_150,Mgg_hm_150,Mgg_hp_160,Mgg_hm_160,Mgg_hp_170,Mgg_hm_170);
	Eff_rev(*GetRootinos(),*GetNeutralPions(),*GetTagger(),*GetTrigger(),15,285,305,Denom_hp,NChargedOA_hp,Denom_hm,NChargedOA_hm,Mgg_all_theta);
	//Carbon_SF(*GetTrigger(),*GetTagger(),*GetNeutralPions(),285,305,Theta_hp,Theta_hm,Pi0_MM_hp,Pi0_MM_hm,Pi0_MM_hp_19_36,Pi0_MM_hm_19_36,Pi0_MM_hp_36_53,Pi0_MM_hm_36_53,Pi0_MM_hp_53_70,Pi0_MM_hm_53_70,Pi0_MM_hp_70_87,Pi0_MM_hm_70_87,Pi0_MM_hp_87_104,Pi0_MM_hm_87_104,Pi0_MM_hp_104_121,Pi0_MM_hm_104_121,Pi0_MM_hp_121_138,Pi0_MM_hm_121_138,Pi0_MM_hp_138_155,Pi0_MM_hm_138_155);

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
