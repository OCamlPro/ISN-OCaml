// Ces programmes sont sous licence CeCILL-B V1.
function TirerUnTrait () {
	ISNprintln();
	ISNprintln("-----------------------------------------------");
	ISNprintln();
}
function annoncerUnVol (v,h) {
	ISNprint("Le vol en direction de ");
	ISNprint(v);
	ISNprint(" décolera à  ");
	ISNprint(h);
	TirerUnTrait();
}
annoncerUnVol("Tokyo","9h00");
annoncerUnVol("Sydney","9h30");
annoncerUnVol("Toulouse","9h45");
