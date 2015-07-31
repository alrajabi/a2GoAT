{
TFile f("output_hsum_subt.root","UPDATE");
TH1F *h1 = (TH1F*)f->Get("Hpos");
TH1F *h2 = (TH1F*)f->Get("Hneg");
TH1F *sum = new TH1F("sum","",180,0,180);
sum->Add(h1,h2);
TH1F *h3 = (TH1F*)h1->Clone("minus");
h3->Add(h2,-1);
TH1F *sigma2z = new TH1F("sigma2z_2","",180,0,180);
sigma2z->Divide(h3,sum,1.,1.,"b");
sigma2z->Draw();
sigma2z->Write();
f.Close();
}
