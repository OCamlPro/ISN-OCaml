(* Ces programmes sont sous licence CeCILL-B V1. *)
(*
 Voici un programme qui résout l'équation du second degré
 a x^2 + b x + c = 0
*)


let _ =
  let a = float_of_string (input_line stdin) in
  let b = float_of_string (input_line stdin) in
  let c = float_of_string (input_line stdin) in
(* Test du coefficient dominant *)
  if a = 0.0 then
    (print_string "Pas une équation du second degré"; print_newline ())
  else
(* Calcul du discriminant *)
   let delta = b *. b -. 4. *. a *. c in
(* Affichage des solutions *)
   if delta < 0.0 then
      (print_string "Pas de solution"; print_newline ())
   else if delta = 0.0 then begin
     print_string "Une solution :";
     print_float (-. b /. (2. *. a));
     print_newline ()
   end else begin
      print_string "Deux solutions : ";
      print_float ((-. b -. sqrt(delta)) /. (2. *. a));
      print_string " et ";
      print_float ((-. b +. sqrt(delta)) /. (2. *. a));
      print_newline ();
   end
