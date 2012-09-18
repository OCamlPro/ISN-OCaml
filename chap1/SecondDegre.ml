(*  Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  let a = float_of_string (input_line stdin) in
  let b = float_of_string (input_line stdin) in
  let c = float_of_string (input_line stdin) in
  let delta = b *. b -. 4. *. a *. c in
  if delta < 0.0 then
   (print_string "Pas de solution"; print_newline ())
  else if delta = 0.0 then begin
    print_string "Une solution :";
    print_float (-. b /. (2. *. a));
    print_newline ();
  end else begin
   print_string "Deux solutions : ";
   print_float ((-. b -. sqrt(delta)) /. (2. *. a));
   print_string " et ";
   print_float ((-. b +. sqrt(delta)) /. (2. *. a));
   print_newline ()
  end
