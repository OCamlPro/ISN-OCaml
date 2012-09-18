// Ces programmes sont sous licence CeCILL-B V1.
class BatailleNavale {

  public static void main (String [] args) {
    int a;
    int b;
    int x;
    int y;
    a = 4;
    b = 7;
    System.out.println("À vous de jouer");
    x = Isn.readInt();
    y = Isn.readInt();
    if (x == a && y == b) {
      System.out.println("Coulé");}
    else { 
      if (x == a || y == b) {
        System.out.println("En vue");}
      else { 
        System.out.println("À l'eau");}}}}


