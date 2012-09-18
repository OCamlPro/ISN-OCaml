(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  let s = ref 2 in
  let p = ref false in
  while not !p do
    for i = 1 to  !s-1 do
      let j = !s - i in
      if i * i = 25 * j * j then begin
        print_int i; print_string " ";
        print_int j; print_newline ();
        p := true
      end;
    done;
    s := !s + 1
  done

