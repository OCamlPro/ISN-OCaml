// Ces programmes sont sous licence CeCILL-B V1.
class MesurePrincipale {

  public static void main (String [] args) {
    double alpha,principale,n;
    alpha = Isn.readDouble();
    n = Math.floor(alpha / (2 * Math.PI));
    principale = alpha - 2 * n * Math.PI;
    if (principale > Math.PI) {
      principale = principale - 2 * Math.PI;}
    System.out.println(principale);}}
