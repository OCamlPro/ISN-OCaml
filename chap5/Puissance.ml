(* Ces programmes sont sous licence CeCILL-B V1. *)

let rec puissance n =
  if n = 0 then 1
  else
    (2 * puissance (n-1))

let _ =
  print_int ( puissance 10 );
  print_newline ()

