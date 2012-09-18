(* Ces programmes sont sous licence CeCILL-B V1. *)

let tailleRepertoire = 10
let nom = Array.create tailleRepertoire ""
let tel = Array.create tailleRepertoire ""

let _ =
  let ic = open_in "repertoire.txt" in

  for i = 0 to tailleRepertoire - 1 do
    nom.(i) <- input_line ic;
    tel.(i) <- input_line ic;
  done;
  close_in ic;

  let s = input_line stdin in
  let i = ref 0 in
  while !i < 10 && not ( s = nom.(!i) ) do
    i := !i + 1
  done;
  if !i < 10 then
   ( print_string tel.( !i) ; print_newline () )
  else
   ( print_string "Inconnu"; print_newline () )

