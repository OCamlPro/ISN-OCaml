// Ces programmes sont sous licence CeCILL-B V1.
var s,i,j,p;
s = 2;
p = false;
while (!p) {
	for (i = 1; i <= s - 1; i = i + 1) {
		j = s - i;
		if (i * i == 25 * j * j) {
			ISNprint(i);
			ISNprint("  ");
			ISNprintln(j);
			p = true;
		}
	}
	s = s + 1;
}
