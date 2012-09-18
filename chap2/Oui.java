// Ces programmes sont sous licence CeCILL-B V1.
class Oui {

  public static void main (String [] args) {
    String s;
    int longueur, n;
    s = "un oui ou un non ce n'est pourtant pas la même chose";
    longueur = Isn.stringLength(s);
    n = 0;
    while (n <= longueur-3 && !(Isn.stringEqual(Isn.stringNth(s,n),"o")
                                && Isn.stringEqual(Isn.stringNth(s,n+1),"u")
                                && Isn.stringEqual(Isn.stringNth(s,n+2),"i"))) {
      n = n + 1;}
    if (n > longueur - 3) {
      System.out.println("pas de oui");} 
    else {
      System.out.println(n);}}}

