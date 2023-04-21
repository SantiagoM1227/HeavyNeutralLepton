#!bash for automatization of macros
i=1

for m in 30 
do
  for V in {1..5}
  do
    path_to_event="/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/HNL_MU_JJ_ATLAS/Events/run_0$i/"
    name_tag_1="Ve$V"
    name_tag_2="$name_tag_1""_mass_$m"
    name_root="$name_tag_2""_delphes_events.root"
    full_path="$path_to_event""$name_root"
    root<<EOF
    TFile *f  = new TFile ("$full_path")
    Delphes -> MakeClass("$name_tag_2")
EOF
    let i=i+1
  done
done

for m in 35 
do
  for V in {1..4}
  do
    path_to_event="/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/HNL_MU_JJ_ATLAS/Events/run_0$i/"
    name_tag_1="Ve$V"
    name_tag_2="$name_tag_1""_mass_$m"
    name_root="$name_tag_2""_delphes_events.root"
    full_path="$path_to_event""$name_root"
    root<<EOF
    TFile *f  = new TFile ("$full_path")
    Delphes -> MakeClass("$name_tag_2")
EOF
    let i=i+1
  done
done

for m in 35 
do
  for V in 5
  do
    path_to_event="/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/HNL_MU_JJ_ATLAS/Events/run_$i/"
    name_tag_1="Ve$V"
    name_tag_2="$name_tag_1""_mass_$m"
    name_root="$name_tag_2""_delphes_events.root"
    full_path="$path_to_event""$name_root"
    root<<EOF
    TFile *f  = new TFile ("$full_path")
    Delphes -> MakeClass("$name_tag_2")
EOF
    let i=i+1
  done
done


for m in {40..50..5}
do
  for V in {1..5}
  do
    path_to_event="/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/HNL_MU_JJ_ATLAS/Events/run_$i/"
    name_tag_1="Ve$V"
    name_tag_2="$name_tag_1""_mass_$m"
    name_root="$name_tag_2""_delphes_events.root"
    full_path="$path_to_event""$name_root"
    root<<EOF
    TFile *f  = new TFile ("$full_path")
    Delphes -> MakeClass("$name_tag_2")
EOF
    let i=i+1
  done
done


