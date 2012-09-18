// Ces programmes sont sous licence CeCILL-B V1.
class CarreRouge {

  public static void main (String [] args) {
    int x,y;
    Isn.initDrawing("Carré rouge",10,10,400,400);
    for (x = 100; x <= 250; x = x + 1) {
      for (y = 50; y <= 200; y = y + 1) {
        Isn.drawPixel(x,y,255,0,0);}}}}


