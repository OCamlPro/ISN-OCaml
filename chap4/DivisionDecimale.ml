(* Ces programmes sont sous licence CeCILL-B V1. *)

let divisionDecimale dividende diviseur =
  if diviseur = 0. then
      infinity
   else
      dividende /. diviseur

let _ =
  print_float (divisionDecimale 2. 3.)

