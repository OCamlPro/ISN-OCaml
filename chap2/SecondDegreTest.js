// Ces programmes sont sous licence CeCILL-B V1.
var a,b,c,delta;
// Voici un programme qui résout l'équation du second degré 
//a x^2 + b x + c = 0
a = ISNinputFloat();
b = ISNinputFloat();
c = ISNinputFloat();
// Test du coefficient dominant
if (a == 0.0) {
	ISNprintln("Pas une équation du second degré");
}
else {
	// Calcul du discriminant
	delta = b * b - 4 * a * c;
	// Affichage des solutions
	if (delta < 0.0){
		ISNprintln("Pas de solution");
	}
	else {
		if (delta == 0.0) {
			ISNprint("Une solution : ");
			ISNprintln(- b / (2 * a));
		}
        else {
			ISNprint("Deux solutions : ");
			ISNprint((- b - Math.sqrt(delta)) / (2 * a));
			ISNprint(" et ");
			ISNprintln((- b + Math.sqrt(delta)) / (2 * a));
		}
	}
}
