{
TFile *f1 = new TFile("Butanol_MainGoAT.root");
TH1D *h1 = (TH1D*)f1.Get("OA");
TFile *f2 = new TFile("Carbon_MainGoAT.root");
TH1D *h2 = (TH1D*)f2.Get("OA");
TH1F *hist1 = new TH1F("division","",352,0,352);
hist1->Divide(h1,h2,1.,1.,"B");
hist1->Draw();
}


