#define Background_W_MUVM_cxx
#include "Background_W_MUVM.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <fstream>



void Graph_Histogram(TH1F *histogram1, TH1F *histogram2, const char* title, const char* Label1, const char* Label2, bool log){
   
   
   std::string Folder = "./Tarea3_output/";
   std::string Title  = title;
   std::string Format = ".pdf";
   std::string Path = Folder+title+Format;
   
   const char *path = Path.c_str();
   
   THStack *h_stack = new THStack("h_stack","");

   
   histogram1->SetMarkerSize(1);
   histogram1->SetMarkerStyle(20);
   histogram1->SetMarkerColor(kRed);
   
   histogram2->SetLineStyle(7);
   histogram2->SetLineWidth(3);
   histogram2->SetLineColor(kBlack);
      
   TCanvas *canvas = new TCanvas(title,"",800,600);
   
   histogram1->Draw("ep");
   histogram2->Draw("histsame");
   
   TLegend *leg = new TLegend(0.7, 0.8, 0.89, 0.6);
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->SetHeader("#sqrt{s} = 8 TeV, 1 fb^{-1}");
   leg->AddEntry(histogram1,"Data","p");
   leg->AddEntry(histogram2,"MonteCarlo","f");
   
  
   
   leg -> Draw();
   if (log){canvas ->SetLogy();}
   
   canvas->Print(path);
}

void Graph_Histogram_one(TH1F *histogram1, const char* title, const char* Label1, bool log){
   
   
   std::string Folder = "./output/";
   std::string Title  = title;
   std::string Format = ".pdf";
   std::string Path = Folder+title+Format;
   
   const char *path = Path.c_str();
   
   TCanvas *canvas = new TCanvas(title,"",800,600);
   histogram1 -> SetTitle(title);
   histogram1 -> SetMarkerColor(kRed);
   histogram1 -> SetMarkerStyle(20);
   histogram1 -> Draw("*H");
   auto legend = new TLegend(0.7, 0.8, 0.89, 0.6);
   legend -> SetBorderSize(0);
;
   legend -> AddEntry(histogram1, Label1, "lep");  
   
   legend -> Draw();
   if (log){canvas ->SetLogy();}
   
   canvas->Print(path);
}


void Background_W_MUVM::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Background_W_MUVM.C
//      root> Background_W_MUVM t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if (Muon_PT[0]<20.)continue;
      
     

      // TLorentzVector definitions
      TLorentzVector MuW  = TLorentzVector();
      
      MuW.SetPtEtaPhiM(Muon_PT[0], Muon_Eta[0], Muon_Phi[0],0.10566); //mass of muon un mev  
      
      
      TLorentzVector MuW_MuN = MuW;
      
      float InvMass_Mu = MuW_MuN.Mag();
      
      if(InvMass_Mu < 20 or InvMass_Mu > 70) continue;
      
      //N reconstruction
      
      int goodjet_index[kMaxJet];
      int goodjet_n = 0;
      
      
      
      
            
      for (unsigned int j=0; j<kMaxJet; j++){
        int goodtrack_n = 0;
        
        TLorentzVector jet  = TLorentzVector();
        
        jet.SetPtEtaPhiM(Jet_PT[j], Jet_Eta[j], Jet_Phi[j],Jet_Mass[j]);
        
        if (Jet_PT[j]<10.) continue;
        if (TMath::Abs(Jet_Eta[j])>=2.5) continue;
        for (unsigned int k = 0; k<kMaxTrack; k++){
          Double_t deltaEta = TMath::Abs(Jet_Eta[j] - Track_Eta[k]);  
          Double_t deltaPhi = TMath::Abs(Jet_Phi[j] - Track_Phi[k]);  
          Double_t deltaR   = pow(deltaEta*deltaEta+deltaPhi*deltaPhi,0.5);
          if (deltaR > 0.5)continue;
          if (Track_PT[k] < 1.2 ) continue;
          goodtrack_n++;
        }
        if(goodtrack_n < 1) continue;
        
        
        goodjet_index[goodjet_n] = j;
        goodjet_n++;
            
               
      }
     
      
      
      //jet cut at least one good jet
      if(goodjet_n < 1) continue;
      
      
      
      hist_MuW_pt -> Fill(Muon_PT[0]);
      hist_jet_pt -> Fill(Jet_PT[goodjet_index[0]]); 	
      
      /*
      hist_MuW_pt -> Scale(1);
      hist_jet_pt -> Scale(1);
      */
   }
   
}
