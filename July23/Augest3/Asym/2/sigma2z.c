{
TFile f("output_helicity_sum.root","UPDATE");
TH1F *h1 = (TH1F*)f->Get("Phi_pos");
TH1F *h2 = (TH1F*)f->Get("Phi_neg");
TH1F *sum = new TH1F("sum","",360,-360,360);
sum->Add(h1,h2);
TH1F *h3 = (TH1F*)h1->Clone("minus");
h3->Add(h2,-1);
TH1F *sigma2z = new TH1F("sigma2z_phi","Phi Asymmetry",360,-360,360);
sigma2z->Divide(h3,sum,1.,1.,"b");
sigma2z->Draw();
sigma2z->Write();
f.Close();
}