{
TFile *f = new TFile("Butanol_MainGoAT.root");
TH1F *denom = new TH1F("denominator","",300,0,300);
denom->Add(NCharged,NMissing);

TH1F *hist1 = new TH1F("division","",300,0,300);
hist1->Divide(NChargedOA,denom,1.,1.,"b");
hist1->Draw();


}


