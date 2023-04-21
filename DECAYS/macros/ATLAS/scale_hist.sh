for V in {1..5}
do
  for m in {40..50..5}
  do
    name_tag="Ve$V""_mass_$m"
    new_line='h_stack->Draw("hist");'
    muW_eta="MuW_eta_""$name_tag"
    muW_phi="MuW_phi_""$name_tag"
    hist_muW_eta="hist_MuW_eta_""$name_tag"
    hist_muW_phi="hist_MuW_phi_""$name_tag"
    sed -i "s/1e3/1e8/" $name_tag".C"
    sed -i "s/10e3/1e8/" $name_tag".C"
  done
done
