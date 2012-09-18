// Ces programmes sont sous licence CeCILL-B V1.
var n, epsilon, racine, racineprec;
n = ISNinputInt ();
epsilon = Math.pow(10,-n);
racine = 1;
racineprec = 2;
while (Math.abs(racine - racineprec) > epsilon) {
	racineprec = racine;
	racine = 1 / (2 + racineprec);
}
ISNprintln(racine + 1);
