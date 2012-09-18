(* Ces programmes sont sous licence CeCILL-B V1. *)

open Isn

(* Définition des directions *)
let gauche = 0
let droite = 1
let haut   = 2
let bas    = 3
let aucun  = 4

(* Dessin *)
let rec dessiner x y rayon v =
  Isn.drawCircle x y rayon 0 0 0;
  if rayon > 1 then begin
    if v <> droite then
      dessiner (x + 3 * rayon / 2) y (rayon / 2) gauche;
      if v <> gauche then
        dessiner (x - 3 * rayon / 2) y (rayon / 2) droite;
      if v <> haut then
        dessiner x (y - 3 * rayon / 2) (rayon / 2) bas;
      if v <> bas then
        dessiner x (y + 3 * rayon / 2) (rayon / 2) haut
  end

let _ =
  Isn.initDrawing "DessinRécursif" 10 10 400 400;
  dessiner 200 200 64 aucun;
  Isn.waitKey ()



