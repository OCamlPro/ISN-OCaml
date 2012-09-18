(* Ces programmes sont sous licence CeCILL-B V1. *)


let _ =

    (* Allocations et initialisations *)
  let r = Array.create_matrix 400 400 0 in
  let v = Array.create_matrix 400 400 0 in
  let b = Array.create_matrix 400 400 0 in

  for i = 0 to 399 do
    for j = 0 to 399 do
        r.(i).(j) <- 255;
        v.(i).(j) <- 255;
        b.(i).(j) <- 255;
    done;
  done;

    (* Le sol *)
  for j = 250 to 300 do
    for i = 400 - j to j do
      if ((10 * (i+j-400) / (j-200) + 10 * (600-2*j) / (j-200)) mod 2 = 0) then
        begin
          r.(i).(j) <- 167;
          v.(i).(j) <- 103;
          b.(i).(j) <- 38;
        end else begin
          r.(i).(j) <- 255;
          v.(i).(j) <- 255;
          b.(i).(j) <- 0
        end
        done
  done;

    (* Les murs latéraux *)
    for i = 100 to 150 do
      for j = i to 400-i do
        r.(i).(j) <- 240;
        v.(i).(j) <- 195;
        b.(i).(j) <- 0
      done;
    done;
    for i = 250 to 300 do
      for j = 400 - i to i do
        r.(i).(j) <- 240;
        v.(i).(j) <- 195;
        b.(i).(j) <- 0;
      done;
    done;


    (* Le plafond *)
    for j = 100 to 150 do
      for i = j to 400 - j do
        r.(i).(j) <- 246;
        v.(i).(j) <- 220;
        b.(i).(j) <- 18;
      done;
    done;

    (* Le mur du fond *)
    for i = 150 to 250 do
      for j = 150 to 250 do
        if (160 <= i && i <= 210 && 160 <= j && j <= 220) then begin
          r.(i).(j) <- 119;
          v.(i).(j) <- 181;
          b.(i).(j) <- 254;
        end else begin
          r.(i).(j) <- 255;
          v.(i).(j) <- 244;
          b.(i).(j) <- 141;
        end
      done;
    done;

    (* Écriture du fichier ppm *)
    let oc = open_out_bin "botticelli.ppm" in
    output_string oc "P3\n";
    output_string oc "#\n";
    Printf.fprintf oc "%d\n" 400;
    Printf.fprintf oc "%d\n" 400;
    Printf.fprintf oc "%d\n" 255;
    for j = 0 to 399 do
      for i = 0 to 399 do
        Printf.fprintf oc "%d\n" r.(i).(j);
        Printf.fprintf oc "%d\n" v.(i).(j);
        Printf.fprintf oc "%d\n" b.(i).(j);
      done;
    done;
    close_out oc




