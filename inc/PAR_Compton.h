#ifndef __PAR_Compton_h__
#define __PAR_Compton_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PAR_Compton  : public PPhysics
{
private:
    //Compton Hists: 
    GH1*	Time_Comp;
    GH1*	Time_Ring;
	
    GH1*	Com_MM_hp;
    GH1*	Com_MM_hp2;
    GH1*	Theta_hp;
    GH1*        Theta_hm;
    GH1*	Com_MM_hm;
    //GH1*	Com_pMass;
    GH1*	Com_MM_OA_hp_130_149;
    GH1*	Com_MM_OA_hm_130_149;

    GH1*	Com_MM_OA_hp_110_130;
    GH1*	Com_MM_OA_hm_110_130;

    GH1*	Com_MM_OA_hp_90_110;
    GH1*	Com_MM_OA_hm_90_110;

    GH1*	Com_MM_OA_hp_70_90;
    GH1*	Com_MM_OA_hm_70_90;

    GH1*	Com_MM_OA_hp_50_70;
    GH1*	Com_MM_OA_hm_50_70;

    GH1*	Com_MM_OA_hp_19_50;
    GH1*	Com_MM_OA_hm_19_50;
  
  
    GH1*	CBRing_MM_hp;
    GH1*	CBRing_MM_hm;
   
    GH1*	CBRing_IM;
	
    GH1*	CBRing_MM_OA_hp_130_149;
    GH1*	CBRing_MM_OA_hm_130_149;

    GH1*	CBRing_MM_OA_hp_110_130;
    GH1*	CBRing_MM_OA_hm_110_130;

    GH1*	CBRing_MM_OA_hp_90_110;
    GH1*	CBRing_MM_OA_hm_90_110;

    GH1*	CBRing_MM_OA_hp_70_90;
    GH1*	CBRing_MM_OA_hm_70_90;

    GH1*	CBRing_MM_OA_hp_50_70;
    GH1*	CBRing_MM_OA_hm_50_70;

    GH1*	CBRing_MM_OA_hp_19_50;
    GH1*	CBRing_MM_OA_hm_19_50;

    GH1*	CBFRing_MM_hp;
    GH1*	CBFRing_MM_hm;
   
    GH1*	CBFRing_IM;
	
    GH1*	CBFRing_MM_OA_hp_130_149;
    GH1*	CBFRing_MM_OA_hm_130_149;

    GH1*	CBFRing_MM_OA_hp_110_130;
    GH1*	CBFRing_MM_OA_hm_110_130;

    GH1*	CBFRing_MM_OA_hp_90_110;
    GH1*	CBFRing_MM_OA_hm_90_110;

    GH1*	CBFRing_MM_OA_hp_70_90;
    GH1*	CBFRing_MM_OA_hm_70_90;

    GH1*	CBFRing_MM_OA_hp_50_70;
    GH1*	CBFRing_MM_OA_hm_50_70;

    GH1*	CBFRing_MM_OA_hp_19_50;
    GH1*	CBFRing_MM_OA_hm_19_50;

    GH2*	CosTheta_Phi;	
    GH1*	CosPhotons;
    GH2*	CosTheta_Phi_MM;
    GH1*	Pi0_IM;	
protected:
    virtual Bool_t  Start();
    virtual void Test_Compton(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,Int_t angle,Int_t en_low, Int_t en_high,GH1* time_comp,GH1* com_MM_hp,GH1* com_MM_hm,GH1* com_MM_OA_hp_130_149,GH1* com_MM_OA_hm_130_149,GH1* com_MM_OA_hp_110_130,GH1* com_MM_OA_hm_110_130,GH1* com_MM_OA_hp_90_110,GH1* com_MM_OA_hm_90_110,GH1* com_MM_OA_hp_70_90,GH1* com_MM_OA_hm_70_90,GH1* com_MM_OA_hp_50_70,GH1* com_MM_OA_hm_50_70,GH1* com_MM_OA_hp_19_50,GH1* com_MM_OA_hm_19_50,GH1* theta_hp,GH1* theta_hm);
    virtual void Ring_Test(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* time_ring,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_130_149,GH1* cbring_MM_OA_hm_130_149,GH1* cbring_MM_OA_hp_110_130,GH1* cbring_MM_OA_hm_110_130,GH1* cbring_MM_OA_hp_90_110,GH1* cbring_MM_OA_hm_90_110,GH1* cbring_MM_OA_hp_70_90,GH1* cbring_MM_OA_hm_70_90,GH1* cbring_MM_OA_hp_50_70,GH1* cbring_MM_OA_hm_50_70,GH1* cbring_MM_OA_hp_19_50,GH1* cbring_MM_OA_hm_19_50,GH1* cbring_IM,GH1* cbfring_MM_hp, GH1* cbfring_MM_hm,GH1* cbfring_MM_OA_hp_130_149,GH1* cbfring_MM_OA_hm_130_149,GH1* cbfring_MM_OA_hp_110_130,GH1* cbfring_MM_OA_hm_110_130,GH1* cbfring_MM_OA_hp_90_110,GH1* cbfring_MM_OA_hm_90_110,GH1* cbfring_MM_OA_hp_70_90,GH1* cbfring_MM_OA_hm_70_90,GH1* cbfring_MM_OA_hp_50_70,GH1* cbfring_MM_OA_hm_50_70,GH1* cbfring_MM_OA_hp_19_50,GH1* cbfring_MM_OA_hm_19_50,GH1* cbfring_IM);
    virtual void Ring_Test_with_ps(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* time_ring,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_130_149,GH1* cbring_MM_OA_hm_130_149,GH1* cbring_MM_OA_hp_110_130,GH1* cbring_MM_OA_hm_110_130,GH1* cbring_MM_OA_hp_90_110,GH1* cbring_MM_OA_hm_90_110,GH1* cbring_MM_OA_hp_70_90,GH1* cbring_MM_OA_hm_70_90,GH1* cbring_MM_OA_hp_50_70,GH1* cbring_MM_OA_hm_50_70,GH1* cbring_MM_OA_hp_19_50,GH1* cbring_MM_OA_hm_19_50,GH1* cbring_IM,GH1* cbfring_MM_hp, GH1* cbfring_MM_hm,GH1* cbfring_MM_OA_hp_130_149,GH1* cbfring_MM_OA_hm_130_149,GH1* cbfring_MM_OA_hp_110_130,GH1* cbfring_MM_OA_hm_110_130,GH1* cbfring_MM_OA_hp_90_110,GH1* cbfring_MM_OA_hm_90_110,GH1* cbfring_MM_OA_hp_70_90,GH1* cbfring_MM_OA_hm_70_90,GH1* cbfring_MM_OA_hp_50_70,GH1* cbfring_MM_OA_hm_50_70,GH1* cbfring_MM_OA_hp_19_50,GH1* cbfring_MM_OA_hm_19_50,GH1* cbfring_IM);
    virtual void MC_Pi0_background(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree, const GTreeA2Geant a2geant, Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hp2,GH1* com_MM_hm,TH2F* lookup);
    virtual void Find_Holes(const GTreeMeson& pi0tree,const GTreeTrack& tracktree,const GTreeTagger& taggertree,const GTreeDetectorHits& cbtree,Int_t en_low, Int_t en_high,GH2* cos_phi,GH2* cos_phi_mm,GH1* pi0_im);	
    virtual void Check_CB_Elements(const GTreeMeson& pi0tree,const GTreeTrack& tracktree,const GTreeTagger& taggertree,const GTreeDetectorHits& cbtree,Int_t en_low, Int_t en_high);
    virtual void Find_Holes_MC(const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high,GH2* cos_phi);//,GH2* cos_phi_mm,GH1* pi0_im);
    virtual Double_t myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 );
    virtual Double_t theta_C(Double_t theta );
    virtual Double_t LinearInterpolate(Double_t yplus, Double_t yminus, Double_t xplus, Double_t xminus, Double_t xgiven);
    virtual Double_t ps_theta0(Double_t E0, Double_t q);
    virtual Double_t ps_thetaNew(Double_t theta, Double_t theta_0, Double_t q);	
    virtual Double_t ps_thetaNew1(Double_t theta, Double_t theta_0, Double_t q);	
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PAR_Compton();
    virtual ~PAR_Compton();
    virtual Bool_t  Init();

};
#endif
