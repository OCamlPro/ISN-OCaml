// Ces programmes sont sous licence CeCILL-B V1.
var nom, i;
nom = ISNinputString();
ISNprint(nom.charAt(0));
for (i = 0; i <= nom.length - 2; i = i + 1) {
	if (nom.charAt(i)==" ") {
		ISNprint(nom.charAt(i + 1));
	}
}
ISNprintln();
