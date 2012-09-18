// Ces programmes sont sous licence CeCILL-B V1.
class DivisionDecimale {

  static double divisionDecimale (int dividende, int diviseur) {
    double quotient;
    if (diviseur == 0) {
      quotient = Double.POSITIVE_INFINITY;}
    else {
      quotient = ((double) dividende) / ((double) diviseur);}
    return quotient;}

  public static void main (String [] args) {
    System.out.println(divisionDecimale(2,3));}}
