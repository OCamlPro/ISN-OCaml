// Ces programmes sont sous licence CeCILL-B V1.
var ht,ttc;
ISNprintln("Quel est le prix hors taxes ?");
ht=ISNinputFloat();
ttc=ht + ht * 19.6/100;
ISNprint("Le prix toutes taxes comprises est ");
ISNprintln(ttc);


