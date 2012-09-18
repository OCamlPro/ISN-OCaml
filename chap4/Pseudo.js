// Ces programmes sont sous licence CeCILL-B V1.
// Dans cette fonction "lettre" est censé ne contenir 
// qu'un seul caractère.
// On vérifie si ce caractère apparaît dans la chaîne "mot"
function appartient(lettre, mot) {
	var i, resultat;
	resultat = false;
	for (i = 0; i <= mot.length- 1; i = i + 1) {
		if (mot.charAt(i)==lettre) {
			resultat = true;
		}
	}
	return resultat;
}
function main(){
	var autorises, pseudo, pseudoOk,i;
	autorises = "abcdefghijklmnopqrstuvwxyz";
	pseudoOk = false;
	// On redemande un pseudo tant qu'il n'est pas correct 
	while (!pseudoOk) {
		ISNprintln("Entrer votre pseudo :");
		pseudo = ISNinputString();
		pseudoOk = true;
		// On vérifie que chaque caractère du pseudo est autorisé
		for (i = 0; i <= pseudo.length - 1; i = i + 1) {
			if (!appartient(pseudo.charAt(i),autorises)) {
				pseudoOk=false;
			}
		}
	}
}
main();
//on appelle la fonction main()=>programme principal
//NB : la création de la fonction main() permet uniquement de donner le statut de variables locales à autorises, pseudo, pseudoOk et i (comme dans l'exemple en Java)
