(*  Ces programmes sont sous licence CeCILL-B V1. *)
let _ =
  let a = int_of_string (input_line stdin) in
  let b = int_of_string (input_line stdin) in
  let c = int_of_string (input_line stdin) in
  let d = int_of_string (input_line stdin) in
  if b = 0 || d = 0 then begin
    print_string "Dénominateur nul interdit !";
    print_newline ()
  end  else  begin
   print_int (a * c); print_newline ();
   print_int (b * d); print_newline ()
  end
