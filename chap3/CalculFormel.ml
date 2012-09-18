(* Ces programmes sont sous licence CeCILL-B V1. *)

let degreMax = 3

let _ =
  let t = Array.create (degreMax + 1) 0. in
  let u = Array.create (degreMax + 1) 0. in
  t.(3) <- 2.;
  t.(2) <- 8.;
  t.(1) <- 7.;
  t.(0) <- 3.;

(* Affichage de la fonction *)
  for degre = 1 to degreMax do
    print_float t.(degre);
    if degre <> 0 then begin
      print_string " x";
      if degre <> 1 then begin
         print_string "^";
         print_int degre;
      end;
    end;
    if degre <> degreMax then
      print_string " + ";
  done;
  print_newline ();

(* Calcul et affichage de sa valeur *)
  let x = 5. in
  let y = ref 0. in
  let c = ref 1. in
  for degre = 0 to degreMax do
    y := !y +. t.(degre) *. !c;
    c := !c *. x
  done;
  print_float !y; print_newline ();

(* Calcul de sa dérivée *)
for degre = 0 to degreMax-1 do
   u.(degre) <- t.(degre + 1) *. float (degre + 1)
done;
u.(3) <- 0.;

(* Affichage de sa dérivée *)
for degre = 0 to degreMax do
   print_float u.(degre);
  if degre <> 0 then begin
      print_string " x";
      if degre <> 1 then begin
         print_string "^";
         print_int degre;
      end
  end;
  if degre <> degreMax then
      print_string " + ";
done;
print_newline ()
