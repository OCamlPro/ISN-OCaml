(* Ces programmes sont sous licence CeCILL-B V1. *)

let echange x y =
   let z = !x in
   x := !y;
   y := z

let _ =
  let a = ref 4 in
  let b = ref 7 in
  echange a b;
  print_int !a;
  print_string " ";
  print_int !b;
  print_newline ()
