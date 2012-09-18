// Ces programmes sont sous licence CeCILL-B V1.
var a;
var b;
var x;
var y;
a=4;
b=7;
ISNprintln("A vous de jouer");
x=ISNinputInt();
y=ISNinputInt();
if (x==a && y==b){
	ISNprintln("Coulé");
}
else{
	if (x==a || y==b){
		ISNprintln("En vue");
	}

	else{
		ISNprintln("A l'eau");
	}
}

