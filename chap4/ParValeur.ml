(* Ces programmes sont sous licence CeCILL-B V1. *)

let i = ref 0

let h j =
  let j = j + 1 in
  print_int !i; print_newline ();
  print_int j; print_newline ();
  let k = j + !i in
  i := 5;
  k

let _ =
  let m = 1 in
      i := 10;
  print_int m; print_newline ();
  let n = h m in
  print_int m; print_newline ();
  print_int n; print_newline ();
  print_int !i; print_newline ()

