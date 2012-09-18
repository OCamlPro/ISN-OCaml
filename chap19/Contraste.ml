(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
    let f1 = open_in "joconde.ppm" in
    let _ = input_line f1 in
    let _ = input_line f1 in
    let (l, h) = Isn.read2IntsFromFile f1 in
    let max = Isn.readIntFromFile f1 in
    let r = Array.create_matrix l h 0 in
    let v = Array.create_matrix l h 0 in
    let b = Array.create_matrix l h 0 in
    for j = 0 to h-1 do
      for i = 0 to l-1 do
        r.(i).(j) <- Isn.readIntFromFile f1;
        v.(i).(j) <- Isn.readIntFromFile f1;
        b.(i).(j) <- Isn.readIntFromFile f1;
      done;
    done;
    close_in f1;

    let t = Array.create_matrix l h 0 in
    for i = 0 to l-1 do
      for j = 0 to h-1 do
        t.(i).(j) <- (r.(i).(j) + b.(i).(j) + v.(i).(j))/3;
      done;
    done;

    let t1 = Array.create_matrix l h 0 in
    for i = 0 to l-1 do
      for j = 0 to h-1 do
        if t.(i).(j) <= max/5 then
          t1.(i).(j) <- 0
        else
          t1.(i).(j) <- max;
      done;
    done;

    let f2 = open_out_bin "jocondenoiretblanc.pgm" in
    output_string f2 "P2\n";
    output_string f2 "#\n";
    Printf.fprintf f2 "%d %d\n" l h;
    Printf.fprintf f2 "%d\n" max;
    for j = 0 to h-1 do
      for i = 0 to l-1 do
        Printf.fprintf f2 "%d\n" t1.(i).(j)
      done;
    done;
    close_out f2



