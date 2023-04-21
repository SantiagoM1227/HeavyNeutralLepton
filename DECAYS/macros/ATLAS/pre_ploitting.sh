for m in {30..50..5}
do
  for V in {1..5}
  do
    mass=$(( (45/20)*(m-30) +5 ))
    
    name_tag="Ve$V""_mass_$m"
    
    new_name_tag="Ve$V""_mass_$mass"
    
    tag_bkg="$name_tag""_Bkg"
    tag_minus="$name_tag""_Bkg_Muminus"
    tag_plus="$name_tag""_Bkg_Muplus"
    tag_N="N_invmass_Ve$V""_mass_$m"
    tag_eta="MuW_eta_Ve$V""_mass_$m"
    tag_phi="MuW_phi_Ve$V""_mass_$m"
    
    new_tag_bkg="$new_name_tag""_Bkg"
    new_tag_minus="$new_name_tag""_Bkg_Muminus"
    new_tag_plus="$new_name_tag""_Bkg_Muplus"
    new_tag_N="N_invmass_Ve$V""_mass_$mass"
    new_tag_eta="MuW_eta_Ve$V""_mass_$mass"
    new_tag_phi="MuW_phi_Ve$V""_mass_$mass"
    
    
    sed -i "s/$tag_bkg/$new_tag_bkg/g" $name_tag".C"
    sed -i "s/$tag_plus/$new_tag_plus/g" $name_tag".C"
    sed -i "s/$tag_minus/$new_tag_minus/g" $name_tag".C"
    sed -i "s/$tag_N/$new_tag_N/g" $name_tag".C"
    sed -i "s/$tag_eta/$new_tag_eta/g" $name_tag".C"
    sed -i "s/$tag_phi/$new_tag_phi/g" $name_tag".C"
    
  done
done

