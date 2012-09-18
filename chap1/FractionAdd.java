// Ces programmes sont sous licence CeCILL-B V1.
class FractionAdd {

  public static void main (String [] args) {
    int a,b,c,d;
    a = Isn.readInt();
    b = Isn.readInt();
    c = Isn.readInt();
    d = Isn.readInt();
    if (b == 0 || d == 0)
      System.out.println("Dénominateur nul interdit !");
    else {
      System.out.println(a * d + c * b);
      System.out.println(b * d);}}}


