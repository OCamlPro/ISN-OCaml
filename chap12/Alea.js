// Ces programmes sont sous licence CeCILL-B V1.
var i;
for (i = 1; i <= 1000; i = i + 1) {
	ISNprint(String.fromCharCode(Math.floor(Math.random() * 26 + 97)));
	//retour à la ligne tous les 100 caractères (facultatif)
	if (i%100==0){
		ISNprintln();
	}
}
ISNprintln();
