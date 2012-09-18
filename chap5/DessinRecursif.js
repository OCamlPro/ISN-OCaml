// Ces programmes sont sous licence CeCILL-B V1.
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous créons, à l'aide du DOM un objet canvas (à partir de la balise canvas du HTML5)
var canvas = document.getElementById("canvas");
//A partir de l'objet canvas nous créons un context 2D pour pouvoir dessiner
var ctx = canvas.getContext("2d");
var gauche = 0;
var droite = 1;
var haut   = 2;
var bas    = 3;
var aucun  = 4;
//Pour essayer de rendre le code plus clair, j'ai créé une fonction cercle
function cercle(posX,posY,r)
{
	ctx.beginPath();
	//Dessin d'un arc de cercle de centre : posX, posY et de rayon : r
	//Sachant que l'angle de départ est 0 est que l'angle d'arrivée est 2 PI, nous créons donc un cercle
	ctx.arc(posX,posY,r, 0, 2 * Math.PI);
	ctx.stroke();
}
function dessiner (x, y,rayon,v) {
	cercle(x,y,rayon);
	if (rayon > 1) {
		if (v != droite) {
			dessiner(x + 3 * rayon / 2,y,rayon / 2,gauche);
			}
		if (v != gauche) {
			dessiner(x - 3 * rayon / 2,y,rayon / 2,droite);
			}
		if (v != haut) {
			dessiner(x,y - 3 * rayon / 2,rayon / 2,bas);
		}
		if (v != bas) {
			dessiner(x,y + 3 * rayon / 2,rayon / 2,haut);
		}
	}
}
dessiner(200,200,64);
