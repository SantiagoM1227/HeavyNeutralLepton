#!bash for automatization of macros



sed -i "/if (Cut(ientry) < 0) continue;/r QCD_loop.txt" Background_QCD_ATLAS.C
sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_QCD_ATLAS.h
    
sed -i "/if (Cut(ientry) < 0) continue;/r Z_MUMU_loop.txt" Background_Z_MUMU_ATLAS.C
sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_W_MUVM_ATLAS.h
    
sed -i "/if (Cut(ientry) < 0) continue;/r W_MUVM_loop.txt" Background_Z_MUMU_ATLAS.C
sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_Z_MUMU_ATLAS.h
