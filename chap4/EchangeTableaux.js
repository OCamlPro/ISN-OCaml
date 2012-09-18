// Ces programmes sont sous licence CeCILL-B V1.
a=new Array();
b=new Array();
function echange (x,y) {
	var z; 
	z = x[0];
	x[0] = y[0];
	y[0] = z;
}
a[0] = 4;
b[0] = 7;
echange(a,b);
ISNprint(a[0]);
ISNprint("   ");
ISNprintln(b[0]);
//En javascript :
//type natif (Number, String..): passage par valeur
//objet (Array,...) : passage par référence
