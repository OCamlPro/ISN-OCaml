// Ces programmes sont sous licence CeCILL-B V1.
class EchangeTableaux {

  static int [] a,b;

  static void echange (int [] x, int [] y) {
    int z; 
    z = x[0];
    x[0] = y[0];
    y[0] = z;}

  public static void main (String [] args) {
    a = new int [1];
    a[0] = 4;
    b = new int [1];
    b[0] = 7;
    echange(a,b);
    System.out.print(a[0]);
    System.out.print("   ");
    System.out.println(b[0]);}}











