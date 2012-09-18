// Ces programmes sont sous licence CeCILL-B V1.
class ParValeur {
  static int i;

  static int h (int j) { 
    int k;
    j = j + 1;
    System.out.println(i);
    System.out.println(j);
    k = j + i;
    i = 5;
    return k;}

  public static void main (String [] args) {
    int m, n;
    m = 1;
    i = 10;
    System.out.println(m);
    n = h(m);
    System.out.println(m);
    System.out.println(n);
    System.out.println(i);}}
