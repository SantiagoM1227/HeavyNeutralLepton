//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 17 22:44:55 2023 by ROOT version 6.28/00
// from TTree Delphes/Analysis tree
// found on file: /home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/QCD_LHCb/Events/run_01/tag_1_delphes_events.root
//////////////////////////////////////////////////////////

#ifndef Background_QCD_LHCb_h
#define Background_QCD_LHCb_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

class Background_QCD_LHCb {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   // declare histograms
   TH1F *hist_Muplus_pt = new TH1F("pT for #mu +","pT for #mu +(GeV); (#mu +)pT(GeV); Events",50,20,70);
   TH1F *hist_Muminus_pt = new TH1F("pT for #mu -","pT for #mu -(GeV); (#mu -)pT(GeV); Events",50,20,70);
   TH1F *N_invMass = new TH1F("invMass for N","invMass for N(GeV); invMass N (GeV); Events",70,0,70);
   TH1F *hist_MuW_pt = new TH1F("pT for #mu W","pT for #mu W(GeV); (#mu W)pT(GeV); Events",50,20,70);
   TH1F *hist_MuN_pt = new TH1F("pT for #mu N","pT for #mu N(GeV); (#mu N)pT(GeV); Events",50,20,70);      
   TH1F *hist_jet_pt = new TH1F("pT for Jets","pT for Jets; pT; Events",200,0,200);
   
   TH1F *hist_Muplus_eta = new TH1F("#eta for #mu +","#eta for #mu +; (#mu +)#eta; Events",40,-4,4);
   TH1F *hist_Muminus_eta = new TH1F("#eta for #mu -","#eta for #mu -; (#mu -)#eta; Events",40,-4,4);
   TH1F *hist_MuW_eta = new TH1F("#eta for #mu W","#eta for #mu W; (#mu W)#eta; Events",40,-4,4);
   TH1F *hist_MuN_eta = new TH1F("#eta for #mu N","#eta for #mu N; (#mu N)#eta; Events",40,-4,4);      
   TH1F *hist_jet_eta = new TH1F("#eta for Jets","#eta for Jets; #eta; Events",40,-4,4);
   
   TH1F *hist_Muplus_phi = new TH1F("#phi for #mu +","#phi for #mu +; (#mu +)#phi; Events",40,-4,4);
   TH1F *hist_Muminus_phi = new TH1F("#phi for #mu -","#phi for #mu -; (#mu -)#phi; Events",40,-4,4);
   TH1F *hist_MuW_phi = new TH1F("#phi for #mu W","#phi for #mu W; (#mu W)#phi; Events",40,-4,4);
   TH1F *hist_MuN_phi = new TH1F("#phi for #mu N","#phi for #mu N; (#mu N)#phi; Events",40,-4,4);      
   TH1F *hist_jet_phi = new TH1F("#phi for Jets","#phi for Jets; #phi; Events",40,-4,4);


// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEvent = 1;
   static constexpr Int_t kMaxWeight = 2;
   static constexpr Int_t kMaxParticle = 4067;
   static constexpr Int_t kMaxTrack = 666;
   static constexpr Int_t kMaxTower = 423;
   static constexpr Int_t kMaxEFTrack = 204;
   static constexpr Int_t kMaxNeutralHadron = 174;
   static constexpr Int_t kMaxPhoton = 158;
   static constexpr Int_t kMaxJet = 4;
   static constexpr Int_t kMaxMuon = 3;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Float_t         Event_ReadTime[kMaxEvent];   //[Event_]
   Float_t         Event_ProcTime[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Int_t           Event_MPI[kMaxEvent];   //[Event_]
   Float_t         Event_Weight[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSection[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSectionError[kMaxEvent];   //[Event_]
   Float_t         Event_Scale[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQED[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQCD[kMaxEvent];   //[Event_]
   Int_t           Event_ID1[kMaxEvent];   //[Event_]
   Int_t           Event_ID2[kMaxEvent];   //[Event_]
   Float_t         Event_X1[kMaxEvent];   //[Event_]
   Float_t         Event_X2[kMaxEvent];   //[Event_]
   Float_t         Event_ScalePDF[kMaxEvent];   //[Event_]
   Float_t         Event_PDF1[kMaxEvent];   //[Event_]
   Float_t         Event_PDF2[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           Weight_;
   UInt_t          Weight_fUniqueID[kMaxWeight];   //[Weight_]
   UInt_t          Weight_fBits[kMaxWeight];   //[Weight_]
   Float_t         Weight_Weight[kMaxWeight];   //[Weight_]
   Int_t           Weight_size;
   Int_t           Particle_;
   UInt_t          Particle_fUniqueID[kMaxParticle];   //[Particle_]
   UInt_t          Particle_fBits[kMaxParticle];   //[Particle_]
   Int_t           Particle_PID[kMaxParticle];   //[Particle_]
   Int_t           Particle_Status[kMaxParticle];   //[Particle_]
   Int_t           Particle_IsPU[kMaxParticle];   //[Particle_]
   Int_t           Particle_M1[kMaxParticle];   //[Particle_]
   Int_t           Particle_M2[kMaxParticle];   //[Particle_]
   Int_t           Particle_D1[kMaxParticle];   //[Particle_]
   Int_t           Particle_D2[kMaxParticle];   //[Particle_]
   Int_t           Particle_Charge[kMaxParticle];   //[Particle_]
   Float_t         Particle_Mass[kMaxParticle];   //[Particle_]
   Float_t         Particle_E[kMaxParticle];   //[Particle_]
   Float_t         Particle_Px[kMaxParticle];   //[Particle_]
   Float_t         Particle_Py[kMaxParticle];   //[Particle_]
   Float_t         Particle_Pz[kMaxParticle];   //[Particle_]
   Float_t         Particle_P[kMaxParticle];   //[Particle_]
   Float_t         Particle_PT[kMaxParticle];   //[Particle_]
   Float_t         Particle_Eta[kMaxParticle];   //[Particle_]
   Float_t         Particle_Phi[kMaxParticle];   //[Particle_]
   Float_t         Particle_Rapidity[kMaxParticle];   //[Particle_]
   Float_t         Particle_T[kMaxParticle];   //[Particle_]
   Float_t         Particle_X[kMaxParticle];   //[Particle_]
   Float_t         Particle_Y[kMaxParticle];   //[Particle_]
   Float_t         Particle_Z[kMaxParticle];   //[Particle_]
   Int_t           Particle_size;
   Int_t           Track_;
   UInt_t          Track_fUniqueID[kMaxTrack];   //[Track_]
   UInt_t          Track_fBits[kMaxTrack];   //[Track_]
   Int_t           Track_PID[kMaxTrack];   //[Track_]
   Int_t           Track_Charge[kMaxTrack];   //[Track_]
   Float_t         Track_P[kMaxTrack];   //[Track_]
   Float_t         Track_PT[kMaxTrack];   //[Track_]
   Float_t         Track_Eta[kMaxTrack];   //[Track_]
   Float_t         Track_Phi[kMaxTrack];   //[Track_]
   Float_t         Track_CtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_C[kMaxTrack];   //[Track_]
   Float_t         Track_Mass[kMaxTrack];   //[Track_]
   Float_t         Track_EtaOuter[kMaxTrack];   //[Track_]
   Float_t         Track_PhiOuter[kMaxTrack];   //[Track_]
   Float_t         Track_T[kMaxTrack];   //[Track_]
   Float_t         Track_X[kMaxTrack];   //[Track_]
   Float_t         Track_Y[kMaxTrack];   //[Track_]
   Float_t         Track_Z[kMaxTrack];   //[Track_]
   Float_t         Track_TOuter[kMaxTrack];   //[Track_]
   Float_t         Track_XOuter[kMaxTrack];   //[Track_]
   Float_t         Track_YOuter[kMaxTrack];   //[Track_]
   Float_t         Track_ZOuter[kMaxTrack];   //[Track_]
   Float_t         Track_Xd[kMaxTrack];   //[Track_]
   Float_t         Track_Yd[kMaxTrack];   //[Track_]
   Float_t         Track_Zd[kMaxTrack];   //[Track_]
   Float_t         Track_L[kMaxTrack];   //[Track_]
   Float_t         Track_D0[kMaxTrack];   //[Track_]
   Float_t         Track_DZ[kMaxTrack];   //[Track_]
   Float_t         Track_Nclusters[kMaxTrack];   //[Track_]
   Float_t         Track_dNdx[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorP[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhi[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorC[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0Phi[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0C[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0DZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0CtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiC[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorDZCtgTheta[kMaxTrack];   //[Track_]
   TRef            Track_Particle[kMaxTrack];
   Int_t           Track_VertexIndex[kMaxTrack];   //[Track_]
   Int_t           Track_size;
   Int_t           Tower_;
   UInt_t          Tower_fUniqueID[kMaxTower];   //[Tower_]
   UInt_t          Tower_fBits[kMaxTower];   //[Tower_]
   Float_t         Tower_ET[kMaxTower];   //[Tower_]
   Float_t         Tower_Eta[kMaxTower];   //[Tower_]
   Float_t         Tower_Phi[kMaxTower];   //[Tower_]
   Float_t         Tower_E[kMaxTower];   //[Tower_]
   Float_t         Tower_T[kMaxTower];   //[Tower_]
   Int_t           Tower_NTimeHits[kMaxTower];   //[Tower_]
   Float_t         Tower_Eem[kMaxTower];   //[Tower_]
   Float_t         Tower_Ehad[kMaxTower];   //[Tower_]
   Float_t         Tower_Edges[kMaxTower][4];   //[Tower_]
   TRefArray       Tower_Particles[kMaxTower];
   Int_t           Tower_size;
   Int_t           EFTrack_;
   UInt_t          EFTrack_fUniqueID[kMaxEFTrack];   //[EFTrack_]
   UInt_t          EFTrack_fBits[kMaxEFTrack];   //[EFTrack_]
   Int_t           EFTrack_PID[kMaxEFTrack];   //[EFTrack_]
   Int_t           EFTrack_Charge[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_P[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_PT[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Eta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Phi[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_CtgTheta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_C[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Mass[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_EtaOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_PhiOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_T[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_X[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Y[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Z[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_TOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_XOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_YOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ZOuter[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Xd[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Yd[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Zd[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_L[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_D0[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_DZ[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_Nclusters[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_dNdx[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorP[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorPT[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorPhi[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorCtgTheta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorT[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorD0[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorDZ[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorC[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorD0Phi[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorD0C[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorD0DZ[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorD0CtgTheta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorPhiC[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorPhiDZ[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorPhiCtgTheta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorCDZ[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorCCtgTheta[kMaxEFTrack];   //[EFTrack_]
   Float_t         EFTrack_ErrorDZCtgTheta[kMaxEFTrack];   //[EFTrack_]
   TRef            EFTrack_Particle[kMaxEFTrack];
   Int_t           EFTrack_VertexIndex[kMaxEFTrack];   //[EFTrack_]
   Int_t           EFTrack_size;
   Int_t           NeutralHadron_;
   UInt_t          NeutralHadron_fUniqueID[kMaxNeutralHadron];   //[NeutralHadron_]
   UInt_t          NeutralHadron_fBits[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_ET[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_Eta[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_Phi[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_E[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_T[kMaxNeutralHadron];   //[NeutralHadron_]
   Int_t           NeutralHadron_NTimeHits[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_Eem[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_Ehad[kMaxNeutralHadron];   //[NeutralHadron_]
   Float_t         NeutralHadron_Edges[kMaxNeutralHadron][4];   //[NeutralHadron_]
   TRefArray       NeutralHadron_Particles[kMaxNeutralHadron];
   Int_t           NeutralHadron_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_fBits[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PT[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_E[kMaxPhoton];   //[Photon_]
   Float_t         Photon_T[kMaxPhoton];   //[Photon_]
   Float_t         Photon_EhadOverEem[kMaxPhoton];   //[Photon_]
   TRefArray       Photon_Particles[kMaxPhoton];
   Float_t         Photon_IsolationVar[kMaxPhoton];   //[Photon_]
   Float_t         Photon_IsolationVarRhoCorr[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtCharged[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtNeutral[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtChargedPU[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPt[kMaxPhoton];   //[Photon_]
   Int_t           Photon_Status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[kMaxJet];   //[Jet_]
   UInt_t          Jet_fBits[kMaxJet];   //[Jet_]
   Float_t         Jet_PT[kMaxJet];   //[Jet_]
   Float_t         Jet_Eta[kMaxJet];   //[Jet_]
   Float_t         Jet_Phi[kMaxJet];   //[Jet_]
   Float_t         Jet_T[kMaxJet];   //[Jet_]
   Float_t         Jet_Mass[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaEta[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaPhi[kMaxJet];   //[Jet_]
   UInt_t          Jet_Flavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTag[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauTag[kMaxJet];   //[Jet_]
   Float_t         Jet_TauWeight[kMaxJet];   //[Jet_]
   Int_t           Jet_Charge[kMaxJet];   //[Jet_]
   Float_t         Jet_EhadOverEem[kMaxJet];   //[Jet_]
   Int_t           Jet_NCharged[kMaxJet];   //[Jet_]
   Int_t           Jet_NNeutrals[kMaxJet];   //[Jet_]
   Float_t         Jet_NeutralEnergyFraction[kMaxJet];   //[Jet_]
   Float_t         Jet_ChargedEnergyFraction[kMaxJet];   //[Jet_]
   Float_t         Jet_Beta[kMaxJet];   //[Jet_]
   Float_t         Jet_BetaStar[kMaxJet];   //[Jet_]
   Float_t         Jet_MeanSqDeltaR[kMaxJet];   //[Jet_]
   Float_t         Jet_PTD[kMaxJet];   //[Jet_]
   Float_t         Jet_FracPt[kMaxJet][5];   //[Jet_]
   Float_t         Jet_Tau[kMaxJet][5];   //[Jet_]
   TLorentzVector  Jet_SoftDroppedJet[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet1[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet2[kMaxJet];
   TLorentzVector  Jet_TrimmedP4[5][kMaxJet];
   TLorentzVector  Jet_PrunedP4[5][kMaxJet];
   TLorentzVector  Jet_SoftDroppedP4[5][kMaxJet];
   Int_t           Jet_NSubJetsTrimmed[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsPruned[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsSoftDropped[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge23[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge34[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge45[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge56[kMaxJet];   //[Jet_]
   TRefArray       Jet_Constituents[kMaxJet];
   TRefArray       Jet_Particles[kMaxJet];
   TLorentzVector  Jet_Area[kMaxJet];
   Int_t           Jet_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[kMaxMuon];   //[Muon_]
   UInt_t          Muon_fBits[kMaxMuon];   //[Muon_]
   Float_t         Muon_PT[kMaxMuon];   //[Muon_]
   Float_t         Muon_Eta[kMaxMuon];   //[Muon_]
   Float_t         Muon_Phi[kMaxMuon];   //[Muon_]
   Float_t         Muon_T[kMaxMuon];   //[Muon_]
   Int_t           Muon_Charge[kMaxMuon];   //[Muon_]
   TRef            Muon_Particle[kMaxMuon];
   Float_t         Muon_IsolationVar[kMaxMuon];   //[Muon_]
   Float_t         Muon_IsolationVarRhoCorr[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtCharged[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtNeutral[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtChargedPU[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPt[kMaxMuon];   //[Muon_]
   Float_t         Muon_D0[kMaxMuon];   //[Muon_]
   Float_t         Muon_DZ[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorD0[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorDZ[kMaxMuon];   //[Muon_]
   Int_t           Muon_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_ReadTime;   //!
   TBranch        *b_Event_ProcTime;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_MPI;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_CrossSection;   //!
   TBranch        *b_Event_CrossSectionError;   //!
   TBranch        *b_Event_Scale;   //!
   TBranch        *b_Event_AlphaQED;   //!
   TBranch        *b_Event_AlphaQCD;   //!
   TBranch        *b_Event_ID1;   //!
   TBranch        *b_Event_ID2;   //!
   TBranch        *b_Event_X1;   //!
   TBranch        *b_Event_X2;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_PDF1;   //!
   TBranch        *b_Event_PDF2;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Weight_;   //!
   TBranch        *b_Weight_fUniqueID;   //!
   TBranch        *b_Weight_fBits;   //!
   TBranch        *b_Weight_Weight;   //!
   TBranch        *b_Weight_size;   //!
   TBranch        *b_Particle_;   //!
   TBranch        *b_Particle_fUniqueID;   //!
   TBranch        *b_Particle_fBits;   //!
   TBranch        *b_Particle_PID;   //!
   TBranch        *b_Particle_Status;   //!
   TBranch        *b_Particle_IsPU;   //!
   TBranch        *b_Particle_M1;   //!
   TBranch        *b_Particle_M2;   //!
   TBranch        *b_Particle_D1;   //!
   TBranch        *b_Particle_D2;   //!
   TBranch        *b_Particle_Charge;   //!
   TBranch        *b_Particle_Mass;   //!
   TBranch        *b_Particle_E;   //!
   TBranch        *b_Particle_Px;   //!
   TBranch        *b_Particle_Py;   //!
   TBranch        *b_Particle_Pz;   //!
   TBranch        *b_Particle_P;   //!
   TBranch        *b_Particle_PT;   //!
   TBranch        *b_Particle_Eta;   //!
   TBranch        *b_Particle_Phi;   //!
   TBranch        *b_Particle_Rapidity;   //!
   TBranch        *b_Particle_T;   //!
   TBranch        *b_Particle_X;   //!
   TBranch        *b_Particle_Y;   //!
   TBranch        *b_Particle_Z;   //!
   TBranch        *b_Particle_size;   //!
   TBranch        *b_Track_;   //!
   TBranch        *b_Track_fUniqueID;   //!
   TBranch        *b_Track_fBits;   //!
   TBranch        *b_Track_PID;   //!
   TBranch        *b_Track_Charge;   //!
   TBranch        *b_Track_P;   //!
   TBranch        *b_Track_PT;   //!
   TBranch        *b_Track_Eta;   //!
   TBranch        *b_Track_Phi;   //!
   TBranch        *b_Track_CtgTheta;   //!
   TBranch        *b_Track_C;   //!
   TBranch        *b_Track_Mass;   //!
   TBranch        *b_Track_EtaOuter;   //!
   TBranch        *b_Track_PhiOuter;   //!
   TBranch        *b_Track_T;   //!
   TBranch        *b_Track_X;   //!
   TBranch        *b_Track_Y;   //!
   TBranch        *b_Track_Z;   //!
   TBranch        *b_Track_TOuter;   //!
   TBranch        *b_Track_XOuter;   //!
   TBranch        *b_Track_YOuter;   //!
   TBranch        *b_Track_ZOuter;   //!
   TBranch        *b_Track_Xd;   //!
   TBranch        *b_Track_Yd;   //!
   TBranch        *b_Track_Zd;   //!
   TBranch        *b_Track_L;   //!
   TBranch        *b_Track_D0;   //!
   TBranch        *b_Track_DZ;   //!
   TBranch        *b_Track_Nclusters;   //!
   TBranch        *b_Track_dNdx;   //!
   TBranch        *b_Track_ErrorP;   //!
   TBranch        *b_Track_ErrorPT;   //!
   TBranch        *b_Track_ErrorPhi;   //!
   TBranch        *b_Track_ErrorCtgTheta;   //!
   TBranch        *b_Track_ErrorT;   //!
   TBranch        *b_Track_ErrorD0;   //!
   TBranch        *b_Track_ErrorDZ;   //!
   TBranch        *b_Track_ErrorC;   //!
   TBranch        *b_Track_ErrorD0Phi;   //!
   TBranch        *b_Track_ErrorD0C;   //!
   TBranch        *b_Track_ErrorD0DZ;   //!
   TBranch        *b_Track_ErrorD0CtgTheta;   //!
   TBranch        *b_Track_ErrorPhiC;   //!
   TBranch        *b_Track_ErrorPhiDZ;   //!
   TBranch        *b_Track_ErrorPhiCtgTheta;   //!
   TBranch        *b_Track_ErrorCDZ;   //!
   TBranch        *b_Track_ErrorCCtgTheta;   //!
   TBranch        *b_Track_ErrorDZCtgTheta;   //!
   TBranch        *b_Track_Particle;   //!
   TBranch        *b_Track_VertexIndex;   //!
   TBranch        *b_Track_size;   //!
   TBranch        *b_Tower_;   //!
   TBranch        *b_Tower_fUniqueID;   //!
   TBranch        *b_Tower_fBits;   //!
   TBranch        *b_Tower_ET;   //!
   TBranch        *b_Tower_Eta;   //!
   TBranch        *b_Tower_Phi;   //!
   TBranch        *b_Tower_E;   //!
   TBranch        *b_Tower_T;   //!
   TBranch        *b_Tower_NTimeHits;   //!
   TBranch        *b_Tower_Eem;   //!
   TBranch        *b_Tower_Ehad;   //!
   TBranch        *b_Tower_Edges;   //!
   TBranch        *b_Tower_Particles;   //!
   TBranch        *b_Tower_size;   //!
   TBranch        *b_EFTrack_;   //!
   TBranch        *b_EFTrack_fUniqueID;   //!
   TBranch        *b_EFTrack_fBits;   //!
   TBranch        *b_EFTrack_PID;   //!
   TBranch        *b_EFTrack_Charge;   //!
   TBranch        *b_EFTrack_P;   //!
   TBranch        *b_EFTrack_PT;   //!
   TBranch        *b_EFTrack_Eta;   //!
   TBranch        *b_EFTrack_Phi;   //!
   TBranch        *b_EFTrack_CtgTheta;   //!
   TBranch        *b_EFTrack_C;   //!
   TBranch        *b_EFTrack_Mass;   //!
   TBranch        *b_EFTrack_EtaOuter;   //!
   TBranch        *b_EFTrack_PhiOuter;   //!
   TBranch        *b_EFTrack_T;   //!
   TBranch        *b_EFTrack_X;   //!
   TBranch        *b_EFTrack_Y;   //!
   TBranch        *b_EFTrack_Z;   //!
   TBranch        *b_EFTrack_TOuter;   //!
   TBranch        *b_EFTrack_XOuter;   //!
   TBranch        *b_EFTrack_YOuter;   //!
   TBranch        *b_EFTrack_ZOuter;   //!
   TBranch        *b_EFTrack_Xd;   //!
   TBranch        *b_EFTrack_Yd;   //!
   TBranch        *b_EFTrack_Zd;   //!
   TBranch        *b_EFTrack_L;   //!
   TBranch        *b_EFTrack_D0;   //!
   TBranch        *b_EFTrack_DZ;   //!
   TBranch        *b_EFTrack_Nclusters;   //!
   TBranch        *b_EFTrack_dNdx;   //!
   TBranch        *b_EFTrack_ErrorP;   //!
   TBranch        *b_EFTrack_ErrorPT;   //!
   TBranch        *b_EFTrack_ErrorPhi;   //!
   TBranch        *b_EFTrack_ErrorCtgTheta;   //!
   TBranch        *b_EFTrack_ErrorT;   //!
   TBranch        *b_EFTrack_ErrorD0;   //!
   TBranch        *b_EFTrack_ErrorDZ;   //!
   TBranch        *b_EFTrack_ErrorC;   //!
   TBranch        *b_EFTrack_ErrorD0Phi;   //!
   TBranch        *b_EFTrack_ErrorD0C;   //!
   TBranch        *b_EFTrack_ErrorD0DZ;   //!
   TBranch        *b_EFTrack_ErrorD0CtgTheta;   //!
   TBranch        *b_EFTrack_ErrorPhiC;   //!
   TBranch        *b_EFTrack_ErrorPhiDZ;   //!
   TBranch        *b_EFTrack_ErrorPhiCtgTheta;   //!
   TBranch        *b_EFTrack_ErrorCDZ;   //!
   TBranch        *b_EFTrack_ErrorCCtgTheta;   //!
   TBranch        *b_EFTrack_ErrorDZCtgTheta;   //!
   TBranch        *b_EFTrack_Particle;   //!
   TBranch        *b_EFTrack_VertexIndex;   //!
   TBranch        *b_EFTrack_size;   //!
   TBranch        *b_NeutralHadron_;   //!
   TBranch        *b_NeutralHadron_fUniqueID;   //!
   TBranch        *b_NeutralHadron_fBits;   //!
   TBranch        *b_NeutralHadron_ET;   //!
   TBranch        *b_NeutralHadron_Eta;   //!
   TBranch        *b_NeutralHadron_Phi;   //!
   TBranch        *b_NeutralHadron_E;   //!
   TBranch        *b_NeutralHadron_T;   //!
   TBranch        *b_NeutralHadron_NTimeHits;   //!
   TBranch        *b_NeutralHadron_Eem;   //!
   TBranch        *b_NeutralHadron_Ehad;   //!
   TBranch        *b_NeutralHadron_Edges;   //!
   TBranch        *b_NeutralHadron_Particles;   //!
   TBranch        *b_NeutralHadron_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_E;   //!
   TBranch        *b_Photon_T;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   TBranch        *b_Photon_Particles;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_Photon_IsolationVarRhoCorr;   //!
   TBranch        *b_Photon_SumPtCharged;   //!
   TBranch        *b_Photon_SumPtNeutral;   //!
   TBranch        *b_Photon_SumPtChargedPU;   //!
   TBranch        *b_Photon_SumPt;   //!
   TBranch        *b_Photon_Status;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_T;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_DeltaEta;   //!
   TBranch        *b_Jet_DeltaPhi;   //!
   TBranch        *b_Jet_Flavor;   //!
   TBranch        *b_Jet_FlavorAlgo;   //!
   TBranch        *b_Jet_FlavorPhys;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_BTagAlgo;   //!
   TBranch        *b_Jet_BTagPhys;   //!
   TBranch        *b_Jet_TauTag;   //!
   TBranch        *b_Jet_TauWeight;   //!
   TBranch        *b_Jet_Charge;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_NCharged;   //!
   TBranch        *b_Jet_NNeutrals;   //!
   TBranch        *b_Jet_NeutralEnergyFraction;   //!
   TBranch        *b_Jet_ChargedEnergyFraction;   //!
   TBranch        *b_Jet_Beta;   //!
   TBranch        *b_Jet_BetaStar;   //!
   TBranch        *b_Jet_MeanSqDeltaR;   //!
   TBranch        *b_Jet_PTD;   //!
   TBranch        *b_Jet_FracPt;   //!
   TBranch        *b_Jet_Tau;   //!
   TBranch        *b_Jet_SoftDroppedJet;   //!
   TBranch        *b_Jet_SoftDroppedSubJet1;   //!
   TBranch        *b_Jet_SoftDroppedSubJet2;   //!
   TBranch        *b_Jet_TrimmedP4;   //!
   TBranch        *b_Jet_PrunedP4;   //!
   TBranch        *b_Jet_SoftDroppedP4;   //!
   TBranch        *b_Jet_NSubJetsTrimmed;   //!
   TBranch        *b_Jet_NSubJetsPruned;   //!
   TBranch        *b_Jet_NSubJetsSoftDropped;   //!
   TBranch        *b_Jet_ExclYmerge23;   //!
   TBranch        *b_Jet_ExclYmerge34;   //!
   TBranch        *b_Jet_ExclYmerge45;   //!
   TBranch        *b_Jet_ExclYmerge56;   //!
   TBranch        *b_Jet_Constituents;   //!
   TBranch        *b_Jet_Particles;   //!
   TBranch        *b_Jet_Area;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_T;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_Particle;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Muon_IsolationVarRhoCorr;   //!
   TBranch        *b_Muon_SumPtCharged;   //!
   TBranch        *b_Muon_SumPtNeutral;   //!
   TBranch        *b_Muon_SumPtChargedPU;   //!
   TBranch        *b_Muon_SumPt;   //!
   TBranch        *b_Muon_D0;   //!
   TBranch        *b_Muon_DZ;   //!
   TBranch        *b_Muon_ErrorD0;   //!
   TBranch        *b_Muon_ErrorDZ;   //!
   TBranch        *b_Muon_size;   //!

   Background_QCD_LHCb(TTree *tree=0);
   virtual ~Background_QCD_LHCb();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Background_QCD_LHCb_cxx
Background_QCD_LHCb::Background_QCD_LHCb(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/QCD_LHCb/Events/run_01/tag_1_delphes_events.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/QCD_LHCb/Events/run_01/tag_1_delphes_events.root");
      }
      f->GetObject("Delphes",tree);

   }
   Init(tree);
}

Background_QCD_LHCb::~Background_QCD_LHCb()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Background_QCD_LHCb::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Background_QCD_LHCb::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Background_QCD_LHCb::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.ReadTime", Event_ReadTime, &b_Event_ReadTime);
   fChain->SetBranchAddress("Event.ProcTime", Event_ProcTime, &b_Event_ProcTime);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.MPI", Event_MPI, &b_Event_MPI);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.CrossSection", Event_CrossSection, &b_Event_CrossSection);
   fChain->SetBranchAddress("Event.CrossSectionError", Event_CrossSectionError, &b_Event_CrossSectionError);
   fChain->SetBranchAddress("Event.Scale", Event_Scale, &b_Event_Scale);
   fChain->SetBranchAddress("Event.AlphaQED", Event_AlphaQED, &b_Event_AlphaQED);
   fChain->SetBranchAddress("Event.AlphaQCD", Event_AlphaQCD, &b_Event_AlphaQCD);
   fChain->SetBranchAddress("Event.ID1", Event_ID1, &b_Event_ID1);
   fChain->SetBranchAddress("Event.ID2", Event_ID2, &b_Event_ID2);
   fChain->SetBranchAddress("Event.X1", Event_X1, &b_Event_X1);
   fChain->SetBranchAddress("Event.X2", Event_X2, &b_Event_X2);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.PDF1", Event_PDF1, &b_Event_PDF1);
   fChain->SetBranchAddress("Event.PDF2", Event_PDF2, &b_Event_PDF2);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Weight", &Weight_, &b_Weight_);
   fChain->SetBranchAddress("Weight.fUniqueID", Weight_fUniqueID, &b_Weight_fUniqueID);
   fChain->SetBranchAddress("Weight.fBits", Weight_fBits, &b_Weight_fBits);
   fChain->SetBranchAddress("Weight.Weight", Weight_Weight, &b_Weight_Weight);
   fChain->SetBranchAddress("Weight_size", &Weight_size, &b_Weight_size);
   fChain->SetBranchAddress("Particle", &Particle_, &b_Particle_);
   fChain->SetBranchAddress("Particle.fUniqueID", Particle_fUniqueID, &b_Particle_fUniqueID);
   fChain->SetBranchAddress("Particle.fBits", Particle_fBits, &b_Particle_fBits);
   fChain->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
   fChain->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
   fChain->SetBranchAddress("Particle.IsPU", Particle_IsPU, &b_Particle_IsPU);
   fChain->SetBranchAddress("Particle.M1", Particle_M1, &b_Particle_M1);
   fChain->SetBranchAddress("Particle.M2", Particle_M2, &b_Particle_M2);
   fChain->SetBranchAddress("Particle.D1", Particle_D1, &b_Particle_D1);
   fChain->SetBranchAddress("Particle.D2", Particle_D2, &b_Particle_D2);
   fChain->SetBranchAddress("Particle.Charge", Particle_Charge, &b_Particle_Charge);
   fChain->SetBranchAddress("Particle.Mass", Particle_Mass, &b_Particle_Mass);
   fChain->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
   fChain->SetBranchAddress("Particle.Px", Particle_Px, &b_Particle_Px);
   fChain->SetBranchAddress("Particle.Py", Particle_Py, &b_Particle_Py);
   fChain->SetBranchAddress("Particle.Pz", Particle_Pz, &b_Particle_Pz);
   fChain->SetBranchAddress("Particle.P", Particle_P, &b_Particle_P);
   fChain->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
   fChain->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
   fChain->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
   fChain->SetBranchAddress("Particle.Rapidity", Particle_Rapidity, &b_Particle_Rapidity);
   fChain->SetBranchAddress("Particle.T", Particle_T, &b_Particle_T);
   fChain->SetBranchAddress("Particle.X", Particle_X, &b_Particle_X);
   fChain->SetBranchAddress("Particle.Y", Particle_Y, &b_Particle_Y);
   fChain->SetBranchAddress("Particle.Z", Particle_Z, &b_Particle_Z);
   fChain->SetBranchAddress("Particle_size", &Particle_size, &b_Particle_size);
   fChain->SetBranchAddress("Track", &Track_, &b_Track_);
   fChain->SetBranchAddress("Track.fUniqueID", Track_fUniqueID, &b_Track_fUniqueID);
   fChain->SetBranchAddress("Track.fBits", Track_fBits, &b_Track_fBits);
   fChain->SetBranchAddress("Track.PID", Track_PID, &b_Track_PID);
   fChain->SetBranchAddress("Track.Charge", Track_Charge, &b_Track_Charge);
   fChain->SetBranchAddress("Track.P", Track_P, &b_Track_P);
   fChain->SetBranchAddress("Track.PT", Track_PT, &b_Track_PT);
   fChain->SetBranchAddress("Track.Eta", Track_Eta, &b_Track_Eta);
   fChain->SetBranchAddress("Track.Phi", Track_Phi, &b_Track_Phi);
   fChain->SetBranchAddress("Track.CtgTheta", Track_CtgTheta, &b_Track_CtgTheta);
   fChain->SetBranchAddress("Track.C", Track_C, &b_Track_C);
   fChain->SetBranchAddress("Track.Mass", Track_Mass, &b_Track_Mass);
   fChain->SetBranchAddress("Track.EtaOuter", Track_EtaOuter, &b_Track_EtaOuter);
   fChain->SetBranchAddress("Track.PhiOuter", Track_PhiOuter, &b_Track_PhiOuter);
   fChain->SetBranchAddress("Track.T", Track_T, &b_Track_T);
   fChain->SetBranchAddress("Track.X", Track_X, &b_Track_X);
   fChain->SetBranchAddress("Track.Y", Track_Y, &b_Track_Y);
   fChain->SetBranchAddress("Track.Z", Track_Z, &b_Track_Z);
   fChain->SetBranchAddress("Track.TOuter", Track_TOuter, &b_Track_TOuter);
   fChain->SetBranchAddress("Track.XOuter", Track_XOuter, &b_Track_XOuter);
   fChain->SetBranchAddress("Track.YOuter", Track_YOuter, &b_Track_YOuter);
   fChain->SetBranchAddress("Track.ZOuter", Track_ZOuter, &b_Track_ZOuter);
   fChain->SetBranchAddress("Track.Xd", Track_Xd, &b_Track_Xd);
   fChain->SetBranchAddress("Track.Yd", Track_Yd, &b_Track_Yd);
   fChain->SetBranchAddress("Track.Zd", Track_Zd, &b_Track_Zd);
   fChain->SetBranchAddress("Track.L", Track_L, &b_Track_L);
   fChain->SetBranchAddress("Track.D0", Track_D0, &b_Track_D0);
   fChain->SetBranchAddress("Track.DZ", Track_DZ, &b_Track_DZ);
   fChain->SetBranchAddress("Track.Nclusters", Track_Nclusters, &b_Track_Nclusters);
   fChain->SetBranchAddress("Track.dNdx", Track_dNdx, &b_Track_dNdx);
   fChain->SetBranchAddress("Track.ErrorP", Track_ErrorP, &b_Track_ErrorP);
   fChain->SetBranchAddress("Track.ErrorPT", Track_ErrorPT, &b_Track_ErrorPT);
   fChain->SetBranchAddress("Track.ErrorPhi", Track_ErrorPhi, &b_Track_ErrorPhi);
   fChain->SetBranchAddress("Track.ErrorCtgTheta", Track_ErrorCtgTheta, &b_Track_ErrorCtgTheta);
   fChain->SetBranchAddress("Track.ErrorT", Track_ErrorT, &b_Track_ErrorT);
   fChain->SetBranchAddress("Track.ErrorD0", Track_ErrorD0, &b_Track_ErrorD0);
   fChain->SetBranchAddress("Track.ErrorDZ", Track_ErrorDZ, &b_Track_ErrorDZ);
   fChain->SetBranchAddress("Track.ErrorC", Track_ErrorC, &b_Track_ErrorC);
   fChain->SetBranchAddress("Track.ErrorD0Phi", Track_ErrorD0Phi, &b_Track_ErrorD0Phi);
   fChain->SetBranchAddress("Track.ErrorD0C", Track_ErrorD0C, &b_Track_ErrorD0C);
   fChain->SetBranchAddress("Track.ErrorD0DZ", Track_ErrorD0DZ, &b_Track_ErrorD0DZ);
   fChain->SetBranchAddress("Track.ErrorD0CtgTheta", Track_ErrorD0CtgTheta, &b_Track_ErrorD0CtgTheta);
   fChain->SetBranchAddress("Track.ErrorPhiC", Track_ErrorPhiC, &b_Track_ErrorPhiC);
   fChain->SetBranchAddress("Track.ErrorPhiDZ", Track_ErrorPhiDZ, &b_Track_ErrorPhiDZ);
   fChain->SetBranchAddress("Track.ErrorPhiCtgTheta", Track_ErrorPhiCtgTheta, &b_Track_ErrorPhiCtgTheta);
   fChain->SetBranchAddress("Track.ErrorCDZ", Track_ErrorCDZ, &b_Track_ErrorCDZ);
   fChain->SetBranchAddress("Track.ErrorCCtgTheta", Track_ErrorCCtgTheta, &b_Track_ErrorCCtgTheta);
   fChain->SetBranchAddress("Track.ErrorDZCtgTheta", Track_ErrorDZCtgTheta, &b_Track_ErrorDZCtgTheta);
   fChain->SetBranchAddress("Track.Particle", Track_Particle, &b_Track_Particle);
   fChain->SetBranchAddress("Track.VertexIndex", Track_VertexIndex, &b_Track_VertexIndex);
   fChain->SetBranchAddress("Track_size", &Track_size, &b_Track_size);
   fChain->SetBranchAddress("Tower", &Tower_, &b_Tower_);
   fChain->SetBranchAddress("Tower.fUniqueID", Tower_fUniqueID, &b_Tower_fUniqueID);
   fChain->SetBranchAddress("Tower.fBits", Tower_fBits, &b_Tower_fBits);
   fChain->SetBranchAddress("Tower.ET", Tower_ET, &b_Tower_ET);
   fChain->SetBranchAddress("Tower.Eta", Tower_Eta, &b_Tower_Eta);
   fChain->SetBranchAddress("Tower.Phi", Tower_Phi, &b_Tower_Phi);
   fChain->SetBranchAddress("Tower.E", Tower_E, &b_Tower_E);
   fChain->SetBranchAddress("Tower.T", Tower_T, &b_Tower_T);
   fChain->SetBranchAddress("Tower.NTimeHits", Tower_NTimeHits, &b_Tower_NTimeHits);
   fChain->SetBranchAddress("Tower.Eem", Tower_Eem, &b_Tower_Eem);
   fChain->SetBranchAddress("Tower.Ehad", Tower_Ehad, &b_Tower_Ehad);
   fChain->SetBranchAddress("Tower.Edges[4]", Tower_Edges, &b_Tower_Edges);
   fChain->SetBranchAddress("Tower.Particles", Tower_Particles, &b_Tower_Particles);
   fChain->SetBranchAddress("Tower_size", &Tower_size, &b_Tower_size);
   fChain->SetBranchAddress("EFTrack", &EFTrack_, &b_EFTrack_);
   fChain->SetBranchAddress("EFTrack.fUniqueID", EFTrack_fUniqueID, &b_EFTrack_fUniqueID);
   fChain->SetBranchAddress("EFTrack.fBits", EFTrack_fBits, &b_EFTrack_fBits);
   fChain->SetBranchAddress("EFTrack.PID", EFTrack_PID, &b_EFTrack_PID);
   fChain->SetBranchAddress("EFTrack.Charge", EFTrack_Charge, &b_EFTrack_Charge);
   fChain->SetBranchAddress("EFTrack.P", EFTrack_P, &b_EFTrack_P);
   fChain->SetBranchAddress("EFTrack.PT", EFTrack_PT, &b_EFTrack_PT);
   fChain->SetBranchAddress("EFTrack.Eta", EFTrack_Eta, &b_EFTrack_Eta);
   fChain->SetBranchAddress("EFTrack.Phi", EFTrack_Phi, &b_EFTrack_Phi);
   fChain->SetBranchAddress("EFTrack.CtgTheta", EFTrack_CtgTheta, &b_EFTrack_CtgTheta);
   fChain->SetBranchAddress("EFTrack.C", EFTrack_C, &b_EFTrack_C);
   fChain->SetBranchAddress("EFTrack.Mass", EFTrack_Mass, &b_EFTrack_Mass);
   fChain->SetBranchAddress("EFTrack.EtaOuter", EFTrack_EtaOuter, &b_EFTrack_EtaOuter);
   fChain->SetBranchAddress("EFTrack.PhiOuter", EFTrack_PhiOuter, &b_EFTrack_PhiOuter);
   fChain->SetBranchAddress("EFTrack.T", EFTrack_T, &b_EFTrack_T);
   fChain->SetBranchAddress("EFTrack.X", EFTrack_X, &b_EFTrack_X);
   fChain->SetBranchAddress("EFTrack.Y", EFTrack_Y, &b_EFTrack_Y);
   fChain->SetBranchAddress("EFTrack.Z", EFTrack_Z, &b_EFTrack_Z);
   fChain->SetBranchAddress("EFTrack.TOuter", EFTrack_TOuter, &b_EFTrack_TOuter);
   fChain->SetBranchAddress("EFTrack.XOuter", EFTrack_XOuter, &b_EFTrack_XOuter);
   fChain->SetBranchAddress("EFTrack.YOuter", EFTrack_YOuter, &b_EFTrack_YOuter);
   fChain->SetBranchAddress("EFTrack.ZOuter", EFTrack_ZOuter, &b_EFTrack_ZOuter);
   fChain->SetBranchAddress("EFTrack.Xd", EFTrack_Xd, &b_EFTrack_Xd);
   fChain->SetBranchAddress("EFTrack.Yd", EFTrack_Yd, &b_EFTrack_Yd);
   fChain->SetBranchAddress("EFTrack.Zd", EFTrack_Zd, &b_EFTrack_Zd);
   fChain->SetBranchAddress("EFTrack.L", EFTrack_L, &b_EFTrack_L);
   fChain->SetBranchAddress("EFTrack.D0", EFTrack_D0, &b_EFTrack_D0);
   fChain->SetBranchAddress("EFTrack.DZ", EFTrack_DZ, &b_EFTrack_DZ);
   fChain->SetBranchAddress("EFTrack.Nclusters", EFTrack_Nclusters, &b_EFTrack_Nclusters);
   fChain->SetBranchAddress("EFTrack.dNdx", EFTrack_dNdx, &b_EFTrack_dNdx);
   fChain->SetBranchAddress("EFTrack.ErrorP", EFTrack_ErrorP, &b_EFTrack_ErrorP);
   fChain->SetBranchAddress("EFTrack.ErrorPT", EFTrack_ErrorPT, &b_EFTrack_ErrorPT);
   fChain->SetBranchAddress("EFTrack.ErrorPhi", EFTrack_ErrorPhi, &b_EFTrack_ErrorPhi);
   fChain->SetBranchAddress("EFTrack.ErrorCtgTheta", EFTrack_ErrorCtgTheta, &b_EFTrack_ErrorCtgTheta);
   fChain->SetBranchAddress("EFTrack.ErrorT", EFTrack_ErrorT, &b_EFTrack_ErrorT);
   fChain->SetBranchAddress("EFTrack.ErrorD0", EFTrack_ErrorD0, &b_EFTrack_ErrorD0);
   fChain->SetBranchAddress("EFTrack.ErrorDZ", EFTrack_ErrorDZ, &b_EFTrack_ErrorDZ);
   fChain->SetBranchAddress("EFTrack.ErrorC", EFTrack_ErrorC, &b_EFTrack_ErrorC);
   fChain->SetBranchAddress("EFTrack.ErrorD0Phi", EFTrack_ErrorD0Phi, &b_EFTrack_ErrorD0Phi);
   fChain->SetBranchAddress("EFTrack.ErrorD0C", EFTrack_ErrorD0C, &b_EFTrack_ErrorD0C);
   fChain->SetBranchAddress("EFTrack.ErrorD0DZ", EFTrack_ErrorD0DZ, &b_EFTrack_ErrorD0DZ);
   fChain->SetBranchAddress("EFTrack.ErrorD0CtgTheta", EFTrack_ErrorD0CtgTheta, &b_EFTrack_ErrorD0CtgTheta);
   fChain->SetBranchAddress("EFTrack.ErrorPhiC", EFTrack_ErrorPhiC, &b_EFTrack_ErrorPhiC);
   fChain->SetBranchAddress("EFTrack.ErrorPhiDZ", EFTrack_ErrorPhiDZ, &b_EFTrack_ErrorPhiDZ);
   fChain->SetBranchAddress("EFTrack.ErrorPhiCtgTheta", EFTrack_ErrorPhiCtgTheta, &b_EFTrack_ErrorPhiCtgTheta);
   fChain->SetBranchAddress("EFTrack.ErrorCDZ", EFTrack_ErrorCDZ, &b_EFTrack_ErrorCDZ);
   fChain->SetBranchAddress("EFTrack.ErrorCCtgTheta", EFTrack_ErrorCCtgTheta, &b_EFTrack_ErrorCCtgTheta);
   fChain->SetBranchAddress("EFTrack.ErrorDZCtgTheta", EFTrack_ErrorDZCtgTheta, &b_EFTrack_ErrorDZCtgTheta);
   fChain->SetBranchAddress("EFTrack.Particle", EFTrack_Particle, &b_EFTrack_Particle);
   fChain->SetBranchAddress("EFTrack.VertexIndex", EFTrack_VertexIndex, &b_EFTrack_VertexIndex);
   fChain->SetBranchAddress("EFTrack_size", &EFTrack_size, &b_EFTrack_size);
   fChain->SetBranchAddress("NeutralHadron", &NeutralHadron_, &b_NeutralHadron_);
   fChain->SetBranchAddress("NeutralHadron.fUniqueID", NeutralHadron_fUniqueID, &b_NeutralHadron_fUniqueID);
   fChain->SetBranchAddress("NeutralHadron.fBits", NeutralHadron_fBits, &b_NeutralHadron_fBits);
   fChain->SetBranchAddress("NeutralHadron.ET", NeutralHadron_ET, &b_NeutralHadron_ET);
   fChain->SetBranchAddress("NeutralHadron.Eta", NeutralHadron_Eta, &b_NeutralHadron_Eta);
   fChain->SetBranchAddress("NeutralHadron.Phi", NeutralHadron_Phi, &b_NeutralHadron_Phi);
   fChain->SetBranchAddress("NeutralHadron.E", NeutralHadron_E, &b_NeutralHadron_E);
   fChain->SetBranchAddress("NeutralHadron.T", NeutralHadron_T, &b_NeutralHadron_T);
   fChain->SetBranchAddress("NeutralHadron.NTimeHits", NeutralHadron_NTimeHits, &b_NeutralHadron_NTimeHits);
   fChain->SetBranchAddress("NeutralHadron.Eem", NeutralHadron_Eem, &b_NeutralHadron_Eem);
   fChain->SetBranchAddress("NeutralHadron.Ehad", NeutralHadron_Ehad, &b_NeutralHadron_Ehad);
   fChain->SetBranchAddress("NeutralHadron.Edges[4]", NeutralHadron_Edges, &b_NeutralHadron_Edges);
   fChain->SetBranchAddress("NeutralHadron.Particles", NeutralHadron_Particles, &b_NeutralHadron_Particles);
   fChain->SetBranchAddress("NeutralHadron_size", &NeutralHadron_size, &b_NeutralHadron_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.E", Photon_E, &b_Photon_E);
   fChain->SetBranchAddress("Photon.T", Photon_T, &b_Photon_T);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   fChain->SetBranchAddress("Photon.Particles", Photon_Particles, &b_Photon_Particles);
   fChain->SetBranchAddress("Photon.IsolationVar", Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("Photon.IsolationVarRhoCorr", Photon_IsolationVarRhoCorr, &b_Photon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Photon.SumPtCharged", Photon_SumPtCharged, &b_Photon_SumPtCharged);
   fChain->SetBranchAddress("Photon.SumPtNeutral", Photon_SumPtNeutral, &b_Photon_SumPtNeutral);
   fChain->SetBranchAddress("Photon.SumPtChargedPU", Photon_SumPtChargedPU, &b_Photon_SumPtChargedPU);
   fChain->SetBranchAddress("Photon.SumPt", Photon_SumPt, &b_Photon_SumPt);
   fChain->SetBranchAddress("Photon.Status", Photon_Status, &b_Photon_Status);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.T", Jet_T, &b_Jet_T);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.DeltaEta", Jet_DeltaEta, &b_Jet_DeltaEta);
   fChain->SetBranchAddress("Jet.DeltaPhi", Jet_DeltaPhi, &b_Jet_DeltaPhi);
   fChain->SetBranchAddress("Jet.Flavor", Jet_Flavor, &b_Jet_Flavor);
   fChain->SetBranchAddress("Jet.FlavorAlgo", Jet_FlavorAlgo, &b_Jet_FlavorAlgo);
   fChain->SetBranchAddress("Jet.FlavorPhys", Jet_FlavorPhys, &b_Jet_FlavorPhys);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.BTagAlgo", Jet_BTagAlgo, &b_Jet_BTagAlgo);
   fChain->SetBranchAddress("Jet.BTagPhys", Jet_BTagPhys, &b_Jet_BTagPhys);
   fChain->SetBranchAddress("Jet.TauTag", Jet_TauTag, &b_Jet_TauTag);
   fChain->SetBranchAddress("Jet.TauWeight", Jet_TauWeight, &b_Jet_TauWeight);
   fChain->SetBranchAddress("Jet.Charge", Jet_Charge, &b_Jet_Charge);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.NCharged", Jet_NCharged, &b_Jet_NCharged);
   fChain->SetBranchAddress("Jet.NNeutrals", Jet_NNeutrals, &b_Jet_NNeutrals);
   fChain->SetBranchAddress("Jet.NeutralEnergyFraction", Jet_NeutralEnergyFraction, &b_Jet_NeutralEnergyFraction);
   fChain->SetBranchAddress("Jet.ChargedEnergyFraction", Jet_ChargedEnergyFraction, &b_Jet_ChargedEnergyFraction);
   fChain->SetBranchAddress("Jet.Beta", Jet_Beta, &b_Jet_Beta);
   fChain->SetBranchAddress("Jet.BetaStar", Jet_BetaStar, &b_Jet_BetaStar);
   fChain->SetBranchAddress("Jet.MeanSqDeltaR", Jet_MeanSqDeltaR, &b_Jet_MeanSqDeltaR);
   fChain->SetBranchAddress("Jet.PTD", Jet_PTD, &b_Jet_PTD);
   fChain->SetBranchAddress("Jet.FracPt[5]", Jet_FracPt, &b_Jet_FracPt);
   fChain->SetBranchAddress("Jet.Tau[5]", Jet_Tau, &b_Jet_Tau);
   fChain->SetBranchAddress("Jet.SoftDroppedJet", Jet_SoftDroppedJet, &b_Jet_SoftDroppedJet);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet1", Jet_SoftDroppedSubJet1, &b_Jet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet2", Jet_SoftDroppedSubJet2, &b_Jet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("Jet.TrimmedP4[5]", Jet_TrimmedP4, &b_Jet_TrimmedP4);
   fChain->SetBranchAddress("Jet.PrunedP4[5]", Jet_PrunedP4, &b_Jet_PrunedP4);
   fChain->SetBranchAddress("Jet.SoftDroppedP4[5]", Jet_SoftDroppedP4, &b_Jet_SoftDroppedP4);
   fChain->SetBranchAddress("Jet.NSubJetsTrimmed", Jet_NSubJetsTrimmed, &b_Jet_NSubJetsTrimmed);
   fChain->SetBranchAddress("Jet.NSubJetsPruned", Jet_NSubJetsPruned, &b_Jet_NSubJetsPruned);
   fChain->SetBranchAddress("Jet.NSubJetsSoftDropped", Jet_NSubJetsSoftDropped, &b_Jet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("Jet.ExclYmerge23", Jet_ExclYmerge23, &b_Jet_ExclYmerge23);
   fChain->SetBranchAddress("Jet.ExclYmerge34", Jet_ExclYmerge34, &b_Jet_ExclYmerge34);
   fChain->SetBranchAddress("Jet.ExclYmerge45", Jet_ExclYmerge45, &b_Jet_ExclYmerge45);
   fChain->SetBranchAddress("Jet.ExclYmerge56", Jet_ExclYmerge56, &b_Jet_ExclYmerge56);
   fChain->SetBranchAddress("Jet.Constituents", Jet_Constituents, &b_Jet_Constituents);
   fChain->SetBranchAddress("Jet.Particles", Jet_Particles, &b_Jet_Particles);
   fChain->SetBranchAddress("Jet.Area", Jet_Area, &b_Jet_Area);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.T", Muon_T, &b_Muon_T);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon.Particle", Muon_Particle, &b_Muon_Particle);
   fChain->SetBranchAddress("Muon.IsolationVar", Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Muon.IsolationVarRhoCorr", Muon_IsolationVarRhoCorr, &b_Muon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Muon.SumPtCharged", Muon_SumPtCharged, &b_Muon_SumPtCharged);
   fChain->SetBranchAddress("Muon.SumPtNeutral", Muon_SumPtNeutral, &b_Muon_SumPtNeutral);
   fChain->SetBranchAddress("Muon.SumPtChargedPU", Muon_SumPtChargedPU, &b_Muon_SumPtChargedPU);
   fChain->SetBranchAddress("Muon.SumPt", Muon_SumPt, &b_Muon_SumPt);
   fChain->SetBranchAddress("Muon.D0", Muon_D0, &b_Muon_D0);
   fChain->SetBranchAddress("Muon.DZ", Muon_DZ, &b_Muon_DZ);
   fChain->SetBranchAddress("Muon.ErrorD0", Muon_ErrorD0, &b_Muon_ErrorD0);
   fChain->SetBranchAddress("Muon.ErrorDZ", Muon_ErrorDZ, &b_Muon_ErrorDZ);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   Notify();
}

Bool_t Background_QCD_LHCb::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Background_QCD_LHCb::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Background_QCD_LHCb::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Background_QCD_LHCb_cxx
