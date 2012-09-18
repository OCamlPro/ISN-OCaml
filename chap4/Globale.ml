(* Ces programmes sont sous licence CeCILL-B V1. *)

let a = ref 3

let f x =
  print_int (2 * x); print_newline ();
  a := 2 * x

let _ =
  a := 3;
  let n = 4 in
  f (!a + n)

