// Ces programmes sont sous licence CeCILL-B V1.
//ATTENTION, cet exemple ne fonctionne pas en local (problème de 'cross-origin data')
//Il faudra donc mettre cet exemple en ligne (ou utiliser WAMP, LAMP ou MAMP)
//Nous utilisons ici une balise HTML5 canvas
//Pour en savoir plus sur l'utilisation du canvas : https://developer.mozilla.org/fr/docs/Tutoriel_canvas
//Nous utiliserons le fichier joconde.jpg à la place de joconde.ppm (canvas ne gérant pas ce format)
// la lecture d'un fichier de type "text" est complexe en javascript (obligation de faire une requête de type 'ajax') 
//Le script ne sera pas lancé avant la fin du chargement de la page
window.onload=function() {
	var maxGris=0;
	var nivGris;
	//Nous créons un objet context (2d) : ctx
	var ctx=document.getElementById("canvas").getContext("2d");
	//Nous créons un objet image
	var monImage=new Image();
	//l'image "joconde.jpg" est chargée
	monImage.src="joconde.jpg";
	//Toute la suite ne sera exécutée qu'après le chargement de l'image
	monImage.onload=function (){
		//l'image est chargée dans le canvas avec pour origine la gauche 		
		//et le haut du canvas (0,0) 
		ctx.drawImage(monImage,0,0);
		// pix est un objet qui contient les données de notre image
		// les paramètres sont : l'origine de l'image (0,0) et la 			
		// taille de l'image (181,279)
		var pix=ctx.getImageData(0,0,181,279);
		//tabPix est un tableau qui contient le codage 						
		//(R+V+B+canal α) de tous les pixels de notre image (d'où le i=i+4 pour passer d'un pixel à l'autre)
		var tabPix=pix.data;
		//Cette première boucle va nous permettre de calculer maxGris
		for (var i=0;i<tabPix.length;i=i+4){
			//on commence par transformer la couleur en niveau de gris
			//calcul du niveau de gris d'après la "formule" donnée par la Commission Internationale de l'Éclairage 
			nivGris=(tabPix[i]*0.299+tabPix[i+1]*0.587+tabPix[i+2]*0.114);
			//on détermine la valeur max de nivGris
			if (nivGris>=maxGris){
				maxGris=nivGris;
			}
		}
		//La deuxième boucle modifie le tableau de pixels en fonction de la valeur de maxGris/5
		for (var i=0;i<tabPix.length;i=i+4){
			nivGris=(tabPix[i]*0.299+tabPix[i+1]*0.587+tabPix[i+2]*0.114);
			if (nivGris>=maxGris/5){
				tabPix[i]=255;
				tabPix[i+1]=255;
				tabPix[i+2]=255;
			}
			else {
				tabPix[i]=0;
				tabPix[i+1]=0;
				tabPix[i+2]=0;
			}
		}
		//l'image modifiée remplace l'image en couleur
		ctx.putImageData(pix,0,0);
	}
}
