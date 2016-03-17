#include "PAR_Compton.h"

PAR_Compton::PAR_Compton()
{ 
     //Compton Hists:
    Com_MM_hp = new GH1("Com_MM_hp","Rootino Missing Mass-Helicity = +1", 150,700,1300);
    //Com_pMass = new GH1("Com_pMass","Rootino Mass",180,0,180);  	
    
    Com_MM_hm = new GH1("Com_MM_hm","Rootino Missing Mass-Helicity = -1", 150,700,1300);
    //Com_pMass = new GH1("Com_pMass","Rootino Mass",180,0,180);  	
    	
	Theta_hp = new GH1("Theta_hp","Yield for 0<Photon.Theta<180-Helicity=+1",18,0,180);
    	Theta_hm = new GH1("Theta_hm","Yield for 0<Photon.Theta<180-Helicity=-1",18,0,180);

	
	Com_MM_OA_hp_130_149 = new GH1("Com_MM_OA_hp_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_130_149 = new GH1("Com_MM_OA_hm_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = -1", 150,700,1300);
	Com_MM_OA_hp_110_130 = new GH1("Com_MM_OA_hp_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_110_130 = new GH1("Com_MM_OA_hm_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = -1", 150,700,1300);
	Com_MM_OA_hp_90_110 = new GH1("Com_MM_OA_hp_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_90_110 = new GH1("Com_MM_OA_hm_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = -1", 150,700,1300);
	Com_MM_OA_hp_70_90 = new GH1("Com_MM_OA_hp_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_70_90 = new GH1("Com_MM_OA_hm_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = -1", 150,700,1300);
	/***Com_MM_OA_hp_50_70 = new GH1("Com_MM_OA_hp_50_70","Ring Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_50_70 = new GH1("Com_MM_OA_hm_50_70","Ring Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = -1", 150,700,1300);
	Com_MM_OA_hp_19_50 = new GH1("Com_MM_OA_hp_19_50","Ring Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_19_50 = new GH1("Com_MM_OA_hm_19_50","Ring Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = -1", 150,700,1300);
	***/
 
	//Ring Analysis Hists:
	CBRing_MM_hp = new GH1("CBRing_MM_hp","Ring Missing Mass-Helicity = +1", 150,700,1300);
	CBRing_MM_hm = new GH1("CBRing_MM_hm","Ring Missing Mass-Helicity = -1", 150,700,1300);
	CBRing_IM = new GH1("CBRing_IM","Ring Pi0 IM", 250,0,250);
	
	CBRing_MM_OA_hp_130_149 = new GH1("CBRing_MM_OA_hp_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_130_149 = new GH1("CBRing_MM_OA_hm_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = -1", 150,700,1300);
	CBRing_MM_OA_hp_110_130 = new GH1("CBRing_MM_OA_hp_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_110_130 = new GH1("CBRing_MM_OA_hm_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = -1", 150,700,1300);
	CBRing_MM_OA_hp_90_110 = new GH1("CBRing_MM_OA_hp_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_90_110 = new GH1("CBRing_MM_OA_hm_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = -1", 150,700,1300);
	CBRing_MM_OA_hp_70_90 = new GH1("CBRing_MM_OA_hp_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_70_90 = new GH1("CBRing_MM_OA_hm_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = -1", 150,700,1300);
	/***CBRing_MM_OA_hp_50_70 = new GH1("CBRing_MM_OA_hp_50_70","Ring Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_50_70 = new GH1("CBRing_MM_OA_hm_50_70","Ring Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = -1", 150,700,1300);
	CBRing_MM_OA_hp_19_50 = new GH1("CBRing_MM_OA_hp_19_50","Ring Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_OA_hm_19_50 = new GH1("CBRing_MM_OA_hm_19_50","Ring Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = -1", 150,700,1300);
	***/
	CBFRing_MM_hp = new GH1("CBFRing_MM_hp","FRing Missing Mass-Helicity = +1", 150,700,1300);
	CBFRing_MM_hm = new GH1("CBFRing_MM_hm","FRing Missing Mass-Helicity = -1", 150,700,1300);
	CBFRing_IM = new GH1("CBFRing_IM","FRing Pi0 IM", 250,0,250);
	
	CBFRing_MM_OA_hp_130_149 = new GH1("CBFRing_MM_OA_hp_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_130_149 = new GH1("CBFRing_MM_OA_hm_130_149","Ring Missing Mass 130<Theta<149,After OA-cut-Helicity = -1", 150,700,1300);
	CBFRing_MM_OA_hp_110_130 = new GH1("CBFRing_MM_OA_hp_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_110_130 = new GH1("CBFRing_MM_OA_hm_110_130","Ring Missing Mass 110<Theta<130,After OA-cut-Helicity = -1", 150,700,1300);
	CBFRing_MM_OA_hp_90_110 = new GH1("CBFRing_MM_OA_hp_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_90_110 = new GH1("CBFRing_MM_OA_hm_90_110","Ring Missing Mass 90<Theta<110,After OA-cut-Helicity = -1", 150,700,1300);
	CBFRing_MM_OA_hp_70_90 = new GH1("CBFRing_MM_OA_hp_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_70_90 = new GH1("CBFRing_MM_OA_hm_70_90","Ring Missing Mass 70<Theta<90,After OA-cut-Helicity = -1", 150,700,1300);
	/***CBFRing_MM_OA_hp_50_70 = new GH1("CBFRing_MM_OA_hp_50_70","FRing Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_50_70 = new GH1("CBFRing_MM_OA_hm_50_70","FRing Missing Mass 50.00<Theta<69.95,After OA-cut-Helicity = -1", 150,700,1300);
	CBFRing_MM_OA_hp_19_50 = new GH1("CBFRing_MM_OA_hp_19_50","FRing Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = +1", 150,700,1300);
	CBFRing_MM_OA_hm_19_50 = new GH1("CBFRing_MM_OA_hm_19_50","FRing Missing Mass 19.47<Theta<50.00,After OA-cut-Helicity = -1", 150,700,1300);***/
	 //Find Holes Hists:
	//CosTheta_Phi = new GH2("CosTheta_Phi","Pi0 Photons Cos#theta vs. #phi",180,-1,1,360,-180,180);
	//CosTheta_Phi = new GH2("CosTheta_Phi","Pi0 Photons Cos#theta vs. #phi",180,-1,1,360,-180,180);
	////CosPhotons = new GH1("CosPhotons","Pi0 Photons Cos#theta",360,-1,1);
	//CosTheta_Phi_MM = new GH2("CosTheta_Phi_MM","Pi0 Photons Cos#theta vs. #phi with MM-cut",180,-1,1,360,-180,180);
	//Pi0_IM = new GH1("Pi0_IM", "Pi0 Invariant Mass", 180,0,180);
	
	/*** //MC Hists:
	Com_MM_hp = new GH1("Com_MM_hp","MC Rootino Missing Mass-Helicity = +1", 200,500,1300);
   	Com_MM_hm = new GH1("Com_MM_hm","MC Rootino Missing Mass-Helicity = -1", 200,500,1300);	
	Com_MM_hp2 = new GH1("Com_MM_hp2","MC MissingMass, based on other pi0 photon", 200,500,1300);
		***/
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
Double_t PAR_Compton::theta_C(Double_t theta )
{
	 Double_t cos1 = 1+TMath::Cos(160*TMath::Pi()/180);
	 Double_t acos1 = TMath::ACos(TMath::Cos(theta)-cos1);
	Double_t thetaC = theta - acos1;
	return thetaC;
}
Double_t PAR_Compton::LinearInterpolate(Double_t yplus, Double_t yminus, Double_t xplus, Double_t xminus, Double_t xgiven)
{
	// Performs a linear interpolation.
	Double_t slope = (yplus-yminus)/(xplus-xminus);
	return (slope)*(xgiven-xminus) + yminus;
}
Double_t PAR_Compton::ps_theta0(Double_t E0, Double_t q)
{
	Double_t A = 2*E0+938;
	Double_t B = 938*q+2*q*E0-938*E0-135*135/2;
	Double_t C = -E0*135*135/2;
	Double_t qprime = (-1*B+TMath::Sqrt(B*B-4*A*C))/(2*A);
	Double_t theta0 = TMath::ACos(135*135/(2*q*qprime)-1);
	return theta0;
}
Double_t PAR_Compton::ps_thetaNew(Double_t theta, Double_t theta_0, Double_t q)
{
	Double_t s1,s2,s3;
	if ( q >= 100 && q < 150)
	{
		s1 = LinearInterpolate(0.4160,0.3763,150,100,q);	
		s2 = LinearInterpolate(7.483,6.897,150,100,q);;
		s3 = LinearInterpolate(7.500,7.000,150,100,q);;
	}
	else if ( q >= 150 && q < 200)
	{
		s1 = LinearInterpolate(0.4327,0.4160,200,150,q);	
		s2 = LinearInterpolate(10.96,7.483,200,150,q);
		s3 = LinearInterpolate(9.000,7.500,200,150,q);
	}
	else if ( q >= 200 && q <= 250)
	{
		s1 = LinearInterpolate(0.4569,0.4327,250,200,q);	
		s2 = LinearInterpolate(13.76,10.96,250,200,q);
		s3 = LinearInterpolate(9.500,9.000,250,200,q);
	}
	Double_t thetaNew = theta_0 + theta_0*(s1/(s2+s3))*(exp(s2*(theta-theta_0)/theta_0) - exp(-1*s3*(theta-theta_0)/theta_0));
	if (q > 250 || q < 100) thetaNew = theta;		
	return thetaNew;
}
Double_t PAR_Compton::ps_thetaNew1(Double_t theta, Double_t theta_0, Double_t q)
{
	Double_t thetaNew;
	Double_t s1 = 0.5;
	Double_t s2 = 5.0;
	thetaNew = theta_0+theta_0*(s1/s2)*TMath::SinH(s2*(theta-theta_0)/theta_0);
	return thetaNew;
}

//--------------------------------Compton Analysis Functions starts here:-----------------------------------------

void PAR_Compton::Ring_Test(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_130_149,GH1* cbring_MM_OA_hm_130_149,GH1* cbring_MM_OA_hp_110_130,GH1* cbring_MM_OA_hm_110_130,GH1* cbring_MM_OA_hp_90_110,GH1* cbring_MM_OA_hm_90_110,GH1* cbring_MM_OA_hp_70_90,GH1* cbring_MM_OA_hm_70_90,GH1* cbring_IM,GH1* cbfring_MM_hp, GH1* cbfring_MM_hm,GH1* cbfring_MM_OA_hp_130_149,GH1* cbfring_MM_OA_hm_130_149,GH1* cbfring_MM_OA_hp_110_130,GH1* cbfring_MM_OA_hm_110_130,GH1* cbfring_MM_OA_hp_90_110,GH1* cbfring_MM_OA_hm_90_110,GH1* cbfring_MM_OA_hp_70_90,GH1* cbfring_MM_OA_hm_70_90,GH1* cbfring_IM)
{//tracktree.GetTheta(pi0tree.GetTrackIndex(0))
	//cosringlow= -0.8572
	//costapsringhi = 0.9945  we use 0.9428  0.3
	Double_t cb_ring_alpha = 0.5;
	Double_t taps_ring_alpha = 1.0;
	Double_t cb_ring_low = TMath::ACos(cb_ring_alpha+(1+cb_ring_alpha)*TMath::Cos(155*TMath::Pi()/180))*180/TMath::Pi();
	Double_t OA_Angle = angle*TMath::Pi()/180;
	Double_t for_fid_cut_hi = 6.01;
	Double_t taps_ring_hi = TMath::ACos(-1*taps_ring_alpha+(1+taps_ring_alpha)*TMath::Cos(for_fid_cut_hi*TMath::Pi()/180))*180/TMath::Pi();
	//Double_t for_edge_cut = TMath::ACos(2*TMath::Cos(25*TMath::Pi()/180)-TMath::Cos(20*TMath::Pi()/180))*180/TMath::Pi();
	Double_t back_fid_cut_low = 154.89;
	Int_t y;
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{
				if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) && (CalcMissingMass(pi0tree,0,j)<970) && (CalcMissingMass(pi0tree,0,j)>910)) //MM cut on pi0) ) // check if a pi0 was detected and it is a good pi0
				{
					for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
					{
						if (tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) >= cb_ring_low && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) < back_fid_cut_low)
						
						{
							FillMass(pi0tree,0,j,cbring_IM);
							y = (i==0) ? pi0tree.GetTrackIndexList(0)[i+1] : pi0tree.GetTrackIndexList(0)[i-1];
							if  (myOA_Calculator(CalcMissingP4(tracktree,y,j),rootinotree.Particle(0)) < OA_Angle)
							{
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,y,j,cbring_MM_hp);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_130_149);
									}																}
								else if (!triggertree.GetHelicity() ) 													{
									FillMissingMass(tracktree,y,j,cbring_MM_hm);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_130_149);
									}
								}	
							}
						}
						else if(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= taps_ring_hi && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>for_fid_cut_hi)	
						{
							FillMass(pi0tree,0,j,cbfring_IM);
							y = (i==0) ? pi0tree.GetTrackIndexList(0)[i+1] : pi0tree.GetTrackIndexList(0)[i-1];
							if  (myOA_Calculator(CalcMissingP4(tracktree,y,j),rootinotree.Particle(0)) < OA_Angle)
							{
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,y,j,cbfring_MM_hp);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hp_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hp_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hp_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hp_130_149);
									}
								}
								else if (!triggertree.GetHelicity() ) 													{
									FillMissingMass(tracktree,y,j,cbfring_MM_hm);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hm_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hm_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hm_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,cbfring_MM_OA_hm_130_149);
									}
								}	
							}
						}
					}
				}
			}
		}
	}
}		

//--------------------------------------------------including phase shift -------------------------------------------
void PAR_Compton::Ring_Test_with_ps(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_130_149,GH1* cbring_MM_OA_hm_130_149,GH1* cbring_MM_OA_hp_110_130,GH1* cbring_MM_OA_hm_110_130,GH1* cbring_MM_OA_hp_90_110,GH1* cbring_MM_OA_hm_90_110,GH1* cbring_MM_OA_hp_70_90,GH1* cbring_MM_OA_hm_70_90,GH1* cbring_IM,GH1* cbfring_MM_hp, GH1* cbfring_MM_hm,GH1* cbfring_MM_OA_hp_130_149,GH1* cbfring_MM_OA_hm_130_149,GH1* cbfring_MM_OA_hp_110_130,GH1* cbfring_MM_OA_hm_110_130,GH1* cbfring_MM_OA_hp_90_110,GH1* cbfring_MM_OA_hm_90_110,GH1* cbfring_MM_OA_hp_70_90,GH1* cbfring_MM_OA_hm_70_90,GH1* cbfring_IM)
{//tracktree.GetTheta(pi0tree.GetTrackIndex(0))
	Double_t cb_ring_alpha = 0.5;
	Double_t taps_ring_alpha = 1.0;
	Double_t cb_ring_low = TMath::ACos(cb_ring_alpha+(1+cb_ring_alpha)*TMath::Cos(155*TMath::Pi()/180))*180/TMath::Pi();
	Double_t OA_Angle = angle*TMath::Pi()/180;
	Double_t for_fid_cut_hi = 6.01;
	Double_t taps_ring_hi = TMath::ACos(-1*taps_ring_alpha+(1+taps_ring_alpha)*TMath::Cos(for_fid_cut_hi*TMath::Pi()/180))*180/TMath::Pi();
	//Double_t for_edge_cut = TMath::ACos(2*TMath::Cos(25*TMath::Pi()/180)-TMath::Cos(20*TMath::Pi()/180))*180/TMath::Pi();
	Double_t back_fid_cut_low = 154.89;
	Int_t y;
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{
				if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) && (CalcMissingMass(pi0tree,0,j)<970) && (CalcMissingMass(pi0tree,0,j)>910)) // check if a pi0 was detected and it is a good pi0
				{
					for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
					{
						if (tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) >= cb_ring_low && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) < back_fid_cut_low)
						{
							FillMass(pi0tree,0,j,cbring_IM);
							y = (i==0) ? pi0tree.GetTrackIndexList(0)[i+1] : pi0tree.GetTrackIndexList(0)[i-1];
							if  (myOA_Calculator(CalcMissingP4(tracktree,y,j),rootinotree.Particle(0)) < OA_Angle)
							{
								Double_t oldTheta = tracktree.GetTheta(y)*TMath::DegToRad();
								Double_t newTheta = ps_thetaNew1(oldTheta, ps_theta0(taggertree.GetTaggedEnergy(j),tracktree.GetVector(y).E()),tracktree.GetVector(y).E());
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_hp);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hp_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hp_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hp_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hp_130_149);
									}
								}
								else if (!triggertree.GetHelicity() ) 													{
									FillMissingMass(tracktree,y,j,cbring_MM_hm);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hm_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hm_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hm_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbring_MM_OA_hm_130_149);
									}
								}	
							}
						}
						if(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= taps_ring_hi && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>for_fid_cut_hi)
						{
							FillMass(pi0tree,0,j,cbfring_IM);
							y = (i==0) ? pi0tree.GetTrackIndexList(0)[i+1] : pi0tree.GetTrackIndexList(0)[i-1];
							if  (myOA_Calculator(CalcMissingP4(tracktree,y,j),rootinotree.Particle(0)) < OA_Angle)
							{
								Double_t oldTheta = tracktree.GetTheta(y)*TMath::DegToRad();
								Double_t newTheta = ps_thetaNew1(oldTheta, ps_theta0(taggertree.GetTaggedEnergy(j),tracktree.GetVector(y).E()),tracktree.GetVector(y).E());
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_hp);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hp_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hp_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hp_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hp_130_149);
									}												
								}
								else if (!triggertree.GetHelicity() ) 													{
									FillMissingMass(tracktree,y,j,cbring_MM_hm);
									if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hm_70_90);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hm_90_110);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hm_110_130);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<149))
									{
										FillMissingMass(tracktree,y,j,oldTheta,newTheta,cbfring_MM_OA_hm_130_149);
									}
								}	
							}
						}					
					}
				}
			}
		}
	}
}		

void PAR_Compton::Test_Compton(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hm,GH1* com_MM_OA_hp_130_149,GH1* com_MM_OA_hm_130_149,GH1* com_MM_OA_hp_110_130,GH1* com_MM_OA_hm_110_130,GH1* com_MM_OA_hp_90_110,GH1* com_MM_OA_hm_90_110,GH1* com_MM_OA_hp_70_90,GH1* com_MM_OA_hm_70_90,GH1* theta_hp,GH1* theta_hm)
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
						if ((CalcMissingMass(photontree,0,j)<970)&&(CalcMissingMass(photontree,0,j)>910))
						{
							theta_hp->Fill(photontree.GetTheta(0),Mytime);
						}
        					
						//FillBeamAsymmetry(photontree,i,j,com_pMass,0);
						if  (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							FillMissingMass(photontree,i,j,com_MM_hp);
							if ((photontree.GetTheta(0)>=70)&&(photontree.GetTheta(0)<90))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_70_90);
							}
							else if ((photontree.GetTheta(0)>=90)&&(photontree.GetTheta(0)<110))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_90_110);
							}
							else if ((photontree.GetTheta(0)>=110)&&(photontree.GetTheta(0)<130))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_110_130);
							}
							else if ((photontree.GetTheta(0)>=130)&&(photontree.GetTheta(0)<149))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hp_130_149);
							}

													
						}		
					}
					else if (!triggertree.GetHelicity() ) // now if the helicity is 0
					{
						if ((CalcMissingMass(photontree,0,j)<970)&&(CalcMissingMass(photontree,0,j)>910))
						{
							theta_hm->Fill(photontree.GetTheta(0),Mytime);
						}
						
						//FillBeamAsymmetry(photontree,i,j,com_pMass,0);
						if  (myOA_Calculator(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
						{
							FillMissingMass(photontree,i,j,com_MM_hm);
							if ((photontree.GetTheta(0)>=70)&&(photontree.GetTheta(0)<90))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_70_90);
							}
							else if ((photontree.GetTheta(0)>=90)&&(photontree.GetTheta(0)<110))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_90_110);
							}
							else if ((photontree.GetTheta(0)>=110)&&(photontree.GetTheta(0)<130))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_110_130);
							}
							else if ((photontree.GetTheta(0)>=130)&&(photontree.GetTheta(0)<149))
							{
								FillMissingMass(photontree,i,j,com_MM_OA_hm_130_149);
							}
									

						}
					}
				}	

			}
		}
		
		
	}


}
void PAR_Compton::Find_Holes(const GTreeMeson& pi0tree,const GTreeTrack& tracktree,const GTreeTagger& taggertree,const GTreeDetectorHits& cbtree,Int_t en_low, Int_t en_high,GH2* cos_phi,GH2* cos_phi_mm,GH1* pi0_im)
{
	//Double_t Mytime;
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
		{
			if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) ) // check if a pi0 was detected and it is a good pi0
			{
				FillMass(pi0tree,0,j,pi0_im);
				for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
				{
					//Int_t y = (i==0) ? i+1 : i-1;
					//Mytime=GetTagger()->GetTaggedTime(j)-pi0tree.GetTime(0);
					//cosphotons->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180));					
					cos_phi->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180),tracktree.GetPhi(pi0tree.GetTrackIndexList(0)[i]));//,Mytime);
					if (CalcMissingMass(pi0tree,0,j)<970 && CalcMissingMass(pi0tree,0,j)>910)
					{
						cos_phi_mm->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180),tracktree.GetPhi(pi0tree.GetTrackIndexList(0)[i]));//,Mytime);
					}
					//cos_phi->Fill(TMath::Cos(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])*TMath::Pi()/180),tracktree.GetCentralCrystal(pi0tree.GetTrackIndexList(0)[i]),Mytime);					
					//cout << "NaIHits:     " << tracktree.GetPhi(pi0tree.GetTrackIndexList(0)[i]) << "\n" << endl;
					//cout << "NaIHits:     " << cbtree.GetNaIHits(pi0tree.GetTrackIndexList(0)[i]) << "\n" << endl;
					//cout << "NaIHits:     " << tracktree.GetDetectors(pi0tree.GetTrackIndexList(0)[i]) << "\n" << endl;
				}
			}
		}
	}

}
void PAR_Compton::Check_CB_Elements(const GTreeMeson& pi0tree,const GTreeTrack& tracktree,const GTreeTagger& taggertree,const GTreeDetectorHits& cbtree,Int_t en_low, Int_t en_high)
{
	for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
	{
		if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
		{
			if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) ) // check if a pi0 was detected and it is a good pi0
			{
				for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
				{
					//cout << "particle index is: " << pi0tree.GetTrackIndexList(0)[i] <<"   NaIHits:     " << tracktree.GetCentralCrystal(pi0tree.GetTrackIndexList(0)[i]) << "\n" << endl;
				}
			}
		}
	}

}
//---------------------------------------------------MC Functions:----------------------------------------------
void PAR_Compton::MC_Pi0_background(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree,const GTreeA2Geant a2geant,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hp2,GH1* com_MM_hm,TH2F* lookup)
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
					if (Rnd <= lookup->GetBinContent((Int_t)(((Int_t)Ek)/2)+1,(Int_t)(((Int_t)Th-19)/2)+1))//means we accept it
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
void PAR_Compton::Find_Holes_MC(const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high,GH2* cos_phi)//,GH2* cos_phi_mm,GH1* pi0_im)
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
	Test_Compton(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),15,305,325,Com_MM_hp,Com_MM_hm,Com_MM_OA_hp_130_149,Com_MM_OA_hm_130_149,Com_MM_OA_hp_110_130,Com_MM_OA_hm_110_130,Com_MM_OA_hp_90_110,Com_MM_OA_hm_90_110,Com_MM_OA_hp_70_90,Com_MM_OA_hm_70_90,Theta_hp,Theta_hm);	
	//Ring_Test(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetNeutralPions(),*GetTracks(),285,305,15,CBRing_MM_hp,CBRing_MM_hm,CBRing_MM_OA_hp_130_149,CBRing_MM_OA_hm_130_149,CBRing_MM_OA_hp_110_130,CBRing_MM_OA_hm_110_130,CBRing_MM_OA_hp_90_110,CBRing_MM_OA_hm_90_110,CBRing_MM_OA_hp_70_90,CBRing_MM_OA_hm_70_90,CBRing_IM,CBFRing_MM_hp,CBFRing_MM_hm,CBFRing_MM_OA_hp_130_149,CBFRing_MM_OA_hm_130_149,CBFRing_MM_OA_hp_110_130,CBFRing_MM_OA_hm_110_130,CBFRing_MM_OA_hp_90_110,CBFRing_MM_OA_hm_90_110,CBFRing_MM_OA_hp_70_90,CBFRing_MM_OA_hm_70_90,CBFRing_IM);
	Ring_Test_with_ps(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetNeutralPions(),*GetTracks(),305,325,15,CBRing_MM_hp,CBRing_MM_hm,CBRing_MM_OA_hp_130_149,CBRing_MM_OA_hm_130_149,CBRing_MM_OA_hp_110_130,CBRing_MM_OA_hm_110_130,CBRing_MM_OA_hp_90_110,CBRing_MM_OA_hm_90_110,CBRing_MM_OA_hp_70_90,CBRing_MM_OA_hm_70_90,CBRing_IM,CBFRing_MM_hp,CBFRing_MM_hm,CBFRing_MM_OA_hp_130_149,CBFRing_MM_OA_hm_130_149,CBFRing_MM_OA_hp_110_130,CBFRing_MM_OA_hm_110_130,CBFRing_MM_OA_hp_90_110,CBFRing_MM_OA_hm_90_110,CBFRing_MM_OA_hp_70_90,CBFRing_MM_OA_hm_70_90,CBFRing_IM);
	//Find_Holes(*GetNeutralPions(),*GetTracks(),*GetTagger(),*GetDetectorHits(),285,305,CosTheta_Phi,CosTheta_Phi_MM, Pi0_IM);
	//Check_CB_Elements(*GetNeutralPions(),*GetTracks(),*GetTagger(),*GetDetectorHits(),285,305);
	/*** MC settings
	TFile *f = new TFile("eff.root");
	TH2F* LookUp = (TH2F*)f->Get("rootino_eff");
	MC_Pi0_background(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetGeant(),15,285,315,Com_MM_hp,Com_MM_hp2,Com_MM_hm,LookUp);


	//Find_Holes_MC(*GetNeutralPions(),*GetTagger(),*GetTracks(),205,305,CosTheta_Phi);//,CosTheta_Phi_MM, Pi0_IM);

	f->Close();***/
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
