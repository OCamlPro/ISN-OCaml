// Ces programmes sont sous licence CeCILL-B V1.
class Horaires3 {

  static void TirerUnTrait () {
    System.out.println();
    System.out.println("-----------------------------------------------");
    System.out.println();}

  static void annoncerUnVol (String v, String h) {
    System.out.print("Le vol en direction de ");
    System.out.print(v);
    System.out.print(" décolera à ");
    System.out.print(h);
    TirerUnTrait();}

  static public void main (String [] args) {
    annoncerUnVol("Tokyo","9h00");
    annoncerUnVol("Sydney","9h30");
    annoncerUnVol("Toulouse","9h45");}}
