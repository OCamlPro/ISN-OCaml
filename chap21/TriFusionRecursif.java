// Ces programmes sont sous licence CeCILL-B V1.
class TriFusionRecursif {

  static void fusion (int [] tab,int x,int n,int y,int p,int tab1 [],int i) {
    if (x <= n && (y > p  || tab[x] < tab[y])) {
      tab1[i] = tab[x]; 
      fusion(tab,x+1,n,y,p,tab1,i+1);}
    else if (y <= p) {
      tab1[i] = tab[y]; 
      fusion(tab,x,n,y+1,p,tab1,i+1);}}

  static void tri (int [] tab, int n, int p) {
    int k,i;
    int [] tab1;
    if (n < p) {
      k = (n + p)/2;
      tri(tab,n,k);
      tri(tab,k+1,p);
      tab1 = new int [p+1];
      fusion(tab,n,k,k+1,p,tab1,n);
      for (i = n; i <= p; i = i + 1) {
        tab[i] = tab1[i];}}}
 
  public static void main (String [] args) {
    int i;
    int [] tab;
    tab = new int [16]; 
    for (i = 0; i <= 15; i = i + 1) {
      tab[i] = (int)Math.floor(Math.random() * 1000);}
    for (i = 0; i <= 15; i = i + 1) {
      System.out.print(tab[i]);
      System.out.print(" ");}
    System.out.println();
    tri(tab,0,15);
    for (i = 0; i <= 15; i = i + 1) {
      System.out.print(tab[i]);
      System.out.print(" ");}
    System.out.println();}}

