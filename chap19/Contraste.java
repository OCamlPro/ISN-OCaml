// Ces programmes sont sous licence CeCILL-B V1.
class Contraste {

  public static void main (String [] args) {
    int i,j,l,h,max,a; 
    int [][] r, v, b, t, t1;
    String s;
    java.util.Scanner f1;
    java.io.OutputStreamWriter f2;  

    f1 = Isn.openIn("joconde.ppm");
    s = Isn.readStringFromFile(f1);
    s = Isn.readStringFromFile(f1);
    l = Isn.readIntFromFile(f1);
    h = Isn.readIntFromFile(f1);
    max = Isn.readIntFromFile(f1);
    r = new int [l][h];
    v = new int [l][h];
    b = new int [l][h];
    for (j = 0; j <= h-1; j = j + 1) {
      for (i = 0; i <= l-1; i = i + 1) {
        r[i][j] = Isn.readIntFromFile(f1);
        v[i][j] = Isn.readIntFromFile(f1);
        b[i][j] = Isn.readIntFromFile(f1);}}
    Isn.closeIn(f1);

    t = new int [l][h];
    for (i = 0; i <= l-1; i = i + 1) {
      for (j = 0; j <= h-1; j = j + 1) {
        t[i][j] = (r[i][j] + b[i][j] + v[i][j])/3;}}

    t1 = new int [l][h];
    for (i = 0; i <= l-1; i = i + 1) {
      for (j = 0; j <= h-1; j = j + 1) {
        if (t[i][j] <= max/5) {
          t1[i][j] = 0;} 
        else {
          t1[i][j] = max;}}}

    f2 = Isn.openOut("jocondenoiretblanc.pgm");
    Isn.printlnToFile(f2,"P2");
    Isn.printlnToFile(f2,"#");
    Isn.printToFile(f2,l);
    Isn.printToFile(f2," ");
    Isn.printlnToFile(f2,h);
    Isn.printlnToFile(f2,max);
    for (j = 0; j <= h-1; j = j + 1) {
      for (i = 0; i <= l-1; i = i + 1) {
        Isn.printlnToFile(f2,t1[i][j]);}}
    Isn.closeOut(f2);}}



