// Ces programmes sont sous licence CeCILL-B V1.
function puissance (n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (2 * puissance(n-1));
	}
}
ISNprintln(puissance(10));
