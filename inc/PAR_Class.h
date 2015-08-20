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
     
    GH1*	IM;
    GH1*	IM_2g;

    GH1*	MM;
    GH1*	MM_2g;
    TH1*	TaggerAccScal;
   
    GH1*	NChargedOA;
    GH1*	NCharged;
    GH1*	NMissing;
    GH1*	MissMass;
    GH1*	OA;
    GH1*	gHist1;	
    GH2* 	NChecked;
    GH1*	Theta1;
    GH1*	Theta0;
    GH1*	Phi1;
    GH1*	Phi0;
    GH2*	ThMM1;
    GH2*	ThMM0;
protected:
    virtual Bool_t  Start();
    virtual void Eff(const GTreeParticle& tree1,const GTreeMeson& tree2, GH1* Hist1,GH1* Hist2, GH1* Hist3, GH1* Hist4,GH1* Hist5,GH1* gHist,GH2* NMCheck,Float_t angle );	
    virtual void Test_Asym(const GTreeTrigger& triggertree,const GTreeTagger& taggertree,const GTreeMeson& pi0tree,GH1* gHist1,GH1* gHist2,GH1* gHist3,GH1* gHist4,GH2* thvsmm1,GH2* thvsmm0);
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
