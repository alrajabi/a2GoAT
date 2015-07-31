void subtraction_macro(double scale_factor)
{
TFile *f1 = new TFile("Butanol_MainGoAT.root");
TH1F *h1 = (TH1F*)f1->Get("gHist");
h1->SetLineColor(kGreen);
h1->Draw();
TFile *f2 = new TFile("Carbon_MainGoAT.root");
TH1F *h2 = (TH1F*)f2->Get("gHist");
h2->Scale(scale_factor);
h2->SetLineColor(kRed);
h2->Draw("][sames");
TH1F *h3 = (TH1F*)h1->Clone("h3");
h3->Add(h2,-1);
h3->SetLineColor(kBlue);
h3->Draw("][sames");
TFile f("output.root","UPDATE");
h3->Write();
f.Close();
}
