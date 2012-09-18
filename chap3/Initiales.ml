(* Ces programmes sont sous licence CeCILL-B V1. *)
let _ =
  let nom = input_line stdin in
  print_char nom.[0];
  for i = 1 to String.length nom - 2 do
    if nom.[i] = ' ' then
      print_char nom.[i + 1]
  done;
  print_newline ()
