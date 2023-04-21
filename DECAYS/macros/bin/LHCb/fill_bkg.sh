#!bash for automatization of macros




sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_QCD_LHCb.h
    

sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_W_MUVM_LHCb.h
    

sed -i "/Int_t           fCurrent;/r define_histo.txt" Background_Z_MUMU_LHCb.h
