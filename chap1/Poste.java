// Ces programmes sont sous licence CeCILL-B V1.
class Poste {

  public static void main (String [] args) {
    String type; 
    int poids;
    type = Isn.readString ();
    poids = Isn.readInt (); 
    if (Isn.stringEqual(type,"verte")) {
      if (poids <= 20) {
        System.out.println(0.57);}
      else {
        if (poids <= 50) {
          System.out.println(0.95);}
        else {
          if (poids <= 100) {
            System.out.println(1.40);}}}}
    else {
      if (Isn.stringEqual(type,"prioritaire")) {
        if (poids <= 20) {
          System.out.println(0.60);}
        else {
          if (poids <= 50) {
            System.out.println(1.00);}
          else {
            if (poids <= 100) {
              System.out.println(1.45);}}}}
      else {
        if (Isn.stringEqual(type,"ecopli")) {
          if (poids <= 20) {
            System.out.println(0.55);}
          else {
            if (poids <= 50) {
              System.out.println(0.78);}
            else {
              if (poids <= 100) {
                System.out.println(1.00);}}}}}}}}
