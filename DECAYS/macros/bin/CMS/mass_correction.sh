for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag_1="Ve$V"
    name_tag_2="$name_tag_1""_mass_$m"
    full_name_C="$name_tag_2"".C"
    full_name_h="$name_tag_2"".h"
    sed -i "128s/.*/      N_invMass-> Fill(InvMass_N*pow(45,-1)*$m);/g" $full_name_C
  done
done






