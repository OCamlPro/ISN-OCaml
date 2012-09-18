// Ces programmes sont sous licence CeCILL-B V1.
class Globale {

  static int a;

  static void f (int x) { 
    System.out.println (2 * x);
    a = 2 * x;}

  public static void main (String [] args) {
    int n;
    a = 3;
    n = 4;
    f(a + n);}}

