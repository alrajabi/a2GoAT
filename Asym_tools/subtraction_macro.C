void subtraction_macro(double scale_factor, char *histname, char *histname2)
{
TFile *f1 = new TFile("output_helicity_sum.root");
TH1F *h1 = (TH1F*)f1->Get(histname);//"gHist");
h1->SetLineColor(kGreen);
h1->Draw();
TFile *f2 = new TFile("Carbon_MainGoAT.root");
TH1F *h2 = (TH1F*)f2->Get(histname2);//"gHist");
h2->Scale(scale_factor);
h2->SetLineColor(kRed);
h2->Draw("][sames");
TH1F *histname_h3 = (TH1F*)h1->Clone(histname);
histname_h3->Add(h2,-1);
histname_h3->SetLineColor(kBlue);
histname_h3->Draw("][sames");
TFile f("output_hsum_subt.root","UPDATE");
histname_h3->Write();
f.Close();
}
