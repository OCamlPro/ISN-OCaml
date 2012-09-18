// Ces programmes sont sous licence CeCILL-B V1.
var nom=new Array();
var tel=new Array();
var nb;
function initialise () {
	nb = 10;
	nom[0] = "Alice";
	tel[0] = "0606060606";
	nom[1] = "Bob";
	tel[1] = "0606060607";
	nom[2] = "Charles";
	tel[2] = "0606060608";
	nom[3] = "Djamel";
	tel[3] = "0606060609";
	nom[4] = "Etienne";
	tel[4] = "0606060610";
	nom[5] = "Frédérique";
	tel[5] = "0606060611";
	nom[6] = "Guillaume";
	tel[6] = "0606060612";
	nom[7] = "Hector";
	tel[7] = "0606060613";
	nom[8] = "Isabelle";
	tel[8] = "0606060614";
	nom[9] = "Jérôme";
	tel[9] = "0606060615";
}

function recherche (s) {
	var i;
	var r;
	i = 0;
	while  (i < nb && s!=nom[i]) {
		i = i + 1;
	}
	if (i < nb) {
		r = tel[i];
	} 
	else {
		r = "Inconnu";
	}
	return r;
}
//On crée une fonction main pour que n soit une variable locale comme dans l'exemple en java
//(même si ici, cela n'a aucune importance)
function main(){
	var n;
	initialise ();
	n = ISNinputString();
	ISNprintln(recherche(n));
}
main();
