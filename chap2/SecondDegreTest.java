// Ces programmes sont sous licence CeCILL-B V1.
class SecondDegreTest {

  public static void main (String [] args) {
    double a,b,c,delta;
    // Voici un programme qui résout l'équation du second degré 
    //a x^2 + b x + c = 0
    a = Isn.readDouble();
    b = Isn.readDouble();
    c = Isn.readDouble();
    // Test du coefficient dominant
    if (a == 0.0) {
      System.out.println("Pas une équation du second degré");}
    else {
    // Calcul du discriminant
      delta = b * b - 4 * a * c;
    // Affichage des solutions
      if (delta < 0.0){
        System.out.println("Pas de solution");}
      else {
        if (delta == 0.0) {
          System.out.print("Une solution : ");
          System.out.println(- b / (2 * a));}
        else {
          System.out.print("Deux solutions : ");
          System.out.print((- b - Math.sqrt(delta)) / (2 * a));
          System.out.print(" et ");
          System.out.println((- b + Math.sqrt(delta)) / (2 * a));}}}}}
