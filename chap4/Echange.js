// Ces programmes sont sous licence CeCILL-B V1.
var a,b;
function echange (x, y) {
	var z; 
	z = x;
	x = y;
	y = z;
}
a = 4;
b = 7;
echange(a,b);
ISNprint(a);
ISNprint("   ");
ISNprintln(b);
