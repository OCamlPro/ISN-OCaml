(* Ces programmes sont sous licence CeCILL-B V1. *)


let _ =
  let nbItems = 16 in

  (* initialisation du tableau avec des nombres aléatoires *)
  let items = Array.create nbItems 0 in
  for item = 0 to nbItems - 1 do
   items.(item) <- Random.int 1000
  done;

  (* affichage du tableau avant tri *)
  for item = 0 to nbItems - 1 do
    print_int items.(item);
    print_string " ";
  done;
  print_newline ();

  (* tri par fusion *)
  let items1 = Array.create nbItems 0 in
  let taille = ref 1 in
  while !taille < nbItems do
    let debut = ref 0 in
    let x = ref 0 in
    let y = ref !taille in
    for i = 0 to nbItems - 1 do
      if (!x < !debut + !taille
          && !y < !debut + 2* !taille
          && items.(!x) < items.(!y) )
        || !y = !debut + 2* !taille then begin
         items1.(i) <- items.( !x );
          x := !x + 1
      end else begin
         items1.(i) <- items.( !y);
         y := !y + 1;
      end;
      if !x = !debut + !taille && !y = !debut + 2* !taille then begin
        debut := !debut + 2 * !taille;
        x := !debut;
        y := !debut + !taille;
      end
    done;
    for i = 0 to nbItems - 1 do
      items.(i) <- items1.(i)
    done;
   taille := !taille * 2;
  done;

  (* affichage du tableau après tri *)
  for item = 0 to nbItems - 1 do
    print_int items.(item);
    print_string " ";
  done;
  print_newline ()


