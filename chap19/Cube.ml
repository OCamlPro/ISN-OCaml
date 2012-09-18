(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  Isn.initDrawing "Cube" 10 10 400 400;

  (* Face avant *)
  Isn.drawLine 100 300 100 100 0 0 0;
  Isn.drawLine 100 100 300 100 0 0 0;
  Isn.drawLine 300 100 300 300 0 0 0;
  Isn.drawLine 300 300 100 300 0 0 0;

    (* Face arrière *)
  Isn.drawLine 150 250 150 150 0 0 0;
  Isn.drawLine 150 150 250 150 0 0 0;
  Isn.drawLine 250 150 250 250 0 0 0;
  Isn.drawLine 250 250 150 250 0 0 0;

    (* Arêtes fuyantes *)
  Isn.drawLine 100 300 150 250 0 0 0;
  Isn.drawLine 100 100 150 150 0 0 0;
  Isn.drawLine 300 100 250 150 0 0 0;
  Isn.drawLine 300 300 250 250 0 0 0;

  Isn.waitKey ()


