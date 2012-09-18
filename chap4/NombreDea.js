// Ces programmes sont sous licence CeCILL-B V1.
function nombreDea (s) {
var i, n;
n = 0;
for (i = 0; i <= s.length - 1;i = i + 1) {
	if (s.charAt(i)=="a") {
		n = n + 1;
	}
}
return n;
}
ISNprintln(nombreDea("abracadabra"));
