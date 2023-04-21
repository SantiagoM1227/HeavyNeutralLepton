#include "../bin/CMS/Ve1_mass_35.h"
#include "../bin/CMS/Ve1_mass_35.C"
#include "../bin/CMS/Background_QCD_CMS.h"
#include "../bin/CMS/Background_QCD_CMS.C"
#include "../bin/CMS/Background_W_MUVM_CMS.h"
#include "../bin/CMS/Background_W_MUVM_CMS.C"
#include "../bin/CMS/Background_Z_MUMU_CMS.h"
#include "../bin/CMS/Background_Z_MUMU_CMS.C"





void Graph_With_Background(TH1F *histogram1, TH1F *histogram2, TH1F *histogram3, TH1F *histogram4, const char* title, const char* Label1, const char* Label2, const char* Label3, const char* Label4, bool log){
//define path 
   
   std::string Folder = "./output/";
   std::string Title  = title;
   std::string Format = ".pdf";
   std::string Path = Folder+title+Format;
   
   const char *path = Path.c_str();
   
   //define canvas and stack
   TCanvas *canvas = new TCanvas(title,"",800,600);
   
   THStack *h_stack = new THStack("h_stack","");
   
   // Set the fill color of each histogram
   histogram1->SetFillColor(kRed);
   histogram1->Scale(pow(10,1));
   histogram2->SetFillColor(kBlue);
   histogram3->SetFillColor(kYellow);
   histogram4->SetFillColor(kGreen);
   
   histogram1->SetMarkerSize(1);
   histogram1->SetMarkerColor(kRed);   
   histogram1->SetLineColor(kBlack);
   histogram2->SetMarkerSize(1);
   histogram2->SetMarkerColor(kBlue);
   histogram2->SetLineColor(kBlack);
   histogram3->SetMarkerSize(1);
   histogram3->SetMarkerColor(kYellow);
   histogram3->SetLineColor(kBlack);
   histogram4->SetMarkerSize(1);
   histogram4->SetMarkerColor(kGreen);
   histogram4->SetLineColor(kBlack);

   // Add the histograms to the stack
   h_stack->Add(histogram1);
   h_stack->Add(histogram2);
   h_stack->Add(histogram3);
   h_stack->Add(histogram4);
   /*
   histogram1->Scale(1.0);
   histogram2->Scale(0.7);
   histogram3->Scale(0.5);
   histogram4->Scale(0.2);
   */
   h_stack->SetTitle(title);
   
   
   h_stack->Draw("hist");
   
   
   
   
   
   

      
   
   
   //define legends
   TLegend *leg = new TLegend(0.7, 0.8, 0.89, 0.6);
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->SetHeader("#sqrt{s} = 13 TeV, 1 fb^{-1}");
   leg->AddEntry(histogram1,Label1,"f");
   leg->AddEntry(histogram2,Label2,"f"); 
   leg->AddEntry(histogram3,Label3,"f"); 
   leg->AddEntry(histogram4,Label4,"f"); 
   leg -> Draw();
   
   if (log){canvas ->SetLogy();}
   
   canvas->Print(path);
   
   // Clean up memory
 
   delete h_stack;
   delete canvas;
   delete leg;

}

void Graph_Histogram(TH1F *histogram1, TH1F *histogram2, const char* title, const char* Label1, const char* Label2, bool log){
   //define path 
   
   std::string Folder = "./output/";
   std::string Title  = title;
   std::string Format = ".pdf";
   std::string Path = Folder+title+Format;
   
   const char *path = Path.c_str();
   
   //define canvas and stack
   TCanvas *canvas = new TCanvas(title,"",800,600);
   
   THStack *h_stack = new THStack("h_stack","");
   
   // Set the fill color of each histogram
   
   histogram1->SetFillColor(kRed);
   histogram2->SetFillColor(kBlue);

   // Add the histograms to the stack
   h_stack->Add(histogram1);
h_stack->SetTitle(title);
   h_stack->Add(histogram2);
   h_stack->Draw("hist");
   
   
   /*
   
   histogram1->SetMarkerSize(1);
   histogram1->SetMarkerStyle(20);
   histogram1->SetMarkerColor(kRed);
   
   histogram2->SetLineStyle(7);
   histogram2->SetLineWidth(3);
   histogram2->SetLineColor(kBlack);
      
   
   histogram1->Draw("ep");
   histogram2->Draw("histsame");
   */
   //define legends
   TLegend *leg = new TLegend(0.7, 0.8, 0.89, 0.6);
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->SetHeader("#sqrt{s} = 13 TeV, 1 fb^{-1}");
   leg->AddEntry(histogram1,Label1,"f");
   leg->AddEntry(histogram2,Label2,"f"); 
   leg -> Draw();
   
   if (log){canvas ->SetLogy();}
   
   canvas->Print(path);
   
   // Clean up memory
 
   delete h_stack;
   delete canvas;
   delete leg;
}

void Graph_Histogram_one(TH1F *histogram1, const char* title, const char* Label1, bool log){
   
   
   std::string Folder = "./output/";
   std::string Title  = title;
   std::string Format = ".pdf";
   std::string Path = Folder+title+Format;
   
   const char *path = Path.c_str();
   
   TCanvas *canvas = new TCanvas(title,"",800,600);
   THStack *h_stack = new THStack("h_stack","");
h_stack->SetTitle(title);
   
   // Set the fill color of each histogram
   
   histogram1->SetFillColor(kYellow);
   histogram1 -> SetTitle(title);
   /*
   histogram1 -> SetMarkerColor(kRed);
   histogram1 -> SetMarkerStyle(20);
   histogram1 -> Draw("*H");
   */
   h_stack->Add(histogram1);
   h_stack->Draw("hist");
   
   TLegend *leg = new TLegend(0.7, 0.8, 0.89, 0.6);
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->SetHeader("#sqrt{s} = 13 TeV, 1 fb^{-1}");
   leg->AddEntry(histogram1,Label1,"f");
   leg -> Draw();
   
   if (log){canvas ->SetLogy();}
   
   canvas -> Update();
   canvas->Print(path);
}
void Ve1_mass_35(void){
   
   class Ve1_mass_35 HNL;
   Background_QCD_CMS QCD;
   Background_W_MUVM_CMS WMUVM;
   Background_Z_MUMU_CMS ZMUMU;
  
   HNL.Loop();
   QCD.Loop();
   WMUVM.Loop();
   ZMUMU.Loop();
   
   
   Graph_With_Background(HNL.hist_Muplus_pt, ZMUMU.hist_Muplus_pt, QCD.hist_Muplus_pt, WMUVM.hist_Muplus_pt, "Ve1_mass_15_Bkg_Muplus", "HeavyNL x 1e10", "Z -> MuMu", "QCD", "W -> Mu v", false);
   
   
   Graph_Histogram(ZMUMU.N_invMass, HNL.N_invMass, "N_invmass_Ve1_mass_15_HNL_ZMUMU","Z->Mu Mu", "HNL",  false);
      
   
   Graph_With_Background(HNL.hist_Muminus_pt, ZMUMU.hist_Muminus_pt, QCD.hist_Muminus_pt, WMUVM.hist_Muminus_pt, "Ve1_mass_15_Bkg_Muminus", "HeavyNL x 1e10", "Z -> MuMu", "QCD", "W -> Mu v", false);
   
   
   Graph_Histogram_one(HNL.N_invMass, "N_invmass_Ve1_mass_15", "N_invmass_Ve1_mass_15", false);
   Graph_Histogram_one(HNL.hist_Muplus_eta, "MuW_eta_Ve1_mass_15", "hist_MuW_eta_Ve1_mass_15 x 1e10", false);
   Graph_Histogram_one(HNL.hist_Muplus_phi, "MuW_phi_Ve1_mass_15", "hist_MuW_phi_Ve1_mass_15 x 1e10", false);

   Graph_With_Background(HNL.hist_MuW_pt, ZMUMU.hist_MuW_pt, QCD.hist_MuW_pt, WMUVM.hist_MuW_pt, "Ve1_mass_15_Bkg", "HeavyNL x 1e10", "Z -> MuMu", "QCD", "W -> Mu v", false);
     
}
