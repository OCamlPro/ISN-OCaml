(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
 let type_ = input_line stdin in (* "type" est un mot clé en OCaml *)
 let poids = int_of_string (input_line stdin) in
 if type_ = "verte" then
   if poids <= 20 then
      (print_float 0.57; print_newline ())
   else if poids <= 50 then
      (print_float 0.95; print_newline ())
   else if poids <= 100 then
      (print_float 1.40; print_newline ())
   else if type_ = "prioritaire" then
     if poids <= 20 then
      (print_float 0.60; print_newline ())
        else if poids <= 50 then
      (print_float 1.00; print_newline ())
   else if poids <= 100 then
      (print_float 1.45; print_newline ())
   else if type_ == "ecopli" then
     if poids <= 20 then
       (print_float 0.55; print_newline ())
     else if poids <= 50 then
       (print_float 0.78; print_newline ())
     else if poids <= 100 then
       (print_float 1.00; print_newline ())
