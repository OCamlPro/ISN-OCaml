(* Ces programmes sont sous licence CeCILL-B V1. *)

let x = ref 3

let reinitialise () =
   x := 0

let _ =
  x := 5;
  reinitialise();
  x := 7;
  reinitialise();
  x := 4
