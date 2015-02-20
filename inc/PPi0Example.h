#ifndef __PPi0Example_h__
#define __PPi0Example_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PPi0Example  : public PPhysics
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
    TH1F*	Test1;
    TH1F*	Test2;
    TH1F*	Test3;
    TH1*	TaggerAccScal;
  //  TH1*	h1;	
    string  	config;
    Double_t	TotM;
protected:
    virtual Bool_t  Start();
    virtual void NC_prime(const GTreeParticle& tree, TH1* Hist1, Float_t angle );
    virtual void NC(const GTreeParticle& tree, TH1* Hist1);
    virtual void NM(const GTreeParticle& tree,TH1* Hist1);
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PPi0Example();
    virtual ~PPi0Example();
    virtual Bool_t  Init(const char* configfile);

};
#endif
