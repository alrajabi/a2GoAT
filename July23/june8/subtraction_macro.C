void subtraction_macro(double scale_factor) //title of the function
{
TFile *f1 = new TFile("Butanol_Final_June8.root");//Final Butanol file
TH1F *h1 = (TH1F*)f1->Get("gHist"); //open histogram you want to subtract from butanol file.
h1->SetLineColor(kGreen);
h1->Draw();
TFile *f2 = new TFile("Carbon_Final_June8.root"); //Final Carbon file
TH1F *h2 = (TH1F*)f2->Get("gHist");//open histogram you want to subtract from carbon file.
h2->Scale(scale_factor); //scale the histogram from the carbon file.
h2->SetLineColor(kRed);
h2->Draw("][sames");
TH1F *h3 = (TH1F*)h1->Clone("h3"); //open a new histogram and clone the histogram from butanol file on it.
h3->Add(h2,-1); //subtract the scaled carbon histogram from butanol one.
h3->SetLineColor(kBlue);
h3->Draw("][sames");
TFile f("output.root","UPDATE"); //open a file to store the subtracted histogram in it.
h3->Write("gHist_sub"); //write the subtracted histogram into the output file.
f.Close();
}
