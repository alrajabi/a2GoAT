#ifndef __PAR_Class_h__
#define __PAR_Class_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PAR_Class  : public PPhysics
{
private:
  //pi0 Eff Revisited (Added on Jan26,2016)
    GH1* 	Time_Eff;
    GH2*	NChargedOA_hp;
    GH2*	Denom_hp;
    GH2*	NChargedOA_hm;
    GH2*	Denom_hm;	
    GH1*	Rootino_Mass;
    GH1*	Test_denom;
    GH1*	Test_num;
   //Carbon SF Revisited (Added on Feb12,2016)
    GH1* 	 Pi0_MM_hp_19_36;
    GH1* 	 Pi0_MM_hm_19_36;
    GH1* 	 Pi0_MM_hp_36_53;
    GH1* 	 Pi0_MM_hm_36_53;
    GH1* 	 Pi0_MM_hp_53_70;
    GH1* 	 Pi0_MM_hm_53_70;
    GH1* 	 Pi0_MM_hp_70_87;
    GH1* 	 Pi0_MM_hm_70_87;
    GH1* 	 Pi0_MM_hp_87_104;
    GH1* 	 Pi0_MM_hm_87_104;
    GH1* 	 Pi0_MM_hp_104_121;
    GH1* 	 Pi0_MM_hm_104_121;
    GH1* 	 Pi0_MM_hp_121_138;
    GH1* 	 Pi0_MM_hm_121_138;
    GH1* 	 Pi0_MM_hp_138_155;
    GH1* 	 Pi0_MM_hm_138_155;    
    GH1* 	 Pi0_MM_hp;
    GH1* 	 Pi0_MM_hm;


 //pi0 Eff hists:	

    GH1*	incDenom;
    GH1*	NChargedOA;
    GH1*	NCharged;
    GH1*	Denom;
    GH1*   	Mgg_all_theta;	
    GH1*   	Mgg_0;
    GH1*   	Mgg_10;    
    GH1*   	Mgg_20; 
    GH1*   	Mgg_30;
    GH1*   	Mgg_40;
    GH1*   	Mgg_50;
    GH1*        Mgg_60;
    GH1*        Mgg_70;
    GH1*   	Mgg_80;
    GH1*        Mgg_90;
    GH1*        Mgg_100;
    GH1*   	Mgg_110;
    GH1*   	Mgg_120;
    GH1*   	Mgg_130;
//pi0 Asym. hists:

    GH1*	Theta_hp;
    GH1*        Theta_hm;
    GH1*	Mgg_hp_0;
    GH1*	Mgg_hm_0;
    GH1*	Mgg_hp_10;
    GH1*	Mgg_hm_10;
    GH1*	Mgg_hp_20;
    GH1*	Mgg_hm_20;
    GH1*	Mgg_hp_30;
    GH1*	Mgg_hm_30;
    GH1*	Mgg_hp_40;
    GH1*	Mgg_hm_40;
    GH1*	Mgg_hp_50;
    GH1*	Mgg_hm_50;
    GH1*	Mgg_hp_60;
    GH1*	Mgg_hm_60;
    GH1*	Mgg_hp_70;
    GH1*	Mgg_hm_70;
    GH1*	Mgg_hp_80;
    GH1*	Mgg_hm_80;
    GH1*	Mgg_hp_90;
    GH1*	Mgg_hm_90;
    GH1*	Mgg_hp_100;
    GH1*	Mgg_hm_100;
    GH1*	Mgg_hp_110;
    GH1*	Mgg_hm_110;
    GH1*	Mgg_hp_120;
    GH1*	Mgg_hm_120;
    GH1*	Mgg_hp_130;
    GH1*	Mgg_hm_130;
    GH1*	Mgg_hp_140;
    GH1*	Mgg_hm_140;
    GH1*	Mgg_hp_150;
    GH1*	Mgg_hm_150;
    GH1*	Mgg_hp_160;
    GH1*	Mgg_hm_160;
    GH1*	Mgg_hp_170;
    GH1*	Mgg_hm_170;

protected:
    virtual Bool_t  Start();
    virtual void Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree, Int_t theta0, Int_t theta1, Float_t angle,GH1* inclusive_denom,GH1* denom,GH1* nc,GH1* ncoa,GH1* mgg_all_theta,GH1* mgg_0,GH1* mgg_10,GH1* mgg_20,GH1* mgg_30,GH1* mgg_40, GH1* mgg_50, GH1* mgg_60, GH1* mgg_70, GH1* mgg_80, GH1* mgg_90, GH1* mgg_100, GH1* mgg_110, GH1* mgg_120, GH1* mgg_130) ;	
    virtual void Pi0_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,Int_t en_low,Int_t en_high,GH1* theta_hp,GH1* theta_hm,GH1* mgg_hp_0,GH1* mgg_hm_0, GH1* mgg_hp_10,GH1* mgg_hm_10, GH1* mgg_hp_20,GH1* mgg_hm_20, GH1* mgg_hp_30,GH1* mgg_hm_30, GH1* mgg_hp_40,GH1* mgg_hm_40, GH1* mgg_hp_50,GH1* mgg_hm_50, GH1* mgg_hp_60,GH1* mgg_hm_60, GH1* mgg_hp_70,GH1* mgg_hm_70, GH1* mgg_hp_80,GH1* mgg_hm_80, GH1* mgg_hp_90,GH1* mgg_hm_90, GH1* mgg_hp_100,GH1* mgg_hm_100, GH1* mgg_hp_110,GH1* mgg_hm_110, GH1* mgg_hp_120,GH1* mgg_hm_120, GH1* mgg_hp_130,GH1* mgg_hm_130, GH1* mgg_hp_140,GH1* mgg_hm_140, GH1* mgg_hp_150,GH1* mgg_hm_150, GH1* mgg_hp_160,GH1* mgg_hm_160, GH1* mgg_hp_170,GH1* mgg_hm_170); 
    virtual void Eff_rev(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrigger& triggertree, Float_t angle,Int_t en_low, Int_t en_high,Int_t angle1, Int_t angle2,GH1* time_eff,GH2* denom_hp,GH2* ncoa_hp,GH2* denom_hm,GH2* ncoa_hm,GH1* mgg_all_thet, GH1* test_denom,GH1* test_num);	
    virtual void Carbon_SF(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,Int_t en_low,Int_t en_high,GH1* theta_hp,GH1* theta_hm,GH1* pi0_MM_hp,GH1* pi0_MM_hm,GH1* pi0_MM_hp_19_36,GH1* pi0_MM_hm_19_36,GH1* pi0_MM_hp_36_53,GH1* pi0_MM_hm_36_53,GH1* pi0_MM_hp_53_70,GH1* pi0_MM_hm_53_70,GH1* pi0_MM_hp_70_87,GH1* pi0_MM_hm_70_87,GH1* pi0_MM_hp_87_104,GH1* pi0_MM_hm_87_104,GH1* pi0_MM_hp_104_121,GH1* pi0_MM_hm_104_121,GH1* pi0_MM_hp_121_138,GH1* pi0_MM_hm_121_138,GH1* pi0_MM_hp_138_155,GH1* pi0_MM_hm_138_155);
    virtual Double_t myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 );
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
    			
public:
    PAR_Class();
    virtual ~PAR_Class();
    virtual Bool_t  Init();

};
#endif
