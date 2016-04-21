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
protected:
    virtual Bool_t  Start();
    virtual Double_t myOA_Calculator(const TLorentzVector& t1, const TLorentzVector& t2 );
    virtual void Pi0_background(const GTreeTagger& taggertree,const GTreeParticle& rootinotree,const GTreeParticle& photontree, const GTreeA2Geant a2geant, Int_t angle,Int_t en_low, Int_t en_high,GH1* com_MM,GH1* pi0_MM,GH1* pi0_MM_OA,GH1* com_OA,GH1* com_OA_Eff);//,TH2F* lookup);
    virtual void Find_Holes(const GTreeMeson& pi0tree,const GTreeTagger& taggertree,const GTreeTrack& tracktree,Int_t en_low, Int_t en_high,GH2* cos_phi);//,GH2* cos_phi_mm,GH1* pi0_im);
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PAR_MC();
    virtual ~PAR_MC();
    virtual Bool_t  Init();

};
#endif
