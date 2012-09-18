// Ces programmes sont sous licence CeCILL-B V1.
class RacineDeDeux {

  public static void main (String [] args) {
    int n;
    double epsilon, racine, racineprec;
    n = Isn.readInt ();
    epsilon = Math.pow(10,-n);
    racine = 1.0;
    racineprec = 2.0;
    while (Math.abs(racine - racineprec) > epsilon) {
      racineprec = racine;
      racine = 1.0 / (2.0 + racineprec);}
    System.out.println(racine + 1.0);}}
         
