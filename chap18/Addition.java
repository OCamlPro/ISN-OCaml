// Ces programmes sont sous licence CeCILL-B V1.
class Addition {

  public static void main (String [] args) {
    boolean [] n, p, r;
    int i;
    boolean a,b,c;
    n = new boolean [10];
    p = new boolean [10];
    r = new boolean [11];
    n[0] = true;
    n[1] = true;
    n[2] = true;
    n[3] = false;
    n[4] = false;
    n[5] = false;
    n[6] = false;
    n[7] = false;
    n[8] = false;
    n[9] = false;
    p[0] = false;
    p[1] = true;
    p[2] = false;
    p[3] = false;
    p[4] = false;
    p[5] = false;
    p[6] = false;
    p[7] = false;
    p[8] = false;
    p[9] = false;
    c = false;
    for (i = 0; i <= 9; i = i + 1) {
      a = n[i];
      b = p[i];
      r[i] = (a && !b && !c) || (!a && b && !c) || (!a && !b && c) 
          || (a && b && c);
      c = (a && b) || (b && c) || (a && c);}
    r[10] = c;
    System.out.print(" "); 
    for (i = 0; i <= 9; i = i + 1) {
      if (n[9-i]) {
        System.out.print("1");} 
      else {
        System.out.print("0");}}
    System.out.println();
    System.out.print(" "); 
    for (i = 0; i <= 9; i = i + 1) {
      if (p[9-i]) {
        System.out.print("1");} 
      else {
        System.out.print("0");}}
    System.out.println();
    for (i = 0; i <= 10; i = i + 1) {
      if (r[10-i]) {
        System.out.print("1");} 
      else {
        System.out.print("0");}}
    System.out.println();}}
