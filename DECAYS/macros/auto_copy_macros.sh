for i in {30..50..5}
do 
  first_part="Ve2_mass$i"".C"
  cp mass30.C $first_part
  sed -i 's/30/$i/g' input.txt.
done
  
