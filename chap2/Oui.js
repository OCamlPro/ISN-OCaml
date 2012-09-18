// Ces programmes sont sous licence CeCILL-B V1.
var s, longueur, n;
s = "un oui ou un non ce n'est pourtant pas la même chose";
longueur = s.length;
n = 0;
while ((n <= (longueur-3)) && !((s.charAt(n)=="o") && (s.charAt(n+1)=="u") && (s.charAt(n+2)=="i"))){
	n = n + 1;
}
if (n > longueur - 3) {
	ISNprintln("pas de oui");
}
else {
	ISNprintln(n);
}
