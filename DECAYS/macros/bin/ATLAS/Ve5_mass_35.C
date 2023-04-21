#define Ve5_mass_35_cxx
#include "Ve5_mass_35.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Ve5_mass_35::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Ve5_mass_35.C
//      root> Ve5_mass_35 t
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
      
      float weight = Event_Weight[0]*pow(10,8);
      
      
      // TLorentzVector definitions
      TLorentzVector MuW  = TLorentzVector();
      TLorentzVector MuN  = TLorentzVector();
      TLorentzVector MuW_MuN = TLorentzVector();
      
      MuW.SetPtEtaPhiM(Muon_PT[0], Muon_Eta[0], Muon_Phi[0],0.10566); //mass of muon in GeV  
      MuN.SetPtEtaPhiM(Muon_PT[1], Muon_Eta[1], Muon_Phi[1],0.10566);
      
      MuW_MuN = MuW + MuN;
      
      float InvMass_Mu = MuW_MuN.M();
      
      if(InvMass_Mu < 20 or InvMass_Mu > 70) continue; // Supress Z MuMu decays
      
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
      
       
      
      TLorentzVector good_jet = TLorentzVector(); 
      good_jet.SetPtEtaPhiM(Jet_PT[goodjet_index[0]], Jet_Eta[goodjet_index[0]], Jet_Phi[goodjet_index[0]],Jet_Mass[goodjet_index[0]]);
      
      
      TLorentzVector N_1 = MuN+good_jet;  
      TLorentzVector N_2 = MuW+good_jet;      
      
      float InvMass_N_1 = N_1.M();
      float InvMass_N_2 = N_2.M();
      
      float InvMass_N = InvMass_N_1;
      TLorentzVector N = N_1;  
      
      TLorentzVector W = N + MuW;
      
      if (InvMass_N > InvMass_N_2){
        InvMass_N = InvMass_N_2;
        N = N_2;
        W = N + MuN;
      }
      
      
      
        
      float W_PT = W.Pt();      
        
      float InvMass_W = W.M();
        
      float DeltaM = TMath::Abs(InvMass_W- 80.377);
        
      if (InvMass_N > 80. || N.Pt() < 10.|| DeltaM > 10. ) continue;
      
      N_invMass-> Fill(InvMass_N*pow(45,-1)*15);
      for (int kMuon=0;kMuon<kMaxMuon;kMuon++){
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
