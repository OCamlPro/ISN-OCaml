// Ces programmes sont sous licence CeCILL-B V1.
class Terminaison {

  public static void main (String [] args) {
    int s,i,j;
    boolean p;
    s = 2;
    p = false;
    while (!p) {
      for (i = 1; i <= s - 1; i = i + 1) {
        j = s - i;
        if (i * i == 25 * j * j) {
          System.out.print(i);
          System.out.print("  ");
          System.out.println(j);
          p = true;}}
      s = s + 1;}}}

