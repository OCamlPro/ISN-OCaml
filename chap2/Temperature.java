// Ces programmes sont sous licence CeCILL-B V1.
class Temperature {

  public static void main (String [] args) {
    int jour;
    double somme, temperature;
    somme = 0;
    for (jour = 1; jour <= 7; jour = jour + 1) {
      temperature = Isn.readDouble ();
      somme = somme + temperature;}
    System.out.println (somme / 7.0);}}


