(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  let seuil = 10. **(-5.) in
  let inf = ref 2. in
  let sup = ref 4. in
  let milieu = ref ((!inf +. !sup) /. 2.) in
  while !sup -. !inf > seuil && abs_float (sin !milieu) > seuil do
    if (sin !inf) *. (sin !milieu) <= 0. then
      sup := !milieu
    else
      inf := !milieu;
    milieu := (!inf +. !sup) /. 2.;
  done;
  print_float !milieu;
  print_newline ()

