// Ces programmes sont sous licence CeCILL-B V1.
var a,b,c,delta;
a = ISNinputFloat();
b = ISNinputFloat();
c = ISNinputFloat();
delta = b * b - 4 * a * c;
if (delta<0){
	ISNprintln("Pas de solution");
}
else if (delta==0){
	ISNprintln("Une solution : ",-b/(2*a));
}
else {
	ISNprint ("Deux solutions : ");
	ISNprint ((- b - Math.sqrt(delta)) / (2*a));
	ISNprint(" et ");
	ISNprint ((- b + Math.sqrt(delta)) / (2*a));
}
