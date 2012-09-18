// Ces programmes sont sous licence CeCILL-B V1.
class Taxes {
 
  public static void main (String [] args) {
    double ht,ttc;
    System.out.println("Quel est le prix hors taxes ?");
    ht = Isn.readDouble();
    ttc = ht + ht * 19.6 / 100;
    System.out.print("Le prix toutes taxes comprises est ");
    System.out.println(ttc);}}

