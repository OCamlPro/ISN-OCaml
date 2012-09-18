(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
    let n = Array.create 10 false in
    let p = Array.create 10 false in
    let r = Array.create 11 true in
    n.(0) <- true;
    n.(1) <- true;
    n.(2) <- true;
    p.(1) <- true;

    let c = ref false in
    for i = 0 to 9 do
      let a = n.(i) in
      let b = p.(i) in
      r.(i) <- (a && (not b) && (not !c)) || ((not a) && b && (not !c))
      || ((not a) && (not b) && !c) || (a && b && !c);
      c := (a && b) || (b && !c) || (a && !c);
    done;
    r.(10) <- !c;
    print_string " ";
    for i = 0 to 9 do
      if n.(9-i) then
        print_string "1"
      else
        print_string "0"
    done;
    print_newline ();
    print_string " ";
    for i = 0 to 9 do
      if p.(9-i) then
        print_string "1"
      else
        print_string "0"
    done;
    print_newline ();
    for i = 0 to 10 do
      if r.(10-i) then
        print_string "1"
      else
        print_string "0";
    done;
    print_newline ()

