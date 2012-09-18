(* Ces programmes sont sous licence CeCILL-B V1. *)

let nom = ref [||]
let tel = ref [||]
let nb = ref 0

let initialise () =
  nb := 10;
  nom := Array.create !nb "";
  tel := Array.create !nb "";
  (* Remplissage du répertoire *)
  let nom = !nom in (* on alias pour simplifier les notations, i.e. utiliser
                       nom.(index) au lieu de (!nom).(index). *)
  let tel = !tel in
  nom.(0) <- "Alice";
  tel.(0) <- "0606060606";
  nom.(1) <- "Bob";
  tel.(1) <- "0606060607";
  nom.(2) <- "Charles";
  tel.(2) <- "0606060608";
  nom.(3) <- "Djamel";
  tel.(3) <- "0606060609";
  nom.(4) <- "Étienne";
  tel.(4) <- "0606060610";
  nom.(5) <- "Frédérique";
  tel.(5) <- "0606060611";
  nom.(6) <- "Guillaume";
  tel.(6) <- "0606060612";
  nom.(7) <- "Hector";
  tel.(7) <- "0606060613";
  nom.(8) <- "Isabelle";
  tel.(8) <- "0606060614";
  nom.(9) <- "Jérôme";
  tel.(9) <- "0606060615"

let  recherche s =
  let i = ref 0 in
  while !i < !nb && (s <> (!nom).( !i)) do
    i := !i + 1;
  done;
  if !i < !nb then
    (!tel).( !i)
   else
    "Inconnu"

let _ =
  initialise ();
  let n = input_line stdin in
  print_string ( recherche n );
  print_newline ()

