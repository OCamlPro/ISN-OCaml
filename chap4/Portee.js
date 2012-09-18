// Ces programmes sont sous licence CeCILL-B V1.
var y,z;
function v (x) { 
	var u;
	u = x * x;
	z = parseInt(x);
	return u;
}
//On crée une fonction main pour que t soit une variable locale comme dans l'exemple en java
function main () {
	var t;
	y = 4;
	t = 1 / y;
	ISNprintln(v(t));
}
main();
