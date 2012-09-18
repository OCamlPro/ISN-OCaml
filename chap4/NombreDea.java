// Ces programmes sont sous licence CeCILL-B V1.
class NombreDea {

  static int nombreDea (String s) {
    int i, n;
    n = 0;
    for (i = 0; i <= Isn.stringLength(s) - 1;i = i + 1) {
      if (Isn.stringEqual(Isn.stringNth(s,i), "a")) {
        n = n + 1;}}
    return n;}

  public static void main (String [] args) {
    System.out.println(nombreDea("abracadabra"));}}
