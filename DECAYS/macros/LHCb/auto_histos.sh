for m in {30..50..5}
do
for V in {1..5}
do
name_tag="Ve$V""_mass_$m"".C"
root $name_tag<<EOF
.q
EOF
done
done

