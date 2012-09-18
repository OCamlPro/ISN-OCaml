// Ces programmes sont sous licence CeCILL-B V1.
class Quotient {

  static int quotient (int dividende, int diviseur) {
    if (dividende < diviseur) {
      return 0;}
    else {
	return (1 + quotient(dividende - diviseur, diviseur));}}

  public static void main (String [] args) {
    System.out.println(quotient(17,3));}}
