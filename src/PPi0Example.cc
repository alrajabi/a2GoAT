#include "PPi0Example.h"

PPi0Example::PPi0Example()
{ 
    time 	= new GH1("time", 	"time", 	1400, -700, 700);
    time_cut 	= new GH1("time_cut", 	"time_cut", 	1400, -700, 700);

    time_2g 	= new GH1("time_2g",	"time_2g", 	1400, -700, 700);
    time_2g_cut = new GH1("time_2g_cut","time_2g_cut", 	1400, -700, 700);

    IM 		= new GH1("IM", 	"IM", 		400,   0, 400);
    IM_2g 	= new GH1("IM_2g", 	"IM_2g", 	400,   0, 400);
  
    MM		= new GH1("MM", 	"MM", 	 	400,   800, 1200);     
    MM_2g	= new GH1("MM_2g", 	"MM_2g", 	400,   800, 1200);
    Test1	= new TH1F("Test1",	"NC Prime at OA" ,300,0, 300);
    Test2	= new TH1F("Test2",	"NC " ,300,0, 300);	
    Test3	= new TH1F("Test3",	"NM",300,0, 300);
    TaggerAccScal = new TH1D("TaggerAccScal","TaggerAccScal",352,0,352);
  //  h1		 = new TH1F("h1", "Efficiency", 1000, 0, 1000);
	Double_t TotM=0;
}

PPi0Example::~PPi0Example()
{
}

Bool_t	PPi0Example::Init(const char* configfile)
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;
	if(configfile) SetConfigFile(configfile);

	if(!InitBackgroundCuts()) return kFALSE;
	if(!InitTargetMass()) return kFALSE;
	if(!InitTaggerChannelCuts()) return kFALSE;
	if(!InitTaggerScalers()) return kFALSE;
	cout << "--------------------------------------------------" << endl;
	return kTRUE;
}

Bool_t	PPi0Example::Start()
{
    if(!IsGoATFile())
    {
        cout << "ERROR: Input File is not a GoAT file." << endl;
        return kFALSE;
    }
    SetAsPhysicsFile();

    TraverseValidEvents();

    return kTRUE;
}
//AR's Functions defined here:
void PPi0Example::NC_prime(const GTreeParticle& tree, TH1* Hist1, Float_t angle )
{
	Int_t N_c = 0;
	Float_t E_rec = 0;
	
	for (Int_t i = 0; i < tree.GetNParticles(); i++)
	{
		if ((TMath::Abs(tree.Particle(i).CosTheta())<TMath::Abs(TMath::Cos(angle*TMath::Pi()/180)) )& (tree.GetNParticles() != 0))
			{	
				N_c++;
				E_rec += tree.Particle(i).E()-tree.Particle(i).M();				
				Hist1->Fill(E_rec);			 
			} 
		
	}
	

}

void PPi0Example::NC(const GTreeParticle& tree, TH1* Hist1)
{
	Int_t N_c = 0;
	Float_t E_rec = 0;
	for (Int_t i = 0; i < tree.GetNParticles(); i++)
	{
		if ((tree.GetNParticles() != 0))
			{	
				N_c++;
				E_rec += tree.Particle(i).E()-tree.Particle(i).M();				
				Hist1->Fill(E_rec);	
			 } 		
	}
	
}

void PPi0Example::NM(const GTreeParticle& tree, TH1* Hist1)
{
	Int_t N_c = 0;
	//Float_t E_rec = 0;
	if ((tree.GetNParticles() == 0))
			{	
				N_c++;
				//E_rec += tree.GetNReconstructed().E()-tree.GetNReconstructed().M();				
									
			 } 		
		Hist1->Fill(N_c);
}
//AR's Functions defined finished.
void	PPi0Example::ProcessEvent()
{
	// fill time diff (tagger - pi0), all pi0
	FillTime(*pi0,time);
	FillTimeCut(*pi0,time_cut);
		
	// fill missing mass, all pi0
	FillMissingMass(*pi0,MM);	
	
	// fill invariant mass, all pi0
	FillMass(*pi0,IM);
		
    // Some neutral decays
    for (Int_t i = 0; i < pi0->GetNParticles(); i++)
    {
        // Fill MM for 2 photon decay
        if ((pi0->GetNSubParticles(i) == 2) & (pi0->GetNSubPhotons(i) == 2))
        {
		// fill time diff (tagger - pi0), this pi0
		FillTime(*pi0,i,time_2g);
		FillTimeCut(*pi0,i,time_2g_cut);
			
		// fill missing mass, this pi0
            	FillMissingMass(*pi0,i,MM_2g);
            
		// fill invariant mass, this pi0
            FillMass(*pi0,i,IM_2g);
        }
	
    }
/***
Test->Fill(protons->Particle(i).Perp());
FillMissingMass(*protons,Test1);
cout << "Proton tree is like:" << protons.GetEntryList() << endl;
Int_t NC = 0;
		Int_t Ntot = protons->GetNParticles();
		 TNtuple *ntuple1 = new TNtuple("eff","efficiency","x:y");

//AR's Edit starts:
    if(trigger->GetHelicity()>0)
	{
		Int_t NC = 0;
		Int_t Ntot = protons->GetNParticles();
		for (Int_t i = 0; i < Ntot; i++)
   		 {
			if (TMath::Abs(protons->Particle(i).CosTheta())<TMath::Abs( TMath::Cos(20*TMath::Pi()/180)))
			{	NC++;
			 } 
			
		}
		cout << "NC_prime is:" << NC << endl;	
		cout << "NC Total is:" << Ntot << endl;
		cout << "-------------" << endl;
	}
    if(trigger->GetHelicity()<0)
    {
        FillMissingMass(*protons,Test2);
    }
 //AR's Edit end.
***/
	//TotM += NM(*protons);
	NC_prime(*protons,Test1,20);	
	NC(*protons,Test2);
	NM(*protons,Test3);
	//Test3->Fill(TotM);
}

void	PPi0Example::ProcessScalerRead()
{
	// Fill Tagger Scalers
	FillScalers(GetTC_scaler_min(),GetTC_scaler_max(),TaggerAccScal);
}

Bool_t	PPi0Example::Write()
{
	// Write some TH1s
	GTreeManager::Write(TaggerAccScal);
	GTreeManager::Write(Test1);
	GTreeManager::Write(Test2);
	// Write all GH1's easily
	GTreeManager::Write();
}
