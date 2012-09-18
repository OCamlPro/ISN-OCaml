// Ces programmes sont sous licence CeCILL-B V1.
class CalculFormel {

  public static void main (String [] args) {
    int i;
    double x,y,c;
    double [] t,u; 
    t = new double [4];   
    u = new double [4];   
    t[3] = 2;
    t[2] = 8;
    t[1] = 7;
    t[0] = 3;

    //Affichage de la fonction
    for (i = 0; i <= 3; i = i + 1) {
      System.out.print(t[i]);
      System.out.print(" ");
      if (i != 0) {
        System.out.print("x");
        if (i != 1) {
          System.out.print("^");
          System.out.print(i);}}
      if (i != 3) {
        System.out.print(" + ");}}
    System.out.println();


    //Calcul et affichage de sa valeur
    x = 5;
    y = 0;
    c = 1;
    for (i = 0; i <= 3; i = i + 1) {
      y = y + t[i] * c;
      c = c * x;}
    System.out.println(y);

    //Calcul de sa dérivée
    for (i = 0; i <= 2; i = i + 1) {
      u[i] = t[i+1] * (i + 1);}
    u[3] = 0;

    //Affichage de sa dérivée
    for (i = 0; i <= 3; i = i + 1) {
      System.out.print(u[i]);
      System.out.print(" ");
      if (i != 0) {
        System.out.print("x");
        if (i != 1) {
          System.out.print("^");
          System.out.print(i);}}
      if (i != 3) {
        System.out.print(" + ");}}
    System.out.println();}}


