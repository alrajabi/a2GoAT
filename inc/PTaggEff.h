#ifndef __PTaggEff_h__
#define __PTaggEff_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PTaggEff  : public PPhysics
{
private:
    GH1*	TaggerAllHits;
    GH1*	TaggerSingles;
    GH1*	TaggerDoubles;
    TH1*	TaggerAccScal;

protected:
    virtual Bool_t  Start();
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();
			
public:
    PTaggEff();
    virtual ~PTaggEff();
    virtual Bool_t  Init();

};
#endif
