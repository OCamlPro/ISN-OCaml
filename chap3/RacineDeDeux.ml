(* Ces programmes sont sous licence CeCILL-B V1. *)
let _ =
  let n = float_of_string (input_line stdin) in
  let epsilon = 10. ** (-. n) in
  let racine = ref 1.  in
  let racineprec = ref 2. in
  while abs_float ( !racine -. !racineprec) > epsilon do
   racineprec := !racine;
   racine := 1. /. (2. +. !racineprec);
  done;
  print_float (!racine +. 1.);
  print_newline ()

