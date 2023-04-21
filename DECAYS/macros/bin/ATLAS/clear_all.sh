for m in {30..50..5}
do
  for V in {1..5}
  do
    name_tag_C="Ve$V""_mass_$m"".C"
    name_tag_h="Ve$V""_mass_$m"".h"
    rm ./bin/$name_tag_h
    rm ./bin/$name_tag_C
  done
done

