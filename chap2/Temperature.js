// Ces programmes sont sous licence CeCILL-B V1.
var jour, somme, temperature;
somme = 0;
for (jour = 1; jour <= 7; jour = jour + 1) {
	temperature = ISNinputFloat();
	somme = somme + temperature;
}
ISNprintln (somme / 7);
