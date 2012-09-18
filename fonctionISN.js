// Ces programmes sont sous licence CeCILL-B V1.
ISNprintln=function (chaine) {
	if (typeof chaine==='undefined'){
		document.write('</br>')
	}
	else {
		document.write(chaine,'</br>')
	}
}
ISNprint=function (chaine) {
	if (typeof chaine!=='undefined'){
		document.write(chaine)
	}
}
ISNinputInt=function() {
	maVariable=prompt('Entrez un nombre entier');
	maVariable=parseInt(maVariable)		
	if (!isNaN(maVariable)){
		return maVariable;
	}
	else {
		while (isNaN(maVariable)){
			maVariable=prompt('Désolé, il faut entrer un nombre');
			maVariable=parseInt(maVariable)
		}
		return maVariable;
	}
}
ISNinputFloat=function() {
	maVariable=prompt('Entrez un nombre');
	maVariable=parseFloat(maVariable)
	if (!isNaN(maVariable)){
		return maVariable;
	}
	else {
		while (isNaN(maVariable)){
			maVariable=prompt('Désolé, il faut entrer un nombre');
			maVariable=parseFloat(maVariable)
		}
		return maVariable;
	}
}
ISNinputString=function() {
	return prompt('Entrez une chaîne de caractères');
}

		
