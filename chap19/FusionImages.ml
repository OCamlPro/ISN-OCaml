(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
    (* Lecture de la première image *)
    let f1 = open_in "maison1.pgm" in
    let _ = input_line f1 in
    let _ = input_line f1 in
    let largeur1, hauteur1 = Isn.read2IntsFromFile f1 in
    let max1 = Isn.readIntFromFile f1 in
    let gris1 = Array.create_matrix largeur1 hauteur1 0 in
    for j = 0 to hauteur1 - 1 do
      for i = 0 to largeur1 - 1 do
        gris1.(i).(j) <- Isn.readIntFromFile f1
      done
    done;
    close_in f1;

    (* Lecture de la seconde image *)
    let f2 = open_in "maison2.pgm" in
    let _ = input_line f2 in
    let _ = input_line f2 in
    let (largeur2, hauteur2) = Isn.read2IntsFromFile f2 in
    let max2 = Isn.readIntFromFile f2 in
    let gris2 = Array.create_matrix largeur2 hauteur2 0 in
    for j = 0 to hauteur2 - 1 do
      for i = 0 to largeur2 - 1 do
        gris2.(i).(j) <- Isn.readIntFromFile(f2);
      done
    done;
    close_in f2;

    Printf.fprintf stderr "max1 = %d max2 = %d\n%!" max1 max2;

    (* Calcul des dimensions maximales des deux images *)
    let largeur3 =
      if largeur1 >= largeur2 then largeur1
     else
       largeur2
    in
    let hauteur3 =
      if hauteur1 >= hauteur2 then
        hauteur1
      else
        hauteur2
    in

    (* Calcul du niveau de gris maximal *)
    let max3 = if max1 >= max2 then
        max1
      else
        max2
    in

    (* Calcul de l'image fusionnée *)
    let gris3 = Array.create_matrix largeur3 hauteur3 0 in
    for j = 0 to  hauteur3 - 1 do
      for i = 0 to largeur3 - 1 do
        let valeur1 =
          if i < largeur1 && j < hauteur1 then
            max3 * gris1.(i).(j) / max1
          else
            max3
        in
        let valeur2 =
          if i < largeur2 && j < hauteur2 then
            max3 * gris2.(i).(j) / max2
        else
            max3
        in
        gris3.(i).(j) <-
          (if valeur1 < valeur2 then
              valeur1
           else
              valeur2)
      done
    done;

    (* Écriture de l'image fusionnée *)
    let f3 = open_out "maisons.pgm" in
    output_string f3 "P2\n";
    output_string f3 "#\n";
    Printf.fprintf f3 "%d %d\n" largeur3 hauteur3;
    Printf.fprintf f3 "%d\n" max3;
    for j = 0 to hauteur3 - 1 do
      for i = 0 to largeur3 - 1 do
        Printf.fprintf f3 "%d\n" gris3.(i).(j)
      done
    done;
    close_out f3

