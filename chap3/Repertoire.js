// Ces programmes sont sous licence CeCILL-B V1.
var nom=new Array(); 
var tel=new Array();
var i, s;
// Remplissage du répertoire
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
// Recherche du numéro associé au nom s
s = ISNinputString();
i = 0;
while (i < 10 && s!=nom[i]) {
i = i + 1;
}
if (i < 10) {
	ISNprintln(tel[i]);
}
else {
	ISNprintln("Inconnu");}
