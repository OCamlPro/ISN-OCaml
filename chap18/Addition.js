// Ces programmes sont sous licence CeCILL-B V1.
//Attention : j'ai dû "bidouiller" un peu le code html pour obtenir le bon alignement
var n=new Array();
var p=new Array();
var r=new Array();
var i,a,b,c;
n[0] = true;
n[1] = true;
n[2] = true;
n[3] = false;
n[4] = false;
n[5] = false;
n[6] = false;
n[7] = false;
n[8] = false;
n[9] = false;
p[0] = false;
p[1] = true;
p[2] = false;
p[3] = false;
p[4] = false;
p[5] = false;
p[6] = false;
p[7] = false;
p[8] = false;
p[9] = false;
c = false;
for (i = 0; i <= 9; i = i + 1) {
	a = n[i];
	b = p[i];
	r[i] = (a && !b && !c) || (!a && b && !c) || (!a && !b && c) || (a && b && c);
	c = (a && b) || (b && c) || (a && c);}
r[10] = c;
ISNprint(" "); 
for (i = 0; i <= 9; i = i + 1) {
	if (n[9-i]) {
		ISNprint("1");} 
	else {
		ISNprint("0");
	}
}
ISNprintln();
ISNprint(" "); 
for (i = 0; i <= 9; i = i + 1) {
	if (p[9-i]) {
		ISNprint("1");
	} 
	else {
		ISNprint("0");
	}
}
ISNprintln();
for (i = 0; i <= 10; i = i + 1) {
	if (r[10-i]) {
		ISNprint("1");
	} 
	else {
		ISNprint("0");
	}
}
ISNprintln();
