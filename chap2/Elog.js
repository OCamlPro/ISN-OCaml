// Ces programmes sont sous licence CeCILL-B V1.
var n, x;
x = ISNinputFloat();
n = 0;
while (x > 1) {
	x = x / 2;
	n = n + 1;
}
ISNprintln(n);
