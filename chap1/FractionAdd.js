// Ces programmes sont sous licence CeCILL-B V1.
var a,b,c,d;
a = ISNinputInt();
b = ISNinputInt();
c = ISNinputInt();
d = ISNinputInt();
if (b == 0 || d == 0) {
	ISNprintln("Dénominateur nul interdit !");
}
else {
	ISNprintln(a * d + c * b);
	ISNprintln(b * d);
}
