// Ces programmes sont sous licence CeCILL-B V1.
class Calendrier {

  public static void main (String [] args) {
    int mois,jour,nbj;
    for (mois = 1;mois <= 12;mois = mois + 1) {
      if (mois == 2) {
        nbj = 28;} 
      else {
        nbj = 30 + (mois + (mois / 8)) % 2;}
      for (jour = 1; jour <= nbj; jour = jour + 1) {
        System.out.print(jour);
        System.out.print (" / ");
        System.out.println (mois);}}}}


