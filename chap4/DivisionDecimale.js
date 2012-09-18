// Ces programmes sont sous licence CeCILL-B V1.
function divisionDecimale (dividende, diviseur) {
	var quotient;
	//le test "diviseur nul" n'est pas utile (renvoie "Infinity")
	quotient = dividende / diviseur;//inutile de passer de int à float
	return quotient;
}
ISNprintln(divisionDecimale(2,3));
