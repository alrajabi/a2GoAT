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

	Com_MM_OA_hp_0 = new GH1("Com_MM_OA_hp_0","Rootino Missing Mass 0<Theta<10,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_0 = new GH1("Com_MM_OA_hm_0","Rootino Missing Mass 0<Theta<10,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_10 = new GH1("Com_MM_OA_hp_10","Rootino Missing Mass 10<Theta<20,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_10 = new GH1("Com_MM_OA_hm_10","Rootino Missing Mass 10<Theta<20,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_20 = new GH1("Com_MM_OA_hp_20","Rootino Missing Mass 20<Theta<30,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_20 = new GH1("Com_MM_OA_hm_20","Rootino Missing Mass 20<Theta<30,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_30 = new GH1("Com_MM_OA_hp_30","Rootino Missing Mass 30<Theta<40,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_30 = new GH1("Com_MM_OA_hm_30","Rootino Missing Mass 30<Theta<40,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_40 = new GH1("Com_MM_OA_hp_40","Rootino Missing Mass 40<Theta<50,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_40 = new GH1("Com_MM_OA_hm_40","Rootino Missing Mass 40<Theta<50,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_50 = new GH1("Com_MM_OA_hp_50","Rootino Missing Mass 50<Theta<60,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_50 = new GH1("Com_MM_OA_hm_50","Rootino Missing Mass 50<Theta<60,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_60 = new GH1("Com_MM_OA_hp_60","Rootino Missing Mass 60<Theta<70,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_60 = new GH1("Com_MM_OA_hm_60","Rootino Missing Mass 60<Theta<70,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_70 = new GH1("Com_MM_OA_hp_70","Rootino Missing Mass 70<Theta<80,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_70 = new GH1("Com_MM_OA_hm_70","Rootino Missing Mass 70<Theta<80,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_80 = new GH1("Com_MM_OA_hp_80","Rootino Missing Mass 80<Theta<90,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_80 = new GH1("Com_MM_OA_hm_80","Rootino Missing Mass 80<Theta<90,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_90 = new GH1("Com_MM_OA_hp_90","Rootino Missing Mass 90<Theta<100,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_90 = new GH1("Com_MM_OA_hm_90","Rootino Missing Mass 90<Theta<100,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_100 = new GH1("Com_MM_OA_hp_100","Rootino Missing Mass 100<Theta<110,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_100 = new GH1("Com_MM_OA_hm_100","Rootino Missing Mass 100<Theta<110,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_110 = new GH1("Com_MM_OA_hp_110","Rootino Missing Mass 110<Theta<120,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_110 = new GH1("Com_MM_OA_hm_110","Rootino Missing Mass 110<Theta<120,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_120 = new GH1("Com_MM_OA_hp_120","Rootino Missing Mass 120<Theta<130,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_120 = new GH1("Com_MM_OA_hm_120","Rootino Missing Mass 120<Theta<130,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_130 = new GH1("Com_MM_OA_hp_130","Rootino Missing Mass 130<Theta<140,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_130 = new GH1("Com_MM_OA_hm_130","Rootino Missing Mass 130<Theta<140,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_140 = new GH1("Com_MM_OA_hp_140","Rootino Missing Mass 140<Theta<150,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_140 = new GH1("Com_MM_OA_hm_140","Rootino Missing Mass 140<Theta<150,After OA-cut-Helicity = -1", 150,700,1300);

	Com_MM_OA_hp_150 = new GH1("Com_MM_OA_hp_150","Rootino Missing Mass 150<Theta<160,After OA-cut-Helicity = +1", 150,700,1300);
	Com_MM_OA_hm_150 = new GH1("Com_MM_OA_hm_150","Rootino Missing Mass 150<Theta<160,After OA-cut-Helicity = -1", 150,700,1300);

	CBRing_MM_hp = new GH1("CBRing_MM_hp","MM- CBRing Analysis Applied- OA-cut-Helicity = +1", 150,700,1300);
	CBRing_MM_hm = new GH1("CBRing_MM_hm","MM- CBRing Analysis Applied- OA-cut-Helicity = -1", 150,700,1300);

	CBRing_MM_OA_hp_0 = new GH1("CBRing_MM_OA_hp_0","Rootino MM-CBRing Analysis 0<Theta<10,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_0 = new GH1("CBRing_MM_OA_hm_0","Rootino MM-CBRing Analysis 0<Theta<10,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_10 = new GH1("CBRing_MM_OA_hp_10","Rootino MM-CBRing Analysis 10<Theta<20,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_10 = new GH1("CBRing_MM_OA_hm_10","Rootino MM-CBRing Analysis 10<Theta<20,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_20 = new GH1("CBRing_MM_OA_hp_20","Rootino MM-CBRing Analysis 20<Theta<30,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_20 = new GH1("CBRing_MM_OA_hm_20","Rootino MM-CBRing Analysis 20<Theta<30,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_30 = new GH1("CBRing_MM_OA_hp_30","Rootino MM-CBRing Analysis 30<Theta<40,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_30 = new GH1("CBRing_MM_OA_hm_30","Rootino MM-CBRing Analysis 30<Theta<40,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_40 = new GH1("CBRing_MM_OA_hp_40","Rootino MM-CBRing Analysis 40<Theta<50,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_40 = new GH1("CBRing_MM_OA_hm_40","Rootino MM-CBRing Analysis 40<Theta<50,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_50 = new GH1("CBRing_MM_OA_hp_50","Rootino MM-CBRing Analysis 50<Theta<60,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_50 = new GH1("CBRing_MM_OA_hm_50","Rootino MM-CBRing Analysis 50<Theta<60,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_60 = new GH1("CBRing_MM_OA_hp_60","Rootino MM-CBRing Analysis 60<Theta<70,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_60 = new GH1("CBRing_MM_OA_hm_60","Rootino MM-CBRing Analysis 60<Theta<70,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_70 = new GH1("CBRing_MM_OA_hp_70","Rootino MM-CBRing Analysis 70<Theta<80,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_70 = new GH1("CBRing_MM_OA_hm_70","Rootino MM-CBRing Analysis 70<Theta<80,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_80 = new GH1("CBRing_MM_OA_hp_80","Rootino MM-CBRing Analysis 80<Theta<90,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_80 = new GH1("CBRing_MM_OA_hm_80","Rootino MM-CBRing Analysis 80<Theta<90,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_90 = new GH1("CBRing_MM_OA_hp_90","Rootino MM-CBRing Analysis 90<Theta<100,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_90 = new GH1("CBRing_MM_OA_hm_90","Rootino MM-CBRing Analysis 90<Theta<100,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_100 = new GH1("CBRing_MM_OA_hp_100","Rootino MM-CBRing Analysis 100<Theta<110,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_100 = new GH1("CBRing_MM_OA_hm_100","Rootino MM-CBRing Analysis 100<Theta<110,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_110 = new GH1("CBRing_MM_OA_hp_110","Rootino MM-CBRing Analysis 110<Theta<120,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_110 = new GH1("CBRing_MM_OA_hm_110","Rootino MM-CBRing Analysis 110<Theta<120,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_120 = new GH1("CBRing_MM_OA_hp_120","Rootino MM-CBRing Analysis 120<Theta<130,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_120 = new GH1("CBRing_MM_OA_hm_120","Rootino MM-CBRing Analysis 120<Theta<130,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_130 = new GH1("CBRing_MM_OA_hp_130","Rootino MM-CBRing Analysis 130<Theta<140,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_130 = new GH1("CBRing_MM_OA_hm_130","Rootino MM-CBRing Analysis 130<Theta<140,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_140 = new GH1("CBRing_MM_OA_hp_140","Rootino MM-CBRing Analysis 140<Theta<150,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_140 = new GH1("CBRing_MM_OA_hm_140","Rootino MM-CBRing Analysis 140<Theta<150,After OA-cut-Helicity = -1", 700,600,1300);

	CBRing_MM_OA_hp_150 = new GH1("CBRing_MM_OA_hp_150","Rootino MM-CBRing Analysis 150<Theta<160,After OA-cut-Helicity = +1", 700,600,1300);
	CBRing_MM_OA_hm_150 = new GH1("CBRing_MM_OA_hm_150","Rootino MM-CBRing Analysis 150<Theta<160,After OA-cut-Helicity = -1", 700,600,1300);
	CBRing_IM = new GH1("CBRing_IM","Ring Pi0 IM", 250,0,250);
	/***
	TAPS_Ring_MM_hp = new GH1("TAPS_Ring_MM_hp","MM- TAPS Ring Analysis Applied- OA-cut-Helicity = +1", 150,700,1300);
	TAPS_Ring_MM_hm = new GH1("TAPS_Ring_MM_hm","MM- TAPS Ring Analysis Applied- OA-cut-Helicity = -1", 150,700,1300);

	TAPS_Ring_MM_OA_hp_0 = new GH1("TAPS_Ring_MM_OA_hp_0","Rootino MM-TAPS Ring Analysis 0<Theta<10,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_0 = new GH1("TAPS_Ring_MM_OA_hm_0","Rootino MM-TAPS Ring Analysis 0<Theta<10,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_10 = new GH1("TAPS_Ring_MM_OA_hp_10","Rootino MM-TAPS Ring Analysis 10<Theta<20,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_10 = new GH1("TAPS_Ring_MM_OA_hm_10","Rootino MM-TAPS Ring Analysis 10<Theta<20,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_20 = new GH1("TAPS_Ring_MM_OA_hp_20","Rootino MM-TAPS Ring Analysis 20<Theta<30,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_20 = new GH1("TAPS_Ring_MM_OA_hm_20","Rootino MM-TAPS Ring Analysis 20<Theta<30,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_30 = new GH1("TAPS_Ring_MM_OA_hp_30","Rootino MM-TAPS Ring Analysis 30<Theta<40,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_30 = new GH1("TAPS_Ring_MM_OA_hm_30","Rootino MM-TAPS Ring Analysis 30<Theta<40,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_40 = new GH1("TAPS_Ring_MM_OA_hp_40","Rootino MM-TAPS Ring Analysis 40<Theta<50,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_40 = new GH1("TAPS_Ring_MM_OA_hm_40","Rootino MM-TAPS Ring Analysis 40<Theta<50,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_50 = new GH1("TAPS_Ring_MM_OA_hp_50","Rootino MM-TAPS Ring Analysis 50<Theta<60,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_50 = new GH1("TAPS_Ring_MM_OA_hm_50","Rootino MM-TAPS Ring Analysis 50<Theta<60,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_60 = new GH1("TAPS_Ring_MM_OA_hp_60","Rootino MM-TAPS Ring Analysis 60<Theta<70,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_60 = new GH1("TAPS_Ring_MM_OA_hm_60","Rootino MM-TAPS Ring Analysis 60<Theta<70,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_70 = new GH1("TAPS_Ring_MM_OA_hp_70","Rootino MM-TAPS Ring Analysis 70<Theta<80,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_70 = new GH1("TAPS_Ring_MM_OA_hm_70","Rootino MM-TAPS Ring Analysis 70<Theta<80,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_80 = new GH1("TAPS_Ring_MM_OA_hp_80","Rootino MM-TAPS Ring Analysis 80<Theta<90,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_80 = new GH1("TAPS_Ring_MM_OA_hm_80","Rootino MM-TAPS Ring Analysis 80<Theta<90,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_90 = new GH1("TAPS_Ring_MM_OA_hp_90","Rootino MM-TAPS Ring Analysis 90<Theta<100,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_90 = new GH1("TAPS_Ring_MM_OA_hm_90","Rootino MM-TAPS Ring Analysis 90<Theta<100,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_100 = new GH1("TAPS_Ring_MM_OA_hp_100","Rootino MM-TAPS Ring Analysis 100<Theta<110,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_100 = new GH1("TAPS_Ring_MM_OA_hm_100","Rootino MM-TAPS Ring Analysis 100<Theta<110,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_110 = new GH1("TAPS_Ring_MM_OA_hp_110","Rootino MM-TAPS Ring Analysis 110<Theta<120,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_110 = new GH1("TAPS_Ring_MM_OA_hm_110","Rootino MM-TAPS Ring Analysis 110<Theta<120,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_120 = new GH1("TAPS_Ring_MM_OA_hp_120","Rootino MM-TAPS Ring Analysis 120<Theta<130,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_120 = new GH1("TAPS_Ring_MM_OA_hm_120","Rootino MM-TAPS Ring Analysis 120<Theta<130,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_130 = new GH1("TAPS_Ring_MM_OA_hp_130","Rootino MM-TAPS Ring Analysis 130<Theta<140,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_130 = new GH1("TAPS_Ring_MM_OA_hm_130","Rootino MM-TAPS Ring Analysis 130<Theta<140,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_140 = new GH1("TAPS_Ring_MM_OA_hp_140","Rootino MM-TAPS Ring Analysis 140<Theta<150,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_140 = new GH1("TAPS_Ring_MM_OA_hm_140","Rootino MM-TAPS Ring Analysis 140<Theta<150,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_MM_OA_hp_150 = new GH1("TAPS_Ring_MM_OA_hp_150","Rootino MM-TAPS Ring Analysis 150<Theta<160,After OA-cut-Helicity = +1", 700,600,1300);
	TAPS_Ring_MM_OA_hm_150 = new GH1("TAPS_Ring_MM_OA_hm_150","Rootino MM-TAPS Ring Analysis 150<Theta<160,After OA-cut-Helicity = -1", 700,600,1300);

	TAPS_Ring_IM = new GH1("TAPS_Ring_IM","TAPS Ring Pi0 IM", 250,0,250);***/
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
//--------------------------------Compton Analysis Functions starts here:-----------------------------------------
void PAR_Compton::Ring_Test(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_0,GH1* cbring_MM_OA_hm_0, GH1* cbring_MM_OA_hp_10,GH1* cbring_MM_OA_hm_10, GH1* cbring_MM_OA_hp_20,GH1* cbring_MM_OA_hm_20, GH1* cbring_MM_OA_hp_30,GH1* cbring_MM_OA_hm_30, GH1* cbring_MM_OA_hp_40,GH1* cbring_MM_OA_hm_40, GH1* cbring_MM_OA_hp_50,GH1* cbring_MM_OA_hm_50, GH1* cbring_MM_OA_hp_60,GH1* cbring_MM_OA_hm_60, GH1* cbring_MM_OA_hp_70,GH1* cbring_MM_OA_hm_70, GH1* cbring_MM_OA_hp_80,GH1* cbring_MM_OA_hm_80, GH1* cbring_MM_OA_hp_90,GH1* cbring_MM_OA_hm_90, GH1* cbring_MM_OA_hp_100,GH1* cbring_MM_OA_hm_100, GH1* cbring_MM_OA_hp_110,GH1* cbring_MM_OA_hm_110, GH1* cbring_MM_OA_hp_120,GH1* cbring_MM_OA_hm_120, GH1* cbring_MM_OA_hp_130,GH1* cbring_MM_OA_hm_130, GH1* cbring_MM_OA_hp_140,GH1* cbring_MM_OA_hm_140, GH1* cbring_MM_OA_hp_150,GH1* cbring_MM_OA_hm_150,GH1* cbring_IM)//,GH1* taps_ring_MM_hp,GH1* taps_ring_MM_hm,GH1* taps_ring_MM_OA_hp_0,GH1* taps_ring_MM_OA_hm_0, GH1* taps_ring_MM_OA_hp_10,GH1* taps_ring_MM_OA_hm_10, GH1* taps_ring_MM_OA_hp_20,GH1* taps_ring_MM_OA_hm_20, GH1* taps_ring_MM_OA_hp_30,GH1* taps_ring_MM_OA_hm_30, GH1* taps_ring_MM_OA_hp_40,GH1* taps_ring_MM_OA_hm_40, GH1* taps_ring_MM_OA_hp_50,GH1* taps_ring_MM_OA_hm_50, GH1* taps_ring_MM_OA_hp_60,GH1* taps_ring_MM_OA_hm_60, GH1* taps_ring_MM_OA_hp_70,GH1* taps_ring_MM_OA_hm_70, GH1* taps_ring_MM_OA_hp_80,GH1* taps_ring_MM_OA_hm_80, GH1* taps_ring_MM_OA_hp_90,GH1* taps_ring_MM_OA_hm_90, GH1* taps_ring_MM_OA_hp_100,GH1* taps_ring_MM_OA_hm_100, GH1* taps_ring_MM_OA_hp_110,GH1* taps_ring_MM_OA_hm_110, GH1* taps_ring_MM_OA_hp_120,GH1* taps_ring_MM_OA_hm_120, GH1* taps_ring_MM_OA_hp_130,GH1* taps_ring_MM_OA_hm_130, GH1* taps_ring_MM_OA_hp_140,GH1* taps_ring_MM_OA_hm_140, GH1* taps_ring_MM_OA_hp_150,GH1* taps_ring_MM_OA_hm_150,GH1* taps_ring_IM)
{//tracktree.GetTheta(pi0tree.GetTrackIndex(0))
	Double_t cb_fid_cut = TMath::ACos(1+2*TMath::Cos(150*TMath::Pi()/180))*180/TMath::Pi();	
	Double_t OA_Angle = angle*TMath::Pi()/180;
	Double_t taps_fid_cut = TMath::ACos(-1+2*TMath::Cos(6*TMath::Pi()/180))*180/TMath::Pi();
	Double_t for_edge_cut = TMath::ACos(2*TMath::Cos(25*TMath::Pi()/180)-TMath::Cos(20*TMath::Pi()/180))*180/TMath::Pi();
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{
				if ((pi0tree.GetNParticles() != 0) && (pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2) ) // check if a pi0 was detected and it is a good pi0
				{
					for (int i=0; i < (int)pi0tree.GetTrackIndexList(0).size(); i++)
					{
						if ((tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) >= cb_fid_cut && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i]) < 150)||(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= taps_fid_cut && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>6)||(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= for_edge_cut && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>25))	
						{
							FillMass(pi0tree,0,j,cbring_IM);
							Int_t y = (i==0) ? i+1 : i-1;
							if  (myOA_Calculator(CalcMissingP4(tracktree,y,j),rootinotree.Particle(0)) < OA_Angle)
							{
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,y,j,cbring_MM_hp);
									if ((tracktree.GetTheta(y)>=0)&&(tracktree.GetTheta(y)<10))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_0);
									}
									else if ((tracktree.GetTheta(y)>=10)&&(tracktree.GetTheta(y)<20))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_10);
									}
									else if ((tracktree.GetTheta(y)>=20)&&(tracktree.GetTheta(y)<30))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_20);
									}
									else if ((tracktree.GetTheta(y)>=30)&&(tracktree.GetTheta(y)<40))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_30);
									}
									else if ((tracktree.GetTheta(y)>=40)&&(tracktree.GetTheta(y)<50))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_40);
									}
									else if ((tracktree.GetTheta(y)>=50)&&(tracktree.GetTheta(y)<60))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_50);
									}
									else if ((tracktree.GetTheta(y)>=60)&&(tracktree.GetTheta(y)<70))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_60);
									}
									else if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<80))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_70);
									}
									else if ((tracktree.GetTheta(y)>=80)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_80);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<100))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_90);
									}
									else if ((tracktree.GetTheta(y)>=100)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_100);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<120))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_110);
									}
									else if ((tracktree.GetTheta(y)>=120)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_120);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<140))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_130);
									}
									else if ((tracktree.GetTheta(y)>=140)&&(tracktree.GetTheta(y)<150))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_140);
									}
									else if ((tracktree.GetTheta(y)>=150)&&(tracktree.GetTheta(y)<160))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hp_150);
									}											
								}
								else if (!triggertree.GetHelicity() ) 									{
									FillMissingMass(tracktree,y,j,cbring_MM_hm);
									if ((tracktree.GetTheta(y)>=0)&&(tracktree.GetTheta(y)<10))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_0);
									}
									else if ((tracktree.GetTheta(y)>=10)&&(tracktree.GetTheta(y)<20))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_10);
									}
									else if ((tracktree.GetTheta(y)>=20)&&(tracktree.GetTheta(y)<30))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_20);
									}
									else if ((tracktree.GetTheta(y)>=30)&&(tracktree.GetTheta(y)<40))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_30);
									}
									else if ((tracktree.GetTheta(y)>=40)&&(tracktree.GetTheta(y)<50))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_40);
									}
									else if ((tracktree.GetTheta(y)>=50)&&(tracktree.GetTheta(y)<60))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_50);
									}
									else if ((tracktree.GetTheta(y)>=60)&&(tracktree.GetTheta(y)<70))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_60);
									}
									else if ((tracktree.GetTheta(y)>=70)&&(tracktree.GetTheta(y)<80))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_70);
									}
									else if ((tracktree.GetTheta(y)>=80)&&(tracktree.GetTheta(y)<90))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_80);
									}
									else if ((tracktree.GetTheta(y)>=90)&&(tracktree.GetTheta(y)<100))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_90);
									}
									else if ((tracktree.GetTheta(y)>=100)&&(tracktree.GetTheta(y)<110))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_100);
									}
									else if ((tracktree.GetTheta(y)>=110)&&(tracktree.GetTheta(y)<120))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_110);
									}
									else if ((tracktree.GetTheta(y)>=120)&&(tracktree.GetTheta(y)<130))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_120);
									}
									else if ((tracktree.GetTheta(y)>=130)&&(tracktree.GetTheta(y)<140))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_130);
									}
									else if ((tracktree.GetTheta(y)>=140)&&(tracktree.GetTheta(y)<150))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_140);
									}
									else if ((tracktree.GetTheta(y)>=150)&&(tracktree.GetTheta(y)<160))
									{
										FillMissingMass(tracktree,y,j,cbring_MM_OA_hm_150);
									}
								}	
							}
						}/***
						else if ((tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= taps_fid_cut && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>6)||(tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])<= for_edge_cut && tracktree.GetTheta(pi0tree.GetTrackIndexList(0)[i])>25) )
						{
							FillMass(pi0tree,0,j,taps_ring_IM);
							Int_t l = (i==0) ? i+1 : i-1;
							if  (myOA_Calculator(CalcMissingP4(tracktree,l,j),rootinotree.Particle(0)) < OA_Angle)
							{
								if  (triggertree.GetHelicity() )
								{
									FillMissingMass(tracktree,l,j,taps_ring_MM_hp);
									if ((tracktree.GetTheta(l)>=0)&&(tracktree.GetTheta(l)<10))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_0);
									}
									else if ((tracktree.GetTheta(l)>=10)&&(tracktree.GetTheta(l)<20))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_10);
									}
									else if ((tracktree.GetTheta(l)>=20)&&(tracktree.GetTheta(l)<30))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_20);
									}
									else if ((tracktree.GetTheta(l)>=30)&&(tracktree.GetTheta(l)<40))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_30);
									}
									else if ((tracktree.GetTheta(l)>=40)&&(tracktree.GetTheta(l)<50))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_40);
									}
									else if ((tracktree.GetTheta(l)>=50)&&(tracktree.GetTheta(l)<60))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_50);
									}
									else if ((tracktree.GetTheta(l)>=60)&&(tracktree.GetTheta(l)<70))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_60);
									}
									else if ((tracktree.GetTheta(l)>=70)&&(tracktree.GetTheta(l)<80))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_70);
									}
									else if ((tracktree.GetTheta(l)>=80)&&(tracktree.GetTheta(l)<90))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_80);
									}
									else if ((tracktree.GetTheta(l)>=90)&&(tracktree.GetTheta(l)<100))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_90);
									}
									else if ((tracktree.GetTheta(l)>=100)&&(tracktree.GetTheta(l)<110))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_100);
									}
									else if ((tracktree.GetTheta(l)>=110)&&(tracktree.GetTheta(l)<120))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_110);
									}
									else if ((tracktree.GetTheta(l)>=120)&&(tracktree.GetTheta(l)<130))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_120);
									}
									else if ((tracktree.GetTheta(l)>=130)&&(tracktree.GetTheta(l)<140))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_130);
									}
									else if ((tracktree.GetTheta(l)>=140)&&(tracktree.GetTheta(l)<150))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_140);
									}
									else if ((tracktree.GetTheta(l)>=150)&&(tracktree.GetTheta(l)<160))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hp_150);
									}
								}	
								else if (!triggertree.GetHelicity() ) 									{
									FillMissingMass(tracktree,l,j,taps_ring_MM_hm);
									if ((tracktree.GetTheta(l)>=0)&&(tracktree.GetTheta(l)<10))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_0);
									}
									else if ((tracktree.GetTheta(l)>=10)&&(tracktree.GetTheta(l)<20))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_10);
									}
									else if ((tracktree.GetTheta(l)>=20)&&(tracktree.GetTheta(l)<30))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_20);
									}
									else if ((tracktree.GetTheta(l)>=30)&&(tracktree.GetTheta(l)<40))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_30);
									}
									else if ((tracktree.GetTheta(l)>=40)&&(tracktree.GetTheta(l)<50))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_40);
									}
									else if ((tracktree.GetTheta(l)>=50)&&(tracktree.GetTheta(l)<60))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_50);
									}
									else if ((tracktree.GetTheta(l)>=60)&&(tracktree.GetTheta(l)<70))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_60);
									}
									else if ((tracktree.GetTheta(l)>=70)&&(tracktree.GetTheta(l)<80))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_70);
									}
									else if ((tracktree.GetTheta(l)>=80)&&(tracktree.GetTheta(l)<90))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_80);
									}
									else if ((tracktree.GetTheta(l)>=90)&&(tracktree.GetTheta(l)<100))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_90);
									}
									else if ((tracktree.GetTheta(l)>=100)&&(tracktree.GetTheta(l)<110))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_100);
									}
									else if ((tracktree.GetTheta(l)>=110)&&(tracktree.GetTheta(l)<120))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_110);
									}
									else if ((tracktree.GetTheta(l)>=120)&&(tracktree.GetTheta(l)<130))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_120);
									}
									else if ((tracktree.GetTheta(l)>=130)&&(tracktree.GetTheta(l)<140))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_130);
									}
									else if ((tracktree.GetTheta(l)>=140)&&(tracktree.GetTheta(l)<150))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_140);
									}
									else if ((tracktree.GetTheta(l)>=150)&&(tracktree.GetTheta(l)<160))
									{
										FillMissingMass(tracktree,l,j,taps_ring_MM_OA_hm_150);
									}

								}						
							}

						}	***/					
					}
				}
			}
		}
	}
}		

void PAR_Compton::Ring_Analysis(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* ring_MM_hp, GH1* ring_MM_hm)
{//tracktree.GetTheta(pi0tree.GetTrackIndex(0))
	Double_t fid_cut = TMath::ACos(1+2*TMath::Cos(160*TMath::Pi()/180))*180/TMath::Pi();		
	if(triggertree.GetNErrors()==0)
	{
		for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
		{
			if ((taggertree.GetTaggedEnergy(j)>=en_low)&&( taggertree.GetTaggedEnergy(j)<en_high))
			{
				if ((pi0tree.GetNParticles() != 0) ) // check if a pi0 was detected
				{
					if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
       					{
						if  (triggertree.GetHelicity() )
						{
							if ( rootinotree.GetTrackIndex(0) == 0 )
							{
								//cout << "\n track 0 is rootino" <<endl;
								if (tracktree.GetTheta(1) >= fid_cut && tracktree.GetTheta(1) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,2,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,2,j,ring_MM_hp);
									}
									//cout << "\t track 1 went thru ring" << endl;
								}
								if (tracktree.GetTheta(2) >= fid_cut && tracktree.GetTheta(2) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,1,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,1,j,ring_MM_hp);
									}
									//cout << "\t track 2 went thru ring" << endl;
								}							 
							}
							else if ( rootinotree.GetTrackIndex(0) == 1 )
							{
								
								//cout << "\n track 1 is rootino" <<endl;
								if (tracktree.GetTheta(0) >= fid_cut && tracktree.GetTheta(0) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,2,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,2,j,ring_MM_hp);
									}
									//cout << "\t track 0 went thru ring " << endl;
								}
								if (tracktree.GetTheta(2) >= fid_cut && tracktree.GetTheta(2) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,0,j,ring_MM_hp);
									}
									//cout << "\t track 2 went thru ring" << endl;
								}
							}
							else if ( rootinotree.GetTrackIndex(0) == 2 )
							{
								//cout << "\n track 2 is rootino" <<endl;
								if (tracktree.GetTheta(1) >= fid_cut && tracktree.GetTheta(1) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,0,j,ring_MM_hp);
									}
									//cout << "\t track 1 went thru ring " << endl;
								}
								if (tracktree.GetTheta(0) >= fid_cut && tracktree.GetTheta(0) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,1,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,1,j,ring_MM_hp);
									}
									//cout << "\t track 0 went thru ring " << endl;
								}
							}
	
						}
						if  (!triggertree.GetHelicity() )
						{
							if ( rootinotree.GetTrackIndex(0) == 0 )
							{
								//cout << "\n track 0 is rootino" <<endl;
								if (tracktree.GetTheta(1) >= fid_cut && tracktree.GetTheta(1) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,2,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,2,j,ring_MM_hm);
									}
									//cout << "\t track 1 went thru ring" << endl;
								}
								if (tracktree.GetTheta(2) >= fid_cut && tracktree.GetTheta(2) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,1,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,1,j,ring_MM_hm);
									}
									//cout << "\t track 2 went thru ring" << endl;
								}							 
							}
							else if ( rootinotree.GetTrackIndex(0) == 1 )
							{
								
								//cout << "\n track 1 is rootino" <<endl;
								if (tracktree.GetTheta(0) >= fid_cut && tracktree.GetTheta(0) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,2,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,2,j,ring_MM_hm);
									}
									//cout << "\t track 0 went thru ring " << endl;
								}
								if (tracktree.GetTheta(2) >= fid_cut && tracktree.GetTheta(2) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,0,j,ring_MM_hm);
									}
									//cout << "\t track 2 went thru ring" << endl;
								}
							}
							else if ( rootinotree.GetTrackIndex(0) == 2 )
							{
								//cout << "\n track 2 is rootino" <<endl;
								if (tracktree.GetTheta(1) >= fid_cut && tracktree.GetTheta(1) < 160) 
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,0,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,0,j,ring_MM_hm);
									}
									//cout << "\t track 1 went thru ring " << endl;
								}
								if (tracktree.GetTheta(0) >= fid_cut && tracktree.GetTheta(0) <= 160)
								{
									if  (myOA_Calculator(CalcMissingP4(tracktree,1,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
									{
										FillMissingMass(tracktree,1,j,ring_MM_hm);
									}
									//cout << "\t track 0 went thru ring " << endl;
								}
							}
	
						}
					}
				}		
			}	
		}	
	}	
}



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
						if ((CalcMissingMass(photontree,0,j)<940)&&(CalcMissingMass(photontree,0,j)>900))
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
						if ((CalcMissingMass(photontree,0,j)<940)&&(CalcMissingMass(photontree,0,j)>900))
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
	Test_Compton(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),15,285,305,Com_MM_hp,Com_MM_hm,Com_MM_OA_hp_0,Com_MM_OA_hm_0, Com_MM_OA_hp_10,Com_MM_OA_hm_10, Com_MM_OA_hp_20,Com_MM_OA_hm_20, Com_MM_OA_hp_30,Com_MM_OA_hm_30, Com_MM_OA_hp_40,Com_MM_OA_hm_40, Com_MM_OA_hp_50,Com_MM_OA_hm_50, Com_MM_OA_hp_60,Com_MM_OA_hm_60, Com_MM_OA_hp_70,Com_MM_OA_hm_70, Com_MM_OA_hp_80,Com_MM_OA_hm_80, Com_MM_OA_hp_90,Com_MM_OA_hm_90, Com_MM_OA_hp_100,Com_MM_OA_hm_100, Com_MM_OA_hp_110,Com_MM_OA_hm_110, Com_MM_OA_hp_120,Com_MM_OA_hm_120, Com_MM_OA_hp_130,Com_MM_OA_hm_130, Com_MM_OA_hp_140,Com_MM_OA_hm_140, Com_MM_OA_hp_150,Com_MM_OA_hm_150,Theta_hp,Theta_hm);
	//Ring_Analysis(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetNeutralPions(),*GetTracks(),295,305,15,Ring_MM_hp,Ring_MM_hm);	
	Ring_Test(*GetTrigger(),*GetTagger(),*GetRootinos(),*GetPhotons(),*GetNeutralPions(),*GetTracks(),285,305,15,CBRing_MM_hp,CBRing_MM_hm,CBRing_MM_OA_hp_0,CBRing_MM_OA_hm_0, CBRing_MM_OA_hp_10,CBRing_MM_OA_hm_10, CBRing_MM_OA_hp_20,CBRing_MM_OA_hm_20, CBRing_MM_OA_hp_30,CBRing_MM_OA_hm_30, CBRing_MM_OA_hp_40,CBRing_MM_OA_hm_40, CBRing_MM_OA_hp_50,CBRing_MM_OA_hm_50, CBRing_MM_OA_hp_60,CBRing_MM_OA_hm_60, CBRing_MM_OA_hp_70,CBRing_MM_OA_hm_70, CBRing_MM_OA_hp_80,CBRing_MM_OA_hm_80, CBRing_MM_OA_hp_90,CBRing_MM_OA_hm_90, CBRing_MM_OA_hp_100,CBRing_MM_OA_hm_100, CBRing_MM_OA_hp_110,CBRing_MM_OA_hm_110, CBRing_MM_OA_hp_120,CBRing_MM_OA_hm_120, CBRing_MM_OA_hp_130,CBRing_MM_OA_hm_130, CBRing_MM_OA_hp_140,CBRing_MM_OA_hm_140,CBRing_MM_OA_hp_150,CBRing_MM_OA_hm_150,CBRing_IM);//,TAPS_Ring_MM_hp,TAPS_Ring_MM_hm,TAPS_Ring_MM_OA_hp_0,TAPS_Ring_MM_OA_hm_0, TAPS_Ring_MM_OA_hp_10,TAPS_Ring_MM_OA_hm_10, TAPS_Ring_MM_OA_hp_20,TAPS_Ring_MM_OA_hm_20, TAPS_Ring_MM_OA_hp_30,TAPS_Ring_MM_OA_hm_30, TAPS_Ring_MM_OA_hp_40,TAPS_Ring_MM_OA_hm_40, TAPS_Ring_MM_OA_hp_50,TAPS_Ring_MM_OA_hm_50, TAPS_Ring_MM_OA_hp_60,TAPS_Ring_MM_OA_hm_60, TAPS_Ring_MM_OA_hp_70,TAPS_Ring_MM_OA_hm_70, TAPS_Ring_MM_OA_hp_80,TAPS_Ring_MM_OA_hm_80, TAPS_Ring_MM_OA_hp_90,TAPS_Ring_MM_OA_hm_90, TAPS_Ring_MM_OA_hp_100,TAPS_Ring_MM_OA_hm_100, TAPS_Ring_MM_OA_hp_110,TAPS_Ring_MM_OA_hm_110, TAPS_Ring_MM_OA_hp_120,TAPS_Ring_MM_OA_hm_120, TAPS_Ring_MM_OA_hp_130,TAPS_Ring_MM_OA_hm_130, TAPS_Ring_MM_OA_hp_140,TAPS_Ring_MM_OA_hm_140, TAPS_Ring_MM_OA_hp_150,TAPS_Ring_MM_OA_hm_150,TAPS_Ring_IM);
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
