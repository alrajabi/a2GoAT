void subtraction_macro(double scale_factor)
{

TFile *f1 = new TFile("Butanol_Final_June8.root");
TH1F *h1 = (TH1F*)f1->Get("OA");
//h1->SetLineColor(kGreen);
//h1->Draw();
TFile *f2 = new TFile("Carbon_Final_June8.root");
TH1F *h2 = (TH1F*)f2->Get("OA");
h2->Scale(scale_factor);
//h2->SetLineColor(kRed);
//h2->Draw("][sames");
TH1F *h3 = (TH1F*)h1->Clone("h3");
h3->Add(h2,-1);
//h3->SetLineColor(kBlue);
//h3->Draw("][sames");  
//h3->Write();
/***block starts here
TH1F *h11 = (TH1F*)f1->Get("NChargedOA");
TH1F *h21 = (TH1F*)f2->Get("NChargedOA");
h21->Scale(scale_factor);
TH1F *h31 = (TH1F*)h11->Clone("h31");
h31->Add(h21,-1); 
//h31->Write();
//block ends here

//block starts here
TH1F *h12 = (TH1F*)f1->Get("NCharged");
TH1F *h22 = (TH1F*)f2->Get("NCharged");
h22->Scale(scale_factor);
TH1F *h32 = (TH1F*)h12->Clone("h32");
h32->Add(h22,-1); 
//h32->Write();//block ends here

//block starts here
TH1F *h13 = (TH1F*)f1->Get("NMissing");
TH1F *h23 = (TH1F*)f2->Get("NMissing");
h23->Scale(scale_factor);
TH1F *h33 = (TH1F*)h13->Clone("h33");
h33->Add(h23,-1); 
//h33->Write();//block ends here


//block starts here
TH1F *h14 = (TH1F*)f1->Get("gHist");
TH1F *h24 = (TH1F*)f2->Get("gHist");
h24->Scale(scale_factor);
TH1F *h34 = (TH1F*)h14->Clone("h34");
h34->Add(h24,-1); 
//h34->Write();//block ends here ***/

h3->Draw();
f1->Close();
f2->Close();
//TFile f("output.root","UPDATE");
//h3.Write();
//f.Close();
}
