(* Ces programmes sont sous licence CeCILL-B V1. *)
let pi = 4.0 *. atan 1.0

let _ =
  let alpha = float_of_string (input_line stdin) in
  let n = floor(alpha /. (2. *. pi)) in
  let principale = alpha -. 2. *. n *. pi in
  let principale =
    if principale > pi then
      principale -. 2. *. pi
    else
      principale
  in
  print_float principale;
  print_newline ()
