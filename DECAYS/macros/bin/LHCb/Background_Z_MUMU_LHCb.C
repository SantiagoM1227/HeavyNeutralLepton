#define Background_Z_MUMU_LHCb_cxx
#include "Background_Z_MUMU_LHCb.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Background_Z_MUMU_LHCb::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Background_Z_MUMU_LHCb.C
//      root> Background_Z_MUMU_LHCb t
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
      
      float weight = Event_Weight[0]*pow(10,-1);
      
      
      
      
      if (Muon_PT[0]<25.)continue;
      if (Muon_PT[1]<25.)continue;
      
     

      // TLorentzVector definitions
      TLorentzVector MuW  = TLorentzVector();
      TLorentzVector MuN  = TLorentzVector();
      TLorentzVector MuW_MuN = TLorentzVector();
      
      MuW.SetPtEtaPhiM(Muon_PT[0], Muon_Eta[0], Muon_Phi[0],0.10566); //mass of muon un mev  
      MuN.SetPtEtaPhiM(Muon_PT[1], Muon_Eta[1], Muon_Phi[1],0.10566);
      
      TLorentzVector Z = MuN + MuW;
      
        
        
      float InvMass_Z = Z.M();
        
        
      if (InvMass_Z < 85 || InvMass_Z > 95) continue;
      
      
      if (Z.Pt()<30.0) continue;
      
      int goodjet_index[kMaxJet];
      int goodjet_n = 0;
      
      for (unsigned int j=0; j<kMaxJet; j++){
        int goodtrack_n = 0;
        
        TLorentzVector jet  = TLorentzVector();
        
        jet.SetPtEtaPhiM(Jet_PT[j], Jet_Eta[j], Jet_Phi[j],Jet_Mass[j]);
        
        if (Jet_PT[j]<30.) continue;
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
      for (int kMuon=0;kMuon<kMaxMuon;kMuon++){
      if (Muon_Charge[kMuon]>0 )hist_Muplus_pt -> Fill(Muon_PT[kMuon]);
      else hist_Muminus_pt -> Fill(Muon_PT[kMuon]);
      }
      
      
      TLorentzVector vm = MuN; 
      
      
      
      for (int index_jet=0; index_jet<goodjet_n;index_jet++){
        TLorentzVector good_jet = TLorentzVector(); 
        good_jet.SetPtEtaPhiM(Jet_PT[goodjet_index[index_jet]], Jet_Eta[goodjet_index[index_jet]], Jet_Phi[goodjet_index[index_jet]],Jet_Mass[goodjet_index[index_jet]]);
        vm = vm+good_jet;      
      }
      
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
   }
}
