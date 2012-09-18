// Ces programmes sont sous licence CeCILL-B V1.
class DessinRecursif {

  // Définition des directions
  static int gauche = 0;
  static int droite = 1;
  static int haut   = 2;
  static int bas    = 3;
  static int aucun  = 4; 

  // Dessin
  static void dessiner (int x, int y, int rayon, int v) {
    Isn.drawCircle(x,y,rayon,0,0,0);
    if (rayon > 1) {
      if (v != droite) {
        dessiner(x + 3 * rayon / 2,y,rayon / 2,gauche);}
      if (v != gauche) {
        dessiner(x - 3 * rayon / 2,y,rayon / 2,droite);}
      if (v != haut) {
        dessiner(x,y - 3 * rayon / 2,rayon / 2,bas);}
      if (v != bas) {
        dessiner(x,y + 3 * rayon / 2,rayon / 2,haut);}}}

  public static void main (String [] args) {
    Isn.initDrawing("DessinRécursif",10,10,400,400);
    dessiner(200,200,64,aucun);}}

