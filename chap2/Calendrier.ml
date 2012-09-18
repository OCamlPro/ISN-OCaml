(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  for mois = 1 to 12 do
    let nbj = if mois = 2 then
        28
      else
        30 + (mois + (mois / 8)) mod 2
    in
    for jour = 1 to nbj do
      print_int jour;
      print_string " / ";
      print_int mois;
      print_newline ()
    done
  done
