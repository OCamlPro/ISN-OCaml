// Ces programmes sont sous licence CeCILL-B V1.
var x,y,c,i;
var u=new Array();
var t=new Array(); 
t[3] = 2;
t[2] = 8;
t[1] = 7;
t[0] = 3;
//Affichage de la fonction
for (i = 0; i <= 3; i = i + 1) {
	ISNprint(t[i]);
	ISNprint(" ");
	if (i != 0) {
		ISNprint("x");
		if (i != 1) {
			ISNprint("^");
			ISNprint(i);
		}
	}
	if (i != 3) {
		ISNprint(" + ");
	}
}
ISNprintln();
//Calcul et affichage de sa valeur
x = 5;
y = 0;
c = 1;
for (i = 0; i <= 3; i = i + 1) {
	y = y + t[i] * c;
	c = c * x;}
	ISNprintln(y);
    //Calcul de sa dérivée
	for (i = 0; i <= 2; i = i + 1) {
		u[i] = t[i+1] * (i + 1);
	}	
	u[3] = 0;
	//Affichage de sa dérivée
	for (i = 0; i <= 3; i = i + 1) {
		ISNprint(u[i]);
		ISNprint(" ");
		if (i != 0) {
			ISNprint("x");
			if (i != 1) {
				ISNprint("^");
				ISNprint(i);
			}
		}
		if (i != 3) {
			ISNprint(" + ");
		}
	}
ISNprintln();
