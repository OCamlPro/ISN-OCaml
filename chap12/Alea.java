// Ces programmes sont sous licence CeCILL-B V1.
class Alea {

  public static void main (String [] args) {
    int i;

    for (i = 1; i <= 1000; i = i + 1) {
      System.out.print(Isn.asciiString (
				(int) Math.floor(Math.random() * 26 + 97)));}
    System.out.println();}}

