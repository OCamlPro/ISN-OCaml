// Ces programmes sont sous licence CeCILL-B V1.
class Elog {

  public static void main (String [] args) {
    int n;
    double x;
    x = Isn.readDouble();
    n = 0;
    while (x > 1) {
      x = x / 2;
      n = n + 1;}
    System.out.println(n);}}

