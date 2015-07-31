void helicity_sum_macro(double scale_factor)
{
TFile *f1 = new TFile("MainGoAT_oneH.root");
TH1F *h1 = (TH1F*)f1->Get("Theta1");//"gHist");
h1->SetLineColor(kGreen);
h1->Draw();
TFile *f2 = new TFile("MainGoAT_zeroH.root");
TH1F *h2 = (TH1F*)f2->Get("Theta0");//"gHist");
h2->Scale(scale_factor);
h2->SetLineColor(kRed);
h2->Draw("][sames");
TH1F *histname_h3 = (TH1F*)h1->Clone("Hpos");
histname_h3->Add(h2,+1);
histname_h3->SetLineColor(kBlue);
histname_h3->Draw("][sames");
TFile f("output_helicity_sum.root","UPDATE");
histname_h3->Write();
f.Close();
}


