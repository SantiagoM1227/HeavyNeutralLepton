for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag="Ve$V""_mass_$m"
    old='"HeavyNL"'
    NEW='"HeavyNL x 1e3"'
    new_line='h_stack->Draw("hist");'
    muW_eta="MuW_eta_""$name_tag"
    muW_phi="MuW_phi_""$name_tag"
    hist_muW_eta="hist_MuW_eta_""$name_tag"
    hist_muW_phi="hist_MuW_phi_""$name_tag"
    sed -i "/Set the fill color of each histogram/r rescale.txt" $name_tag".C"
    sed -i "/Graph_Histogram_one(HNL.N_invMass/r addhist.txt" $name_tag".C"
    sed -i "s/h_stack->Draw();/$new_line/g" $name_tag".C"
    sed -i "s/MuW_eta_Ve1_mass_30/$muW_eta/g" $name_tag".C"
    sed -i "s/MuW_phi_Ve1_mass_30/$muW_phi/g" $name_tag".C"
    sed -i "s/hist_MuW_eta_Ve1_mass_30/$hist_muW_eta/g" $name_tag".C"
    sed -i "s/hist_MuW_phi_Ve1_mass_30/$hist_muW_phi/g" $name_tag".C"
    sed -i "s/$old/$new/g" $name_tag".C"
  done
done

