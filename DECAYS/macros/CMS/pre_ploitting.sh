for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag="Ve$V""_mass_$m"
    new_tag="$name_tag""_Bkg"
    new_tag_minus="$name_tag""_Bkg_Muminus"
    new_tag_plus="$name_tag""_Bkg_Muplus"
    new_tag_N="N_invmass_Ve$V""_mass_$m""_HNL_ZMUMU"
    new_h="./bin/CMS/Ve$V""_mass_$m"".h"
    new_C="./bin/CMS/Ve$V""_mass_$m"".C"
    sed -i "s%./bin/CMS/Ve1_mass_30.h%$new_h%g" $name_tag".C"
    sed -i "s%./bin/CMS/Ve1_mass_30.C%$new_C%g" $name_tag".C"
    sed -i "s/Ve1_mass_30/$name_tag/g" $name_tag".C"
    sed -i "s/Ve1_mass_30_Bkg/$new_tag/g" $name_tag".C"
    sed -i "s/Ve1_mass_30_Bkg_Muplus/$new_tag_plus/g" $name_tag".C"
    sed -i "s/Ve1_mass_30_Bkg_Muminus/$new_tag_minus/g" $name_tag".C"
    sed -i "s/N_invmass_Ve1_mass_30_HNL_ZMUMU/$new_name/g" $name_tag".C"
  done
done

