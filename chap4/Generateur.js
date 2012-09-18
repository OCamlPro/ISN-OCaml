// Ces programmes sont sous licence CeCILL-B V1.
var valeur, periode, i;
//Cette fonction initialise le générateur
function origine(graine) {
	var graineTronquee;
	graineTronquee = graine % periode;
	valeur = graineTronquee;
}
//Cette fonction crée et renvoie un nombre pseudo-aléatoire 
//compris entre 0 et periode-1
function hasard() {
	valeur = (15 * valeur + 3) % periode;
	return valeur;
}
// La suite affiche periode valeurs pseudo-aléatoires
periode = 7;  
origine(8);
for (i = 1; i <= periode; i = i + 1) {
	ISNprintln(hasard());
}
