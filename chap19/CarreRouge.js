// Ces programmes sont sous licence CeCILL-B V1.
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous créons, à l'aide du DOM un objet canvas (à partir de la balise canvas du HTML5)
var canvas = document.getElementById("canvas");
//A partir de l'objet canvas nous créons un context 2D pour pouvoir dessiner
var ctx = canvas.getContext("2d");
ctx.fillStyle="red";
for (x = 100; x <= 250; x = x + 1) {
	for (y = 50; y <= 200; y = y + 1) {
		//Sauf erreur de ma part, il n'existe pas de méthode dans l'API canvas pour tracer un point
		//Nous traçons donc ci-dessous un carré d'1px x 1px !
		ctx.fillRect(x,y,1,1);
	}
}
