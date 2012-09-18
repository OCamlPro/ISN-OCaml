// Ces programmes sont sous licence CeCILL-B V1.
var alpha,principale,n;
alpha = ISNinputFloat();
n = Math.floor(alpha / (2 * Math.PI));
principale = alpha - 2 * n * Math.PI;
if (principale > Math.PI) {
	principale = principale - 2 * Math.PI;
}
ISNprintln(principale);
