(* Ces programmes sont sous licence CeCILL-B V1. *)

let rec quotient dividende diviseur =
   if dividende < diviseur then
     0
   else
     1 + quotient (dividende - diviseur) diviseur

let _ =
  print_int ( quotient 17 3 );
  print_newline ()

