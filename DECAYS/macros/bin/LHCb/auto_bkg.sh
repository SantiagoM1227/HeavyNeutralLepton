#!bash for automatization of macros
for signal in W_MUVM_LHCb Z_MUMU_LHCb QCD_LHCb
do
  path_to_event="/home/santi/Documents/TOOLS/MG5_aMC_v3_1_1/bin/""$signal""/Events/run_01/"
  name_root="tag_1_delphes_events.root"
  full_path="$path_to_event""$name_root"
  name_class="Background_""$signal"
  root<<EOF
  TFile *f  = new TFile ("$full_path")
  Delphes -> MakeClass("$name_class")
EOF
done


