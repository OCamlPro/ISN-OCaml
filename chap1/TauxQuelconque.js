// Ces programmes sont sous licence CeCILL-B V1.
var ht,ttc,taux;
ISNprintln("Quel est le prix hors taxes ?");
ht = ISNinputFloat();
ISNprintln("Quel est le taux de TVA ?");
taux = ISNinputFloat();
ttc = ht + ht * taux / 100;
ISNprint("Le prix toutes taxes comprises est ");
ISNprintln(ttc);


