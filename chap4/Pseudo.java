// Ces programmes sont sous licence CeCILL-B V1.
class Pseudo {

  // Dans cette fonction "lettre" est censé ne contenir 
  // qu'un seul caractère.
  // On vérifie si ce caractère apparaît dans la chaîne "mot"

  static boolean appartient(String lettre, String mot) {
    int i;
    boolean resultat;
    resultat = false;
    for (i = 0; i <= Isn.stringLength(mot) - 1; i = i + 1) {
      if (Isn.stringEqual(Isn.stringNth(mot,i),lettre)) {
        resultat = true;}}
    return resultat;}

  public static void main(String[] args) {
    String autorises, pseudo;
    boolean pseudoOk;
    int i;
    autorises = "abcdefghijklmnopqrstuvwxyz";
    pseudoOk = false;
    // On redemande un pseudo tant qu'il n'est pas correct 
    while (!pseudoOk) {
      System.out.println("Entrer votre pseudo :");
      pseudo = Isn.readString();
      pseudoOk = true;
    // On vérifie que chaque caractère du pseudo est autorisé
    for (i = 0; i <= Isn.stringLength(pseudo) - 1; i = i + 1) {
      if (!appartient(Isn.stringNth(pseudo,i),autorises)) {
        pseudoOk=false;}}}}}
