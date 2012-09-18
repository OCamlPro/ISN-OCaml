(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  Isn.initDrawing "Carré rouge" 10 10 400 400;
  for x = 100 to 250 do
    for y = 50 to 200 do
      Isn.drawPixel x y 255 0 0
    done
  done;
  Isn.waitKey ()


