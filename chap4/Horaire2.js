// Ces programmes sont sous licence CeCILL-B V1.
function annoncerUnVol (v,h) {
	ISNprint("Le vol en direction de ");
	ISNprint(v);
	ISNprint(" décolera à  ");
	ISNprint(h);
	ISNprintln();
	ISNprintln("-----------------------------------------------");
	ISNprintln();
}
annoncerUnVol("Tokyo","9h00");
annoncerUnVol("Sydney","9h30");
annoncerUnVol("Toulouse","9h45");
