(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  let nbJours = 7 in
  let somme = ref 0. in (* "ref" indique une variable modifiable *)
  for loop = 1 to nbJours do
   let temperature = float_of_string (input_line stdin) in
   somme := !somme +. temperature
  done;
  print_float (!somme /. float nbJours);
  print_newline ()

