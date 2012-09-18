(* Ces programmes sont sous licence CeCILL-B V1. *)
let a = 4
let b = 7

let _ =
  print_string "À vous de jouer (deux entiers sur deux lignes, un par ligne)";
  print_newline ();
  let x = int_of_string (input_line stdin) in
  let y = int_of_string (input_line stdin) in
  if x = a && y = b then
    print_string "Coulé"
  else
    if x = a || y == b then
      print_string "En vue"
    else
      print_string "À l'eau";
  print_newline ()

