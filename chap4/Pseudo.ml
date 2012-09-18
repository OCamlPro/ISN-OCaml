(* Ces programmes sont sous licence CeCILL-B V1. *)

let appartient lettre mot =
   (*
   Dans cette fonction "lettre" est censé ne contenir
   qu'un seul caractère.
   On vérifie si ce caractère apparaît dans la chaîne "mot"
   *)
   let resultat = ref false in
   for i = 0 to String.length mot - 1 do
     if mot.[i] = lettre then
       resultat := true
   done;
   !resultat

let _ =
  let autorises = "abcdefghijklmnopqrstuvwxyz" in
  let pseudoOk = ref false in
  (* On redemande un pseudo tant qu'il n'est pas correct *)
  while not !pseudoOk do
    print_string "Entrer votre pseudo :"; print_newline ();
    let pseudo = input_line stdin in
    pseudoOk := pseudo <> "";
   (* On vérifie que chaque caractère du pseudo est autorisé *)
    for i = 0 to String.length pseudo - 1 do
      if not (appartient pseudo.[i] autorises) then
        pseudoOk := false
    done
  done
