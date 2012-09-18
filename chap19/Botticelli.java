// Ces programmes sont sous licence CeCILL-B V1.
class Botticelli {

  public static void main (String [] args) {
    int i,j;

    Isn.initDrawing("Botticelli",10,10,400,400);

   // Le sol
   for (j = 250; j <= 300; j = j + 1) {
     for (i = 400 - j; i <= j; i = i + 1) {
      if ((10 * (i+j-400) / (j-200) + 10 * (600-2*j) / (j-200))%2 == 0) {
        Isn.drawPixel(i,j,167,103,38);}
      else {
        Isn.drawPixel(i,j,255,255,0);}}}

    // Les murs
    for (i = 100; i <= 150; i = i + 1) {
      for (j = i; j <= 400-i; j = j + 1) {
        Isn.drawPixel(i,j,240,195,0);}}
    for (i = 250; i <= 300; i = i + 1) {
      for (j = 400 - i;  j <= i; j = j + 1) {
        Isn.drawPixel(i,j,240,195,0);}}

    // Le plafond
    for (j = 100; j <= 150; j = j + 1) {
      for (i = j; i <= 400 - j; i = i + 1) {
        Isn.drawPixel(i,j,246,220,18);}}

    // Le mur du fond 
   for (i = 150; i <= 250; i = i + 1) {
     for (j = 150; j <= 250; j = j + 1) {
       if (160 <= i && i <= 210 && 160 <= j && j <= 220) {
         Isn.drawPixel(i,j,119,181,254);}
       else {
         Isn.drawPixel(i,j,255,244,141);}}}}}


