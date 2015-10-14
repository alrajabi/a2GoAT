#include "PAR_Class.h"

PAR_Class::PAR_Class()
{ 
   //pi0 Eff hists:

    incDenom	= new GH1("incDenom","Inclusive Denominator,35 <Proton.Theta < 40", 30,0,300);
    Mgg_all_theta = new GH1("Mgg_all_theta","Mgg for 0 <Theta < 180 with cut on MM",250,0,250);
    NChargedOA	= new GH1("NChargedOA",	"NC Prime at OA,35 <Proton.Theta < 40" ,30,0, 300);
    NCharged	= new GH1("NCharged",	"NC, 35 <Proton.Theta < 40 " ,30,0, 300);
    Denom 	= new GH1("Denom",	"Denom, 35 <Proton.Theta < 40 " ,30,0, 300);
    Mgg_40  =new GH1("Mgg_40","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_50  =new GH1("Mgg_50","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_60  =new GH1("Mgg_60","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_70  =new GH1("Mgg_70","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_80  =new GH1("Mgg_80","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_90  =new GH1("Mgg_90","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_100  =new GH1("Mgg_100","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_110  =new GH1("Mgg_110","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_120  =new GH1("Mgg_120","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
    Mgg_130  =new GH1("Mgg_130","Mgg for 35 <Theta < 40 with cut on MM",250,0,250);
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
void PAR_Class::Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree, Int_t theta0, Int_t theta1, Float_t angle,GH1* inclusive_denom,GH1* denom,GH1* nc,GH1* ncoa,GH1* mgg_all_theta,GH1* mgg_40, GH1* mgg_50, GH1* mgg_60, GH1* mgg_70, GH1* mgg_80, GH1* mgg_90, GH1* mgg_100, GH1* mgg_110, GH1* mgg_120, GH1* mgg_130) //GH1* MM_b4_cut )
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
					denom->Fill(E_k);
					FillMass(pi0tree,0,mgg_all_theta);
					if ((rootinotree.GetNParticles() != 0) )//if a rootino(proton or charged pion) was detected
					{
						nc->Fill(E_k);//NC 
						if  (myOA_Calculator(CalcMissingP4(pi0tree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							ncoa->Fill(E_k);
						}	
							
					}					
					if ((E_k>=40)&&(E_k<50))
					{
						FillMass(pi0tree,0,mgg_40);
						
					}
					else if ((E_k>=50)&&(E_k<60))
					{
						FillMass(pi0tree,0,mgg_50);
						
					}
					else if ((E_k>=60)&&(E_k<70))
					{
						FillMass(pi0tree,0,mgg_60);
						
					}
					else if ((E_k>=70)&&(E_k<80))
					{
						FillMass(pi0tree,0,mgg_70);
						
					}
					else if ((E_k>=80)&&(E_k<90))
					{
						FillMass(pi0tree,0,mgg_80);
						
					}
					else if ((E_k>=90)&&(E_k<100))
					{
						FillMass(pi0tree,0,mgg_90);
						
					}
					else if ((E_k>=100)&&(E_k<110))
					{
						FillMass(pi0tree,0,mgg_100);
						
					}
					else if ((E_k>=110)&&(E_k<120))
					{
						FillMass(pi0tree,0,mgg_110);
						
					}
					else if ((E_k>=120)&&(E_k<130))
					{
						FillMass(pi0tree,0,mgg_120);
							
					}
					else if ((E_k>=130)&&(E_k<140))
					{
						FillMass(pi0tree,0,mgg_130);
						
					}

					
				 }
				
			}
		}
	}
					
	

}
//-------------------------------Pi0 Asymmetry Calculation-------------------------------------------------

void PAR_Class::Pi0_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,Int_t en_low,Int_t en_high,GH1* theta_hp,GH1* theta_hm,GH1* mgg_hp_0,GH1* mgg_hm_0, GH1* mgg_hp_10,GH1* mgg_hm_10, GH1* mgg_hp_20,GH1* mgg_hm_20, GH1* mgg_hp_30,GH1* mgg_hm_30, GH1* mgg_hp_40,GH1* mgg_hm_40, GH1* mgg_hp_50,GH1* mgg_hm_50, GH1* mgg_hp_60,GH1* mgg_hm_60, GH1* mgg_hp_70,GH1* mgg_hm_70, GH1* mgg_hp_80,GH1* mgg_hm_80, GH1* mgg_hp_90,GH1* mgg_hm_90, GH1* mgg_hp_100,GH1* mgg_hm_100, GH1* mgg_hp_110,GH1* mgg_hm_110, GH1* mgg_hp_120,GH1* mgg_hm_120, GH1* mgg_hp_130,GH1* mgg_hm_130, GH1* mgg_hp_140,GH1* mgg_hm_140, GH1* mgg_hp_150,GH1* mgg_hm_150, GH1* mgg_hp_160,GH1* mgg_hm_160, GH1* mgg_hp_170, GH1* mgg_hm_170) 
{
	if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       	{		
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{		
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{	
				if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))//Select events based on MissMass.
				{							
					if(triggertree.GetNErrors()==0)
					{
						if (triggertree.GetHelicity() ) // now if the helicity is 1
						{
							theta_hp->Fill(pi0tree.GetTheta(0));
								
						}
						else if (!triggertree.GetHelicity() ) // now if the helicity is 0
						{
							theta_hm->Fill(pi0tree.GetTheta(0));
								
						} 
						
						if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<10))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_0);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_0);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_40,0);
						}
						else if ((pi0tree.GetTheta(0)>=10)&&(pi0tree.GetTheta(0)<20))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_10);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_10);
							} 	
							//FillllMissingMass(pi0tree, 0, j, asym_mm_50,0);
						}
						else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<30))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_20);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_20);
							} 			
							//FillMissingMass(pi0tree, 0, j, asym_mm_60,0);
						}	
						else if ((pi0tree.GetTheta(0)>=30)&&(pi0tree.GetTheta(0)<40))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_30);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_30);
							} 		
							//FillMissingMass(pi0tree, 0, j, asym_mm_70,0);
						}
						else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<50))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_40);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_40);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_40,0);
						}
						else if ((pi0tree.GetTheta(0)>=50)&&(pi0tree.GetTheta(0)<60))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_50);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_50);
							} 	
							//FillllMissingMass(pi0tree, 0, j, asym_mm_50,0);
						}
						else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<70))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_60);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_60);
							} 			
							//FillMissingMass(pi0tree, 0, j, asym_mm_60,0);
						}	
						else if ((pi0tree.GetTheta(0)>=70)&&(pi0tree.GetTheta(0)<80))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_70);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_70);
							} 		
							//FillMissingMass(pi0tree, 0, j, asym_mm_70,0);
						}
						else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<90))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_80);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_80);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_80,0);
						}
						else if ((pi0tree.GetTheta(0)>=90)&&(pi0tree.GetTheta(0)<100))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_90);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_90);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_90,0);
						}
						else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<110))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_100);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_100);
							} 		
							//FillMissingMass(pi0tree, 0, j, asym_mm_70,0);
						}
						else if ((pi0tree.GetTheta(0)>=110)&&(pi0tree.GetTheta(0)<120))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_110);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_110);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_40,0);
						}
						else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<130))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_120);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_120);
							} 	
							//FillllMissingMass(pi0tree, 0, j, asym_mm_50,0);
						}
						else if ((pi0tree.GetTheta(0)>=130)&&(pi0tree.GetTheta(0)<140))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_130);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_130);
							} 			
							//FillMissingMass(pi0tree, 0, j, asym_mm_60,0);
						}	
						else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<150))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_140);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_140);
							} 		
							//FillMissingMass(pi0tree, 0, j, asym_mm_70,0);
						}
						else if ((pi0tree.GetTheta(0)>=150)&&(pi0tree.GetTheta(0)<160))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_150);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_150);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_80,0);
						}
						else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<170))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_160);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_160);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_90,0);
						}
						else if ((pi0tree.GetTheta(0)>=170)&&(pi0tree.GetTheta(0)<180))
						{
							if (triggertree.GetHelicity() ) // now if the helicity is 1
							{
								FillMass(pi0tree,0,mgg_hp_170);
							}
							if (!triggertree.GetHelicity() ) // now if the helicity is 0
							{
								FillMass(pi0tree,0,mgg_hm_170);
							} 	
							//FillMissingMass(pi0tree, 0, j, asym_mm_90,0);
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
	Eff(*GetRootinos(),*GetNeutralPions(), 35,40, 15, incDenom,Denom,NCharged,NChargedOA,Mgg_all_theta,Mgg_40, Mgg_50, Mgg_60, Mgg_70, Mgg_80, Mgg_90, Mgg_100, Mgg_110, Mgg_120, Mgg_130);
        Pi0_Asym(*GetTrigger(),*GetTagger(),*GetNeutralPions(),195,205,Theta_hp,Theta_hm,Mgg_hp_0,Mgg_hm_0, Mgg_hp_10,Mgg_hm_10, Mgg_hp_20,Mgg_hm_20,Mgg_hp_30,Mgg_hm_30,Mgg_hp_40,Mgg_hm_40,Mgg_hp_50,Mgg_hm_50,Mgg_hp_60,Mgg_hm_60, Mgg_hp_70,Mgg_hm_70,Mgg_hp_80,Mgg_hm_80, Mgg_hp_90,Mgg_hm_90,Mgg_hp_100,Mgg_hm_100,Mgg_hp_110,Mgg_hm_110,Mgg_hp_120,Mgg_hm_120,Mgg_hp_130,Mgg_hm_130,Mgg_hp_140,Mgg_hm_140, Mgg_hp_150,Mgg_hm_150,Mgg_hp_160,Mgg_hm_160,Mgg_hp_170,Mgg_hm_170);
	
	
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
