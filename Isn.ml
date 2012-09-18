
let initDrawing titre x y largeur hauteur =
  Graphics.open_graph "";
  Graphics.set_window_title titre;
  Graphics.resize_window largeur hauteur;
  Graphics.moveto x y

let drawCircle x y r red green blue =
  Graphics.set_color (Graphics.rgb red green blue);
  Graphics.draw_circle x y r

let waitKey () =
  Graphics.wait_next_event [Graphics.Key_pressed]

let drawPixel x y red green blue =
  Graphics.set_color (Graphics.rgb red green blue);
  Graphics.plot x y

let drawLine x0 y0 x1 y1 red green blue =
  Graphics.set_color (Graphics.rgb red green blue);
  Graphics.moveto x0 y0;
  Graphics.lineto x1 y1

let read2IntsFromFile ic =
  let s = input_line ic in
  Printf.fprintf stderr "read2IntsFromFile: %S\n%!" s;
  Scanf.sscanf s "%d %d" (fun l h -> (l,h))

let readIntFromFile ic =
  int_of_string (input_line ic)
