for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag="Ve$V""_mass_$m"
    sed -i "s/ATLAS/LHCb/g" $name_tag".C"
  done
done

