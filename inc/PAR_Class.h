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
 	
    GH1*	time;
    GH1*	time_cut;
    GH1*	time_2g;      
    GH1*	time_2g_cut;   
     
    /*** GH1*	IM;
    GH1*	IM_2g;

    GH1*	MM;
    GH1*	MM_2g;
    TH1*	TaggerAccScal;
  
    GH1*	NChargedOA;
    GH1*	NCharged;
    GH1*	NMissing;
    GH1*	MissingM;
    GH1*	OA;
    GH1*	gHist1;	
    GH2* 	MM_after_cut;
    GH1*	Phi1;
    GH1*	Phi0;
    GH2*	ThMM1;
    GH2*	ThMM0;
    GH1*	pi0checker;	
    GH1*	Denom_incsv;
    GH2*	MM_before_cut;
    GH1*	MM_failed_cut;
    GH1*	MissingM_asym;	***/
    GH1*	Theta1;
    GH1*	Theta0;
    /***GH1*	Asym_MM_before_mmcut;
    GH1*	Asym_MM_trigerror_check;
    GH1*	Asymm_MM_40;
    GH1*	Asymm_MM_50;
    GH1*	Asymm_MM_60;
    GH1*	Asymm_MM_70;
    GH1*	Asymm_MM_80;
    GH1*	Asymm_MM_90;
    GH1*        pi0_MM_40;
    GH1*        pi0_MM_50;
    GH1*        pi0_MM_60;
    GH1*        pi0_MM_70;
    GH1*        pi0_MM_80;
    GH1*        pi0_MM_90;***/
    //GH1*	Mi_Mass1;
    //GH1*	Mi_Mass2;
    //GH1*	Mi_Mass3;
   // GH1*	Mgg_vs_MM;
    //GH1*	Mi_Mass4;
    GH1*	eff_MM;
    /***GH1*	NC_with_OA;
    GH1*	NC_general;
    GH1*	eff_newdenom;
    GH1*	pi0_Inv_M1;
    GH1*	pi0_Inv_M2;***/
    GH1*	NChargedOA_35_40;
    GH1*	NCharged_35_40;
    GH1*	Denom_incsv_35_40;
    GH1*	NChargedOA_40_45;
    GH1*	NCharged_40_45;
    GH1*	Denom_incsv_40_45;
    GH1*	Mgg_HPlus;
    GH1*	Mgg_HMinus;
    GH1*	Mgg_35_40_MM;
    GH1*	Mgg_40_45_MM;
protected:
    virtual Bool_t  Start();
    virtual void Eff(const GTreeParticle& tree1,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* mm_b4cut,GH1* gHist,GH2* NMCheck,GH2* mm_b4cut_2d,GH1* pi0check,GH1* inclusive_denom, GH1* mm_failedcut, Float_t angle  );	
    virtual void Test_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* gHist3,GH1* gHist4,GH2* thvsmm1,GH2* thvsmm0,GH1* MM_dist_b4_1);
    virtual void Test2_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* mgg_hplus,GH1* mgg_hminus);
    virtual void Test_Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,GH1* eff_mm_b4cut,GH1* ncoa_35_40,GH1* nc_35_40, GH1* inclusive_denom_35_40,GH1* ncoa_40_45,GH1* nc_40_45, GH1* inclusive_denom_40_45,GH1* mgg_35_40,GH1* mgg_40_45,Float_t angle );
    virtual void Pi0_Study(const GTreeMeson& pi0tree,GH1* M_Mass2, GH1* mgg_mm);
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
