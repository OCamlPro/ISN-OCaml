(* Ces programmes sont sous licence CeCILL-B V1. *)

let _ =
  Isn.initDrawing "Botticelli" 10 10 400 400;

   (* Le sol *)
   for j = 250 to  300 do
     for i = 400 - j to j do
      if (10 * (i+j-400) / (j-200) + 10 * (600-2*j) / (j-200)) mod 2 = 0 then
        Isn.drawPixel i j 167 103 38
      else
        Isn.drawPixel i j 255 255 0
     done;
   done;
    (* Les murs *)
   for i = 100 to 150 do
     for j = i to 400-i do
       Isn.drawPixel i j 240 195 0;
     done
   done;
   for i = 250 to 300 do
      for j = 400 - i to i do
        Isn.drawPixel i j 240 195 0
      done
   done;

    (* Le plafond *)
    for j = 100 to 150 do
      for i = j to 400 - j do
        Isn.drawPixel i j 246 220 18
      done
    done;

    (* Le mur du fond *)
   for i = 150 to 250 do
     for j = 150 to 250 do
       if 160 <= i && i <= 210 && 160 <= j && j <= 220 then
         Isn.drawPixel i j 119 181 254
       else
         Isn.drawPixel i j 255 244 141
     done
   done;

   Isn.waitKey()



