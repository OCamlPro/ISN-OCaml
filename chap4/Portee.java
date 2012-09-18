// Ces programmes sont sous licence CeCILL-B V1.
class Portee {

  static int y,z;

  static double v (double x) { 
    double u;
    u = x * x;
    z = (int)x;
    return u;}

  public static void main (String [] args) {
    double t;
    y = 4;
    t = 1 / (double)y;
    System.out.println(v(t));}}
