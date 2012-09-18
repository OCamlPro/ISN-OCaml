// Ces programmes sont sous licence CeCILL-B V1.
class Echange {

  static int a,b;

  static void echange (int x, int y) {
    int z; 
    z = x;
    x = y;
    y = z;}

  public static void main (String [] args) {
    a = 4;
    b = 7;
    echange(a,b);
    System.out.print(a);
    System.out.print("   ");
    System.out.println(b);}}
