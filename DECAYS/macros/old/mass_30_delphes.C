#define mass_30_delphes_cxx
#include "mass_30_delphes.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <fstream>





void mass_30_delphes::Loop()
{
//   In a ROOT session, you can do:
//      root> .L mass_30_delphes.C
//      root> mass_30_delphes t
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
      if (Muon_PT[1]<3.)continue;
      
     

      // TLorentzVector definitions
      TLorentzVector MuW  = TLorentzVector();
      TLorentzVector MuN  = TLorentzVector();
      TLorentzVector MuW_MuN = TLorentzVector();
      
      MuW.SetPtEtaPhiM(Muon_PT[0], Muon_Eta[0], Muon_Phi[0],0.10566); //mass of muon un mev  
      MuN.SetPtEtaPhiM(Muon_PT[1], Muon_Eta[1], Muon_Phi[1],0.10566);
      
      MuW_MuN = MuW + MuN;
      
      float InvMass_Mu = MuW_MuN.Mag();
      
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
        
        
        TLorentzVector N = jet + MuN;
        
        TLorentzVector W = N + MuW;
        
        float N_PT = N.Pt();
        
        float InvMass_N = N.Mag();
        
        float InvMass_W = W.Mag();
        
        float DeltaM = TMath::Abs(InvMass_W- 80.377);
        
        if (InvMass_N > 80. || N_PT < 10.|| DeltaM<20. ) continue;
        goodjet_index[goodjet_n] = j;
        goodjet_n++;
        
        N_invMass   -> Fill(InvMass_N);
               
      }
      
      //jet cut at least one good jet
      if(goodjet_n < 1) continue;
      
      
      hist_MuN_pt -> Fill(Muon_PT[1]);
      hist_MuW_pt -> Fill(Muon_PT[0]);
      hist_jet_pt -> Fill(Jet_PT[goodjet_index[0]]); 	
      
  
   }
   
    
}
