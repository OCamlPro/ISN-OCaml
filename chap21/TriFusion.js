// Ces programmes sont sous licence CeCILL-B V1.
var i,j,b,x,y,z,s;
var tab = new Array(); 
var tab1 = new Array(); 
for (i = 0; i <= 15; i = i + 1) {
	tab[i] = Math.floor(Math.random() * 1000);
}
for (i = 0; i <= 15; i = i + 1) {
	ISNprint(tab[i] + " " );
}
ISNprintln();
s = 1; 
while (s <= 15) {
	b = 0;
	x = 0;
	y = s;
	for (i = 0; i <= 15; i = i + 1) {
		if ((x < b + s && y < b + 2*s && tab[x] < tab[y]) || (y == b + 2*s)) {
			tab1[i] = tab[x];
			x = x + 1;
		}
		else {
			tab1[i] = tab[y]; 
			y = y + 1;
		}
		if (x == b + s && y == b + 2 * s) {
			b = b + 2 * s; 
			x = b; 
			y = b + s;
		}
	}
	for (i = 0; i <= 15; i = i + 1) {
		tab[i] = tab1[i];
	}
	s = s * 2;
}
for (i = 0; i <= 15; i = i + 1) {
	ISNprint(tab[i] + " " );
}
ISNprintln();
