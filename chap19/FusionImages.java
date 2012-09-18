// Ces programmes sont sous licence CeCILL-B V1.
class FusionImages {

  public static void main (String [] args) {
    int i, j, largeur1, hauteur1, largeur2, hauteur2, largeur3, hauteur3, 
    valeur1, valeur2, max1, max2, max3;
    int [][] gris1, gris2, gris3;
    String s;
    java.util.Scanner f1,f2;
    java.io.OutputStreamWriter f3;  

    // Lecture de la première image
    f1 = Isn.openIn("maison1.pgm");
    s = Isn.readStringFromFile(f1);
    s = Isn.readStringFromFile(f1);
    largeur1 = Isn.readIntFromFile(f1);
    hauteur1 = Isn.readIntFromFile(f1);
    max1 = Isn.readIntFromFile(f1);
    gris1 = new int [largeur1][hauteur1]; 
    for (j = 0; j <= hauteur1 - 1; j = j + 1) {
      for (i = 0; i <= largeur1 - 1; i = i + 1) {
        gris1[i][j] = Isn.readIntFromFile(f1);}}
    Isn.closeIn(f1);

    // Lecture de la seconde image
    f2 = Isn.openIn("maison2.pgm");
    s = Isn.readStringFromFile(f2);
    s = Isn.readStringFromFile(f2);
    largeur2 = Isn.readIntFromFile(f2);
    hauteur2 = Isn.readIntFromFile(f2);
    max2 = Isn.readIntFromFile(f2);
    gris2 = new int [largeur2][hauteur2]; 
    for (j = 0; j <= hauteur2 - 1; j = j + 1) {
      for (i = 0; i <= largeur2 - 1; i = i + 1) {
        gris2[i][j] = Isn.readIntFromFile(f2);}}
    Isn.closeIn(f2);

    // Calcul des dimensions maximales des deux images
    if (largeur1 >= largeur2) {
      largeur3 = largeur1;} 
     else {
       largeur3 = largeur2;}
      if (hauteur1 >= hauteur2) {
        hauteur3 = hauteur1;} 
      else {
        hauteur3 = hauteur2;}

    // Calcul du niveau de gris maximal
    if (max1 >= max2) {
      max3 = max1;} 
    else {
      max3 = max2;}
 
    // Calcul de l'image fusionnée
    gris3 = new int [largeur3][hauteur3]; 
    for (j = 0; j <=  hauteur3 - 1; j = j + 1) {
      for (i = 0; i <= largeur3 - 1; i = i + 1) {
        if (i < largeur1 && j < hauteur1) {
          valeur1 = max3 * gris1[i][j] / max1;} 
        else {
          valeur1 = max3;}
        if (i < largeur2 && j < hauteur2) {
          valeur2 = max3 * gris2[i][j] / max2;} 
        else {
          valeur2 = max3;}
        if (valeur1 < valeur2) {
          gris3[i][j] = valeur1;} 
        else {
          gris3[i][j] = valeur2;}}}

    // Écriture de l'image fusionnée
    f3 = Isn.openOut("maisons.pgm");
    Isn.printlnToFile(f3,"P2");
    Isn.printlnToFile(f3,"#");
    Isn.printToFile(f3,largeur3);
    Isn.printToFile(f3," ");
    Isn.printlnToFile(f3,hauteur3);
    Isn.printToFile(f3,max3);
    Isn.printlnToFile(f3);
    for (j = 0; j <= hauteur3 - 1; j = j + 1) {
      for (i = 0; i <= largeur3 - 1; i = i + 1) {
        Isn.printlnToFile(f3,gris3[i][j]);}}
    Isn.closeOut(f3);}}
