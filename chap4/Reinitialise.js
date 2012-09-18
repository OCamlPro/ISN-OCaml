// Ces programmes sont sous licence CeCILL-B V1.
//En javascript :
//Si la déclaration de la variable a lieu en dehors d'une fonction, la variable est globale
//Si la déclaration de la variable a lieu dans une fonction, 2 cas :
//- avec le mot clé var : la variable est locale
//- sans le mot clé var : la variable est globale
var x;
function reinitialise () {
x = 0;
}
x = 3;
x = 5;
reinitialise();
x = 7;
reinitialise();
x = 4;
