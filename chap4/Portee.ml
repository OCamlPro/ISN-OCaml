(* Ces programmes sont sous licence CeCILL-B V1. *)

(* y et z sont globales et modifiables *)
let z = ref 0
let y = ref 0

let v x =
   let u = x *. x in
   z := int_of_float x;
   u

let _ =
  y := 4;
  let t = 1. /. float_of_int !y in
  print_float ( v t);
  print_newline ()

