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
 /***	
    GH1*	time;
    GH1*	time_cut;
    GH1*	time_2g;      
    GH1*	time_2g_cut;   
     
    GH1*	IM;
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
    GH1*	MissingM_asym;	
    GH1*	Theta1;
    GH1*	Theta0;
    GH1*	Asym_MM_before_mmcut;
    GH1*	Asym_MM_trigerror_check;
    GH1*	Asymm_MM_40;
    GH1*	Asymm_MM_50;
    GH1*	Asymm_MM_60;
    GH1*	Asymm_MM_70;
    GH1*	Asymm_MM_80;
    GH1*	Asymm_MM_90;***/
    GH1*        pi0_MM_40;
    GH1*        pi0_MM_50;
    GH1*        pi0_MM_60;
    GH1*        pi0_MM_70;
    GH1*        pi0_MM_80;
    GH1*        pi0_MM_90;
    //GH1*	Mi_Mass1;
    GH1*	Mi_Mass2;
    //GH1*	Mi_Mass3;
    GH2*	Mgg_vs_MM;
    //GH1*	Mi_Mass4;
    GH1*	eff_MM;
    GH1*	NC_with_OA;
    GH1*	NC_general;
    GH1*	eff_newdenom;
    GH1*	pi0_Inv_M1;
    GH1*	pi0_Inv_M2;
protected:
    virtual Bool_t  Start();
    virtual void Eff(const GTreeParticle& tree1,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2,GH1* Hist3,GH1* Hist4,GH1* mm_b4cut,GH1* gHist,GH2* NMCheck,GH2* mm_b4cut_2d,GH1* pi0check,GH1* inclusive_denom, GH1* mm_failedcut, Float_t angle  );	
    virtual void Test_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* gHist3,GH1* gHist4,GH2* thvsmm1,GH2* thvsmm0,GH1* MM_dist_b4_1);
    virtual void Test2_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* MM_dist_b4_1,GH1* asym_mm_b4_cut,GH1* asym_mm_40,GH1* asym_mm_50,GH1* asym_mm_60,GH1* asym_mm_70,GH1* asym_mm_80,GH1* asym_mm_90,GH1* asym_mm_noerror,GH1* IM1,GH1* IM2);
    virtual void Test_Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,GH1* eff_mm_b4cut,GH1* ncoa,GH1* nc, GH1* inclusive_denom,Float_t angle );
    virtual void Pi0_Study(const GTreeParticle& rootino_tree,const GTreeMeson& pi0tree,GH1* M_Mass2, GH2* mgg_mm,GH1* pi0_mm_40,GH1* pi0_mm_50,GH1* pi0_mm_60,GH1* pi0_mm_70,GH1* pi0_mm_80,GH1* pi0_mm_90);
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
