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

  (* tri par sélection *)
  for premier = 0 to nbItems - 2 do
    let posMin = ref premier in
    for item = premier + 1 to nbItems - 1 do
      if items.(item) < items.( !posMin) then
        posMin := item
    done;
    let z = items.(premier) in
    items.(premier) <- items.( !posMin );
    items.( !posMin ) <- z;
  done;

  (* affichage du tableau après tri *)
  for item = 0 to nbItems - 1 do
    print_int items.(item);
    print_string " ";
  done;
  print_newline ()
