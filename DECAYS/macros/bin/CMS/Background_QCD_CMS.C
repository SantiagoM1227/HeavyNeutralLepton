#define Background_QCD_CMS_cxx
#include "Background_QCD_CMS.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Background_QCD_CMS::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Background_QCD_CMS.C
//      root> Background_QCD_CMS t
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

      
      // Define Weights
      
      float weight = Event_Weight[0]*pow(10,-3);
      
      
      /*
      // Count the number of muons in the event
      int nMuons = 0;
      for (int iMuon = 0; iMuon < kMaxMuon; ++iMuon) {
        if (Muon_PT[iMuon] > 25.0 &&
            TMath::Abs(Muon_Eta[iMuon]) < 2.5 &&
            Muon_IsolationVar[iMuon] < 0.15 &&
            Muon_Charge[iMuon] != 0) {
        ++nMuons;
        }
      }
      if (nMuons != 1)continue;
*/
     

    
      
      
     

      // TLorentzVector definitions
      int goodjet_index[kMaxJet];
      int goodjet_n = 0;
      
      for (unsigned int j=0; j<kMaxJet; j++){
        int goodtrack_n = 0;
        
        TLorentzVector jet  = TLorentzVector();
        
        jet.SetPtEtaPhiM(Jet_PT[j], Jet_Eta[j], Jet_Phi[j],Jet_Mass[j]);
        
        if (Jet_PT[j]<10.) continue;
        if (TMath::Abs(Jet_Eta[j])>=2.5) continue;
        if (Jet_PT[j]<30. or TMath::Abs(Jet_Eta[j])>2.5)continue;
        
        
                
        goodjet_index[goodjet_n] = j;
        goodjet_n++;
        
      }
      
      //jet cut at least one good jet
      if(goodjet_n < 1) continue;
      
      
      
      bool hasFakeMuon = false;
      for (int iMuon = 0; iMuon < kMaxMuon; ++iMuon) {
        if (Muon_PT[iMuon] > 20.0 &&
            TMath::Abs(Muon_Eta[iMuon]) < 2.5 &&
            Muon_IsolationVar[iMuon] >= 1.5) {
        hasFakeMuon = true;
        break;
        }
      }     
      
      if ( hasFakeMuon)continue;

      
      for (int kMuon=0;kMuon<2;kMuon++){
      if (Muon_Charge[kMuon]>0 ){
        hist_Muplus_pt -> Fill(Muon_PT[kMuon],weight);
        hist_Muplus_eta -> Fill(Muon_Eta[kMuon],weight);
        hist_Muplus_phi -> Fill(Muon_Phi[kMuon],weight);
        }
      else  {
        hist_Muminus_pt -> Fill(Muon_PT[kMuon],weight);
        hist_Muminus_eta -> Fill(Muon_Eta[kMuon],weight);
        hist_Muminus_phi -> Fill(Muon_Phi[kMuon],weight);
        }
      }
      
      hist_MuW_pt -> Fill(Muon_PT[0],weight);
      hist_MuW_eta -> Fill(Muon_Eta[0],weight);
      hist_MuW_phi -> Fill(Muon_Phi[0],weight);
      
      hist_jet_pt -> Fill(Jet_PT[goodjet_index[0]],weight);  
   }
}
