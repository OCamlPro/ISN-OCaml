// Ces programmes sont sous licence CeCILL-B V1.
//ATTENTION, cet exemple ne fonctionne pas en local (problème de 'cross-origin data')
//Il faudra donc mettre cet exemple en ligne (ou utiliser WAMP, LAMP ou MAMP)
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous utiliserons le fichier joconde.jpg à la place de joconde.ppm (canvas ne gérant pas ce format)
// la lecture d'un fichier de type "text" est complexe en javascript (obligation de faire une requête de type 'ajax') 
//Le script ne sera pas lancé avant la fin du chargement de la page
window.onload=function() {
	//Nous créons 3 objets context (2d) : ctx1,ctx2 et ctx3
	var ctx1=document.getElementById("canvas1").getContext("2d");
	var ctx2=document.getElementById("canvas2").getContext("2d");
	var ctx3=document.getElementById("canvas3").getContext("2d");
	//Nous créons 2 objets image
	var monImage1=new Image();
	var monImage2=new Image();
	//l'image "maison1.jpg" est chargée
	monImage1.src="maison1.jpg";
	//l'image "maison2.jpg" est chargée
	monImage2.src="maison2.jpg";
	//Toute la suite ne sera exécutée qu'après le chargement de l'image
	monImage1.onload=function (){
		monImage2.onload=function(){
			//l'image est chargée dans le canvas avec pour origine la gauche 		
			//et le haut du canvas (0,0) 
			ctx1.drawImage(monImage1,0,0);
			ctx2.drawImage(monImage2,0,0);
			//il faut charger une image dans ctx3, peu importe l'image, car elle sera remplacée par le résultat
			ctx3.drawImage(monImage2,0,0);
			// pix est un objet qui contient les données de notre image
			// les paramètres sont : l'origine de l'image (0,0) et la 			
			// taille de l'image (367,282)
			var pix1=ctx1.getImageData(0,0,367,282);
			var pix2=ctx2.getImageData(0,0,367,282);
			var pix3=ctx3.getImageData(0,0,367,282);
			//tabPix est un tableau qui contient le codage 						
			//(R+V+B+canal α) de tous les pixels de notre image (d'où le i=i+4 pour passer d'un pixel à l'autre)
			var tabPix1=pix1.data;
			var tabPix2=pix2.data;
			var tabPix3=pix3.data;
			for (var i=0;i<tabPix1.length;i=i+4){
				if (tabPix1[i]<tabPix2[i]){
					tabPix3[i]=tabPix1[i];
				}
				else {
					tabPix3[i]=tabPix2[i];
				}
				//on travaille uniquement sur des images en niveau de gris donc :	
				tabPix3[i+1]=tabPix3[i];
				tabPix3[i+2]=tabPix3[i];
			}
			ctx3.putImageData(pix3,0,0);
		}
	}
}
