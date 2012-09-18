// Ces programmes sont sous licence CeCILL-B V1.
var i;
tab=new Array();
function fusion (tab,x,n,y,p,tab1,i) {
	if (x <= n && (y > p  || tab[x] < tab[y])) {
		tab1[i] = tab[x]; 
		fusion(tab,x+1,n,y,p,tab1,i+1);
	}
	else if (y <= p) {
		tab1[i] = tab[y]; 
		fusion(tab,x,n,y+1,p,tab1,i+1);
	}
}

function tri (tab,n,p) {
	var k,i;
    var tab1=new Array();
	if (n < p) {
		k = Math.floor((n + p)/2);
		tri(tab,n,k);
		tri(tab,k+1,p);
		fusion(tab,n,k,k+1,p,tab1,n);
		for (i = n; i <= p; i = i + 1) {
			tab[i] = tab1[i];
		}
	}
}
 
for (i = 0; i <= 15; i = i + 1) {
	tab[i] = Math.floor(Math.random() * 1000);
}
for (i = 0; i <= 15; i = i + 1) {
	ISNprint(tab[i]);
	ISNprint(" ");
}
ISNprintln();
tri(tab,0,15);
for (i = 0; i <= 15; i = i + 1) {
	ISNprint(tab[i]);
	ISNprint(" ");
}
ISNprintln(); 
