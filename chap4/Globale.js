// Ces programmes sont sous licence CeCILL-B V1.
var a;
function f(x) { 
	ISNprintln(2 * x);
	a = 2 * x;
}
function main() {
	var n;// n variable locale
	a = 3;
	n = 4;
	f(a+n);
}
main()//on appelle la fonction main()=>programme principal
//NB : la création de la fonction main() permet uniquement de donner le statut de variable locale à n (comme dans l'exemple en Java) 
