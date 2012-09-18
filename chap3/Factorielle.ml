(* Ces programmes sont sous licence CeCILL-B V1. *)
let _ =
  let n = int_of_string (input_line stdin) in
  let f = ref 1 in
  for i = 1 to n do
   f := !f * i
  done;
  print_int !f; print_newline ()

