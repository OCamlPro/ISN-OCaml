// Ces programmes sont sous licence CeCILL-B V1.
var i,m,n;
function h (j) { 
	var k;
	j = j + 1;
	ISNprintln(i);
	ISNprintln(j);
	k = j + i;
	i = 5;
	return k;
}	
m = 1;
i = 10;
ISNprintln(m);
n = h(m);
ISNprintln(m);
ISNprintln(n);
ISNprintln(i);
