// Ces programmes sont sous licence CeCILL-B V1.
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous créons, à l'aide du DOM un objet canvas (à partir de la balise canvas du HTML5)
var canvas = document.getElementById("canvas");
//A partir de l'objet canvas nous créons un context 2D pour pouvoir dessiner
var ctx = canvas.getContext("2d");
var i,j;
// Le sol
for (j = 250; j <= 300; j = j + 1) {
	for (i = 400 - j; i <= j; i = i + 1) {
		//attention à bien utiliser Math.floor ci-dessous 
		if ((Math.floor((10 * (i+j-400)) / (j-200)) + Math.floor((10 * (600-2*j)) / (j-200)))%2 == 0) {
			//couleur du point : marron
			ctx.fillStyle="rgb(167,103,38)";	
		}
		else {
			//couleur du point : jaune
			ctx.fillStyle="rgb(255,255,0)";
		}
	//Sauf erreur de ma part, il n'existe pas de méthode dans l'API canvas pour tracer un point
	//Nous traçons donc ci-dessous un carré d'1px x 1px !
	ctx.fillRect(i,j,1,1);
		
	}
}
// Les murs
for (i = 100; i <= 150; i = i + 1) {
	for (j = i; j <= 400-i; j = j + 1) {
		ctx.fillStyle="rgb(240,195,0)";
		ctx.fillRect(i,j,1,1);
	}
}
for (i = 250; i <= 300; i = i + 1) {
	for (j = 400 - i;  j <= i; j = j + 1) {
        ctx.fillStyle="rgb(240,195,0)";
		ctx.fillRect(i,j,1,1);
	}
}
// Le plafond
for (j = 100; j <= 150; j = j + 1) {
	for (i = j; i <= 400 - j; i = i + 1) {
		ctx.fillStyle="rgb(246,220,18)";
		ctx.fillRect(i,j,1,1);
	}
}
// Le mur du fond 
for (i = 150; i <= 250; i = i + 1) {
	for (j = 150; j <= 250; j = j + 1) {
		if (160 <= i && i <= 210 && 160 <= j && j <= 220) {
			ctx.fillStyle="rgb(119,181,254)";
			ctx.fillRect(i,j,1,1);
		}
		else {
			ctx.fillStyle="rgb(255,244,141)";
			ctx.fillRect(i,j,1,1);
        }
	}
}
