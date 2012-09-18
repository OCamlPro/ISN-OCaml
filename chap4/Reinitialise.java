// Ces programmes sont sous licence CeCILL-B V1.
class Reinitialise {

  static int x;

  static void reinitialise () { 
    x = 0;}

  public static void main (String [] args) {
    x = 3;
    x = 5;
    reinitialise();
    x = 7;
    reinitialise();
    x = 4;}}
