(* Ces programmes sont sous licence CeCILL-B V1. *)

let tirerUnTrait () =
   print_newline ();
   print_string "-----------------------------------------------";
   print_newline ();
   print_newline ()

let annoncerUnVol vol horaire =
  print_string "Le vol en direction de ";
  print_string vol;
  print_string " décolera à ";
  print_string horaire;
  tirerUnTrait()

let _ =
  annoncerUnVol "Tokyo" "9h00";
  annoncerUnVol "Sydney" "9h30";
  annoncerUnVol "Toulouse" "9h45"
