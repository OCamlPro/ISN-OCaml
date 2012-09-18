(* Ces programmes sont sous licence CeCILL-B V1. *)

let valeur = ref 0
let periode = ref 0

(* Cette fonction initialise le générateur *)

let origine graine =
  let graineTronquee = graine mod !periode in
  valeur := graineTronquee

  (* Cette fonction crée et renvoie un nombre pseudo-aléatoire compris
     entre 0 et periode-1
  *)
let hasard() =
  valeur := (15 * !valeur + 3) mod !periode;
   !valeur

  (* Cette fonction affiche periode valeurs pseudo-aléatoires *)
let _ =
  periode := 7;
  origine 8;
  for i = 1 to !periode do
    print_int (hasard());
    print_newline ()
  done

