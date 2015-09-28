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
 	
    GH1*	incDenom;
    GH1*	Mgg_40; 
    GH1*	NChargedOA_40;
    GH1*	NCharged_40;
    GH1*	Denom_40;
    GH1*	Mgg_50; 
    GH1*	NChargedOA_50;
    GH1*	NCharged_50;
    GH1*	Denom_50;
    GH1*	Mgg_60; 
    GH1*	NChargedOA_60;
    GH1*	NCharged_60;
    GH1*	Denom_60;
    GH1*	Mgg_70; 
    GH1*	NChargedOA_70;
    GH1*	NCharged_70;
    GH1*	Denom_70;
    GH1*	Mgg_80; 
    GH1*	NChargedOA_80;
    GH1*	NCharged_80;
    GH1*	Denom_80;
    GH1*	Mgg_90; 
    GH1*	NChargedOA_90;
    GH1*	NCharged_90;
    GH1*	Denom_90;
    GH1*	Mgg_100; 
    GH1*	NChargedOA_100;
    GH1*	NCharged_100;
    GH1*	Denom_100;
    GH1*	Mgg_110; 
    GH1*	NChargedOA_110;
    GH1*	NCharged_110;
    GH1*	Denom_110;
    GH1*	Mgg_120; 
    GH1*	NChargedOA_120;
    GH1*	NCharged_120;
    GH1*	Denom_120;
    GH1*	Mgg_130; 
    GH1*	NChargedOA_130;
    GH1*	NCharged_130;
    GH1*	Denom_130;
    
protected:
    virtual Bool_t  Start();
    virtual void Eff(const GTreeParticle& rootinotree,const GTreeMeson& pi0tree, Int_t theta0, Int_t theta1, Float_t angle,GH1* inclusive_denom,GH1* mgg_40,GH1* denom_40,GH1* nc_40,GH1* ncoa_40,GH1* mgg_50,GH1* denom_50,GH1* nc_50,GH1* ncoa_50,GH1* mgg_60,GH1* denom_60,GH1* nc_60,GH1* ncoa_60,GH1* mgg_70,GH1* denom_70,GH1* nc_70,GH1* ncoa_70,GH1* mgg_80,GH1* denom_80,GH1* nc_80,GH1* ncoa_80,GH1* mgg_90,GH1* denom_90,GH1* nc_90,GH1* ncoa_90,GH1* mgg_100,GH1* denom_100,GH1* nc_100,GH1* ncoa_100,GH1* mgg_110,GH1* denom_110,GH1* nc_110,GH1* ncoa_110,GH1* mgg_120,GH1* denom_120,GH1* nc_120,GH1* ncoa_120,GH1* mgg_130,GH1* denom_130,GH1* nc_130,GH1* ncoa_130) ;	
   
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
