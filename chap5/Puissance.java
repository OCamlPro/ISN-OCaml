// Ces programmes sont sous licence CeCILL-B V1.
class Puissance {

  static int puissance (int n) {
    if (n == 0) {
      return 1;}
    else {
      return (2 * puissance(n-1));}}

  public static void main (String [] args) {
    System.out.println(puissance(10));}}
