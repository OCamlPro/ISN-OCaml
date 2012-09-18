// Ces programmes sont sous licence CeCILL-B V1.
var n, i, f;
n = ISNinputInt();
f = 1;
for (i = 1; i <= n; i = i + 1) {
	f = f * i;
}
ISNprintln(f)
