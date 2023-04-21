#include "./bin/Ve1_mass_30.h"
#include "./bin/Ve1_mass_30.C"
#include "./bin/Background_QCD.h"
#include "./bin/Background_QCD.C"
#include "./bin/Background_W_MUVM.h"
#include "./bin/Background_W_MUVM.C"
#include "./bin/Background_Z_MUMU.h"
#include "./bin/Background_Z_MUMU.C"



void Ve1_mass_30(void){
   
   Ve1_mass_30_delphes HNL;
   Background_QCD QCD;
   Background_W_MUVM WMUVM;
   Background_Z_MUMU ZMUMU;
  
   HNL.Loop();
   QCD.Loop();
   WMUVM.Loop();
   ZMUMU.Loop();
   
   
   Graph_With_Background(HNL.hist_MuW_pt, ZMUMU.hist_MuW_pt, WMUVM.hist_MuW_pt, QCD.hist_MuW_pt, "Ve1_mass30_MuWpt_Bkg", "HeavyNL", "Z -> MuMu", "W -> Mu v", "QCD", false);
   
   
}
