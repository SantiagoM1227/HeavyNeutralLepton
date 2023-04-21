for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag="Ve$V""_mass_$m"
    new_h="./bin/LHCb/Ve$V""_mass_$m"".h"
    new_C="./bin/LHCb/Ve$V""_mass_$m"".C"
    sed -i "s%./bin/Ve1_mass_30.h%$new_h%g" $name_tag".C"
    sed -i "s%./bin/Ve1_mass_30.C%$new_C%g" $name_tag".C"
    sed -i "s%./bin/Background_QCD_LHCb.h%./bin/LHCb/Background_QCD_LHCb.h%g" $name_tag".C"
    sed -i "s%./bin/Background_QCD_LHCb.C%./bin/LHCb/Background_QCD_LHCb.C%g" $name_tag".C"
    sed -i "s%./bin/Background_W_MUVM_LHCb.h%./bin/LHCb/Background_W_MUVM_LHCb.h%g" $name_tag".C"
    sed -i "s%./bin/Background_W_MUVM_LHCb.C%./bin/LHCb/Background_W_MUVM_LHCb.C%g" $name_tag".C"
    sed -i "s%./bin/Background_Z_MUMU_LHCb.h%./bin/LHCb/Background_Z_MUMU_LHCb.h%g" $name_tag".C"
    sed -i "s%./bin/Background_Z_MUMU_LHCb.C%./bin/LHCb/Background_Z_MUMU_LHCb.C%g" $name_tag".C"
  done
done

