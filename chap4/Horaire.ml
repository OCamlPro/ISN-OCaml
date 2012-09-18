(* Ces programmes sont sous licence CeCILL-B V1. *)

let tirerUnTrait () =
  print_newline ();
  print_string "-----------------------------------------------";
  print_newline ();
  print_newline ()

let _ =
  print_string "Le vol en direction de ";
  print_string "Tokyo";
  print_string " décolera à ";
  print_string "9h00";
  tirerUnTrait();

  print_string "Le vol en direction de ";
  print_string "Sydney";
  print_string " décolera à ";
  print_string "9h30";
  tirerUnTrait();

  print_string "Le vol en direction de ";
  print_string "Toulouse";
  print_string " décolera à ";
  print_string "9h45";
  tirerUnTrait()
