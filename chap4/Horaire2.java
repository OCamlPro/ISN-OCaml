// Ces programmes sont sous licence CeCILL-B V1.
class Horaire2 {

  static void annoncerUnVol (String v, String h) {
    System.out.print("Le vol en direction de ");
    System.out.print(v);
    System.out.print(" décolera à ");
    System.out.print(h);
    System.out.println();
    System.out.println("-----------------------------------------------");
    System.out.println();}

  public static void main (String [] args) {
    annoncerUnVol("Tokyo","9h00");
    annoncerUnVol("Sydney","9h30");
    annoncerUnVol("Toulouse","9h45");}}
