// Ces programmes sont sous licence CeCILL-B V1.
class RepertoireFichier {

  public static void main (String [] args) {
    String [] nom, tel;
    int i;
    String s;
    java.util.Scanner f;
    nom = new String [10];
    tel = new String [10];
    f = Isn.openIn("repertoire.txt");
    for (i = 0; i <= 9; i = i + 1) {
      nom[i] = Isn.readStringFromFile(f);
      tel[i] = Isn.readStringFromFile(f);}
    Isn.closeIn(f);
    s = Isn.readString();
    i = 0;
    while (i < 10 && !Isn.stringEqual(s,nom[i])) {
      i = i + 1;}
    if (i < 10) {
      System.out.println(tel[i]);}
    else {
      System.out.println("Inconnu");}}}
