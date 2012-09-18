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

  let temp = Array.create nbItems 0 in

  let fusion items debut milieu fin =
    let item1 = ref debut in
    let item2 = ref milieu in
    for item = debut to fin-1 do
      if !item2 = fin || (!item1 < milieu && items.(!item1) < items.(!item2))
      then begin
        temp.(item) <- items.(!item1);
        item1 := !item1 + 1
      end else begin
        temp.(item) <- items.(!item2);
        item2 := !item2 + 1
      end;
    done;
    for item = debut to fin-1 do
      items.(item) <- temp.(item)
    done
  in

  let rec triFusion items debut fin =
    (* Tri sur l'intervalle [debut;fin[ *)
    if fin - debut > 1 then
      let milieu = (debut + fin) / 2 in
      triFusion items debut milieu;
      triFusion items milieu fin;
      fusion items debut milieu fin
  in

  triFusion items 0 nbItems;

  (* affichage du tableau après tri *)
  for item = 0 to nbItems - 1 do
    print_int items.(item);
    print_string " ";
  done;
  print_newline ()
