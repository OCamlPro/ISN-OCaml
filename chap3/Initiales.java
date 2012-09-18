// Ces programmes sont sous licence CeCILL-B V1.
class Initiales {

  static public void main (String [] Args) {
    String nom;
    int i;
    nom = Isn.readString();
    System.out.print(Isn.stringNth(nom,0));
    for (i = 0; i <= Isn.stringLength(nom) - 2; i = i + 1) {
      if (Isn.stringEqual(" ", Isn.stringNth(nom, i))) {
        System.out.print(Isn.stringNth(nom, i + 1));}}
    System.out.println();}}
