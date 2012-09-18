// Ces programmes sont sous licence CeCILL-B V1.
function quotient (dividende, diviseur) {
	if (dividende < diviseur) {
		return 0;
	}
	else {
		return (1 + quotient(dividende - diviseur, diviseur));
	}
}
ISNprintln(quotient(17,3));
