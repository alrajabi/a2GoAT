{
TFile *f = new TFile("output.root","UPDATE");
TH1F *denom = new TH1F("denominator","",300,0,300);
denom->Add(NCharged_sub,NMissing_sub);

TH1F *hist1 = new TH1F("division","",300,0,300);
hist1->Divide(NCharged_sub,denom,1.,1.,"b");
hist1->Draw();
hist1->Write("eff_180");

}


