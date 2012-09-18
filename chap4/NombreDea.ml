(* Ces programmes sont sous licence CeCILL-B V1. *)

let nombreDea chaine =
   let nombre = ref 0 in
   for i = 0 to String.length chaine - 1 do
     if chaine.[i] = 'a' then
         nombre := !nombre + 1;
   done;
   !nombre

let _ =
  print_int ( nombreDea "abracadabra");
  print_newline ()

