(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
    let x = float_of_string (input_line stdin) in
    let x = ref x in (* version modifiable de x *)
    let n = ref 0 in
    while !x > 1. do
      x := !x /. 2.;
      n := !n + 1;
    done;
    print_int !n; print_newline ()


