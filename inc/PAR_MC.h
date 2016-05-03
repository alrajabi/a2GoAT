#ifndef __PAR_MC_h__
#define __PAR_MC_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PAR_MC  : public PPhysics
{
private:
    GH1*	time;
    GH1*	time_cut;
    GH1*	time_2g;      
    GH1*	time_2g_cut;   
     
    GH1*	IM;
    GH1*	IM_2g;

    GH1*	MM;
    GH1*	MM_2g;

    GH1*	Com_MM;
    GH1*	Pi0_MM;
    GH1*	Pi0_MM_OA;
    GH1*	Com_OA_Eff;
    GH1*	Com_OA;	

    GH2*	CosTheta_Phi;	
    GH1*	CosPhotons;
    GH2*	CosTheta_Phi_MM;
    GH1*	Pi0_IM;	

    GH1* 	Time_Eff;
    GH1*	OA;
    GH2*	NChargedOA;
    GH2*	Denom;	
    GH1*	Rootino_Mass;
    GH1*	Denom_19_30;
    GH1*	Num_19_30;
    GH1*	Denom_30_40;
    GH1*	Num_30_40;
    GH1*	Denom_40_50;
    GH1*	Num_40_50;
    GH1*	Denom_50_60;
    GH1*	Num_50_60;
    GH1*	Denom_60_70;
    GH1*	Num_60_70;
protected:
    virtual Bool_t  Start();
    virtual Double_t myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 );
    virtual void Pi0_background(const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree, const GTreeA2Geant a2geant, Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM,GH1* pi0_MM,GH1* pi0_MM_OA,GH1* com_OA,GH1* com_OA_Eff);//,TH2F* lookup);
    virtual void Find_Holes(const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high,GH2* cos_phi);//,GH2* cos_phi_mm,GH1* pi0_im);
    virtual void Eff_rev(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree,const GTreeTagger& taggertree, Float_t angle,GH1* time_eff,GH2* denom,GH2* ncoa,GH1* denom_19_30,GH1* num_19_30, GH1* denom_30_40,GH1* num_30_40, GH1* denom_40_50,GH1* num_40_50, GH1* denom_50_60,GH1* num_50_60, GH1* denom_60_70,GH1* num_60_70, GH1* oa);
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PAR_MC();
    virtual ~PAR_MC();
    virtual Bool_t  Init();

};
#endif
