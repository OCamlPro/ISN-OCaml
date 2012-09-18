// Ces programmes sont sous licence CeCILL-B V1.
class TauxQuelconque {
 
  public static void main (String [] args) {
    double ht,ttc,taux;
    System.out.println("Quel est le prix hors taxes ?");
    ht = Isn.readDouble();
    System.out.println("Quel est le taux de TVA ?");
    taux = Isn.readDouble();
    ttc = ht + ht * taux / 100;
    System.out.print("Le prix toutes taxes comprises est ");
    System.out.println(ttc);}}
