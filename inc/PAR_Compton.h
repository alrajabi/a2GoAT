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

    GH1*	Com_MM_hp;
   // GH1*	Com_pMass;
    GH1*	Theta_hp;
    GH1*        Theta_hm;
    GH1*	Com_MM_hm;
    //GH1*	Com_pMass;
    GH1*	Com_MM_OA_hp_0;
    GH1*	Com_MM_OA_hm_0;

    GH1*	Com_MM_OA_hp_10;
    GH1*	Com_MM_OA_hm_10;

    GH1*	Com_MM_OA_hp_20;
    GH1*	Com_MM_OA_hm_20;

    GH1*	Com_MM_OA_hp_30;
    GH1*	Com_MM_OA_hm_30;

    GH1*	Com_MM_OA_hp_40;
    GH1*	Com_MM_OA_hm_40;

    GH1*	Com_MM_OA_hp_50;
    GH1*	Com_MM_OA_hm_50;

    GH1*	Com_MM_OA_hp_60;
    GH1*	Com_MM_OA_hm_60;

    GH1*	Com_MM_OA_hp_70;
    GH1*	Com_MM_OA_hm_70;

    GH1*	Com_MM_OA_hp_80;
    GH1*	Com_MM_OA_hm_80;

    GH1*	Com_MM_OA_hp_90;
    GH1*	Com_MM_OA_hm_90;

    GH1*	Com_MM_OA_hp_100;
    GH1*	Com_MM_OA_hm_100;

    GH1*	Com_MM_OA_hp_110;
    GH1*	Com_MM_OA_hm_110;

    GH1*	Com_MM_OA_hp_120;
    GH1*	Com_MM_OA_hm_120;

    GH1*	Com_MM_OA_hp_130;
    GH1*	Com_MM_OA_hm_130;

    GH1*	Com_MM_OA_hp_140;
    GH1*	Com_MM_OA_hm_140;

    GH1*	Com_MM_OA_hp_150;
    GH1*	Com_MM_OA_hm_150;
  
    GH1*	CBRing_MM_hp;
    GH1*	CBRing_MM_hm;
    GH1*	CBRing_MM_OA_hp_0;
    GH1*	CBRing_MM_OA_hm_0;

    GH1*	CBRing_MM_OA_hp_10;
    GH1*	CBRing_MM_OA_hm_10;

    GH1*	CBRing_MM_OA_hp_20;
    GH1*	CBRing_MM_OA_hm_20;

    GH1*	CBRing_MM_OA_hp_30;
    GH1*	CBRing_MM_OA_hm_30;

    GH1*	CBRing_MM_OA_hp_40;
    GH1*	CBRing_MM_OA_hm_40;

    GH1*	CBRing_MM_OA_hp_50;
    GH1*	CBRing_MM_OA_hm_50;

    GH1*	CBRing_MM_OA_hp_60;
    GH1*	CBRing_MM_OA_hm_60;

    GH1*	CBRing_MM_OA_hp_70;
    GH1*	CBRing_MM_OA_hm_70;

    GH1*	CBRing_MM_OA_hp_80;
    GH1*	CBRing_MM_OA_hm_80;

    GH1*	CBRing_MM_OA_hp_90;
    GH1*	CBRing_MM_OA_hm_90;

    GH1*	CBRing_MM_OA_hp_100;
    GH1*	CBRing_MM_OA_hm_100;

    GH1*	CBRing_MM_OA_hp_110;
    GH1*	CBRing_MM_OA_hm_110;

    GH1*	CBRing_MM_OA_hp_120;
    GH1*	CBRing_MM_OA_hm_120;

    GH1*	CBRing_MM_OA_hp_130;
    GH1*	CBRing_MM_OA_hm_130;

    GH1*	CBRing_MM_OA_hp_140;
    GH1*	CBRing_MM_OA_hm_140;

    GH1*	CBRing_MM_OA_hp_150;
    GH1*	CBRing_MM_OA_hm_150;
    GH1*	CBRing_IM;

    GH1*	TAPS_Ring_MM_hp;
    GH1*	TAPS_Ring_MM_hm;

    GH1*	TAPS_Ring_MM_OA_hp_0;
    GH1*	TAPS_Ring_MM_OA_hm_0;

    GH1*	TAPS_Ring_MM_OA_hp_10;
    GH1*	TAPS_Ring_MM_OA_hm_10;

    GH1*	TAPS_Ring_MM_OA_hp_20;
    GH1*	TAPS_Ring_MM_OA_hm_20;

    GH1*	TAPS_Ring_MM_OA_hp_30;
    GH1*	TAPS_Ring_MM_OA_hm_30;

    GH1*	TAPS_Ring_MM_OA_hp_40;
    GH1*	TAPS_Ring_MM_OA_hm_40;

    GH1*	TAPS_Ring_MM_OA_hp_50;
    GH1*	TAPS_Ring_MM_OA_hm_50;

    GH1*	TAPS_Ring_MM_OA_hp_60;
    GH1*	TAPS_Ring_MM_OA_hm_60;

    GH1*	TAPS_Ring_MM_OA_hp_70;
    GH1*	TAPS_Ring_MM_OA_hm_70;

    GH1*	TAPS_Ring_MM_OA_hp_80;
    GH1*	TAPS_Ring_MM_OA_hm_80;

    GH1*	TAPS_Ring_MM_OA_hp_90;
    GH1*	TAPS_Ring_MM_OA_hm_90;

    GH1*	TAPS_Ring_MM_OA_hp_100;
    GH1*	TAPS_Ring_MM_OA_hm_100;

    GH1*	TAPS_Ring_MM_OA_hp_110;
    GH1*	TAPS_Ring_MM_OA_hm_110;

    GH1*	TAPS_Ring_MM_OA_hp_120;
    GH1*	TAPS_Ring_MM_OA_hm_120;

    GH1*	TAPS_Ring_MM_OA_hp_130;
    GH1*	TAPS_Ring_MM_OA_hm_130;

    GH1*	TAPS_Ring_MM_OA_hp_140;
    GH1*	TAPS_Ring_MM_OA_hm_140;

    GH1*	TAPS_Ring_MM_OA_hp_150;
    GH1*	TAPS_Ring_MM_OA_hm_150;

    GH1*	TAPS_Ring_IM;
protected:
    virtual Bool_t  Start();
    virtual void Test_Compton(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM_hp,GH1* com_MM_hm,GH1* com_MM_OA_hp_0,GH1* com_MM_OA_hm_0, GH1* com_MM_OA_hp_10,GH1* com_MM_OA_hm_10, GH1* com_MM_OA_hp_20,GH1* com_MM_OA_hm_20, GH1* com_MM_OA_hp_30,GH1* com_MM_OA_hm_30, GH1* com_MM_OA_hp_40,GH1* com_MM_OA_hm_40, GH1* com_MM_OA_hp_50,GH1* com_MM_OA_hm_50, GH1* com_MM_OA_hp_60,GH1* com_MM_OA_hm_60, GH1* com_MM_OA_hp_70,GH1* com_MM_OA_hm_70, GH1* com_MM_OA_hp_80,GH1* com_MM_OA_hm_80, GH1* com_MM_OA_hp_90,GH1* com_MM_OA_hm_90, GH1* com_MM_OA_hp_100,GH1* com_MM_OA_hm_100, GH1* com_MM_OA_hp_110,GH1* com_MM_OA_hm_110, GH1* com_MM_OA_hp_120,GH1* com_MM_OA_hm_120, GH1* com_MM_OA_hp_130,GH1* com_MM_OA_hm_130, GH1* com_MM_OA_hp_140,GH1* com_MM_OA_hm_140, GH1* com_MM_OA_hp_150,GH1* com_MM_OA_hm_150, GH1* theta_hp,GH1* theta_hm);
    virtual void Ring_Analysis(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree, Int_t en_low, Int_t en_high, Int_t angle,GH1* ring_MM_hp, GH1* ring_MM_hm);	
    virtual void Ring_Test(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeParticle& rootinotree, const GTreeParticle& photontree,const GTreeMeson& pi0tree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high, Int_t angle,GH1* cbring_MM_hp, GH1* cbring_MM_hm,GH1* cbring_MM_OA_hp_0,GH1* cbring_MM_OA_hm_0, GH1* cbring_MM_OA_hp_10,GH1* cbring_MM_OA_hm_10, GH1* cbring_MM_OA_hp_20,GH1* cbring_MM_OA_hm_20, GH1* cbring_MM_OA_hp_30,GH1* cbring_MM_OA_hm_30, GH1* cbring_MM_OA_hp_40,GH1* cbring_MM_OA_hm_40, GH1* cbring_MM_OA_hp_50,GH1* cbring_MM_OA_hm_50, GH1* cbring_MM_OA_hp_60,GH1* cbring_MM_OA_hm_60, GH1* cbring_MM_OA_hp_70,GH1* cbring_MM_OA_hm_70, GH1* cbring_MM_OA_hp_80,GH1* cbring_MM_OA_hm_80, GH1* cbring_MM_OA_hp_90,GH1* cbring_MM_OA_hm_90, GH1* cbring_MM_OA_hp_100,GH1* cbring_MM_OA_hm_100, GH1* cbring_MM_OA_hp_110,GH1* cbring_MM_OA_hm_110, GH1* cbring_MM_OA_hp_120,GH1* cbring_MM_OA_hm_120, GH1* cbring_MM_OA_hp_130,GH1* cbring_MM_OA_hm_130, GH1* cbring_MM_OA_hp_140,GH1* cbring_MM_OA_hm_140, GH1* cbring_MM_OA_hp_150,GH1* cbring_MM_OA_hm_150,GH1* cbring_IM,GH1* taps_ring_MM_hp,GH1* taps_ring_MM_hm,GH1* taps_ring_MM_OA_hp_0,GH1* taps_ring_MM_OA_hm_0, GH1* taps_ring_MM_OA_hp_10,GH1* taps_ring_MM_OA_hm_10, GH1* taps_ring_MM_OA_hp_20,GH1* taps_ring_MM_OA_hm_20, GH1* taps_ring_MM_OA_hp_30,GH1* taps_ring_MM_OA_hm_30, GH1* taps_ring_MM_OA_hp_40,GH1* taps_ring_MM_OA_hm_40, GH1* taps_ring_MM_OA_hp_50,GH1* taps_ring_MM_OA_hm_50, GH1* taps_ring_MM_OA_hp_60,GH1* taps_ring_MM_OA_hm_60, GH1* taps_ring_MM_OA_hp_70,GH1* taps_ring_MM_OA_hm_70, GH1* taps_ring_MM_OA_hp_80,GH1* taps_ring_MM_OA_hm_80, GH1* taps_ring_MM_OA_hp_90,GH1* taps_ring_MM_OA_hm_90, GH1* taps_ring_MM_OA_hp_100,GH1* taps_ring_MM_OA_hm_100, GH1* taps_ring_MM_OA_hp_110,GH1* taps_ring_MM_OA_hm_110, GH1* taps_ring_MM_OA_hp_120,GH1* taps_ring_MM_OA_hm_120, GH1* taps_ring_MM_OA_hp_130,GH1* taps_ring_MM_OA_hm_130, GH1* taps_ring_MM_OA_hp_140,GH1* taps_ring_MM_OA_hm_140, GH1* taps_ring_MM_OA_hp_150,GH1* taps_ring_MM_OA_hm_150,GH1* taps_ring_IM);	
    virtual Double_t myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 );
    virtual Double_t theta_C(Double_t theta );	
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PAR_Compton();
    virtual ~PAR_Compton();
    virtual Bool_t  Init();

};
#endif
