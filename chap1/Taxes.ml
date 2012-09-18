(* Ces programmes sont sous licence CeCILL-B V1. *)
let _ =
  print_string "Quel est le prix hors taxes ?"; print_newline ();
  let ht = float_of_string (input_line stdin) in
  let ttc = ht +. ht *. 19.6 /. 100. in
  print_string "Le prix toutes taxes comprises est ";
  print_float ttc;
  print_newline ()


