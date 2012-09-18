// Ces programmes sont sous licence CeCILL-B V1.
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous créons, à l'aide du DOM un objet canvas (à partir de la balise canvas du HTML5)
var canvas = document.getElementById("canvas");
//A partir de l'objet canvas nous créons un context 2D pour pouvoir dessiner
var ctx = canvas.getContext("2d");
// Face avant  
ctx.beginPath();
ctx.moveTo(100,100);
ctx.lineTo(300,100);
ctx.lineTo(300,300);
ctx.lineTo(100,300);
	//closePath "referme" automatiquement la figure
ctx.closePath();
ctx.stroke();
//face arrière
ctx.beginPath();
ctx.moveTo(150,250);
ctx.lineTo(150,150);
ctx.lineTo(250,150);
ctx.lineTo(250,250);
	//closePath "referme" automatiquement la figure
ctx.closePath();
ctx.stroke();
//arrêtes fuyantes
ctx.beginPath();
ctx.moveTo(150,150);
ctx.lineTo(100,100);
ctx.moveTo(250,150);
ctx.lineTo(300,100);
ctx.moveTo(250,250);
ctx.lineTo(300,300);
ctx.moveTo(150,250);
ctx.lineTo(100,300);
ctx.stroke();
