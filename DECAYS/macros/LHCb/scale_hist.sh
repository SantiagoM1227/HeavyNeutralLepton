for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag="Ve$V""_mass_$m"
    new_line='h_stack->Draw("hist");'
    muW_eta="MuW_eta_""$name_tag"
    muW_phi="MuW_phi_""$name_tag"
    hist_muW_eta="hist_MuW_eta_""$name_tag"
    hist_muW_phi="hist_MuW_phi_""$name_tag"
    sed -i "s/histogram1->Scale(pow(10,pow(2,$V)-1));/histogram1->Scale(pow(10,pow(1.3,$V)-1));/" $name_tag".C"
  done
done

