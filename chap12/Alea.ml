(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  for loop = 1 to 1000 do
    print_char ( char_of_int (int_of_char 'a' + Random.int 26) );
  done;
  print_newline ()


