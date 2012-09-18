// Ces programmes sont sous licence CeCILL-B V1.
class TriSelection {

  public static void main (String [] args) {
    int i,j,k,z; 
    int [] tab = new int [16]; 
    for (i = 0; i <= 15; i = i + 1) {
      tab[i] = (int)Math.floor(Math.random() * 1000);}
    for (i = 0; i <= 15; i = i + 1) {
      System.out.print(tab[i] + " " );}
    System.out.println();
    for (i = 0; i <= 14; i = i + 1) {
      k = i; 
      for (j = i + 1; j <= 15; j = j + 1) {
        if (tab[j] <= tab[k]) {
          k = j;}}
      z = tab[i];
      tab[i] = tab[k]; 
      tab[k] = z;}
    for (i = 0; i <= 15; i = i + 1) {
	System.out.print(tab[i] + " " );}
    System.out.println();}}

