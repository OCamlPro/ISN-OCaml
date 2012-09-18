// Ces programmes sont sous licence CeCILL-B V1.
class SecondDegre {

  public static void main (String [] args) {
    double a,b,c,delta;
    a = Isn.readDouble();
    b = Isn.readDouble();
    c = Isn.readDouble();
    delta = b * b - 4 * a * c;
    if (delta < 0.0) {
      System.out.println("Pas de solution");}
    else {
      if (delta == 0.0) {
        System.out.print("Une solution : ");
        System.out.println(- b / (2 * a));}
      else {
        System.out.print("Deux solutions : ");
        System.out.print((- b - Math.sqrt(delta)) / (2 * a));
        System.out.print(" et ");
        System.out.println((- b + Math.sqrt(delta)) / (2 * a));}}}}
