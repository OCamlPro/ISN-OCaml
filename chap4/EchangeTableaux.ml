(* Ces programmes sont sous licence CeCILL-B V1. *)

let echange x y =
   let z = x.(0) in
   x.(0) <- y.(0);
   y.(0) <- z

let _ =
  let a = [| 4 |] in
  let b = [| 7 |] in
  echange a b;
  print_int a.(0); print_string " "; print_int b.(0); print_newline ()

