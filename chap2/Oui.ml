(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  let s = "un oui ou un non ce n'est pourtant pas la même chose" in
  let longueur = String.length s in
  let n = ref 0 in
  while !n <= longueur-3 &&
    ((s.[ !n] <> 'o') || (s.[ !n+1] <> 'u') || (s.[ !n+2] <> 'i')) do
    n := !n + 1;
  done;
  if !n > longueur - 3 then
    (print_string "pas de oui"; print_newline ())
  else
    (print_int !n; print_newline ())
