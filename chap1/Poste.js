// Ces programmes sont sous licence CeCILL-B V1.
var type; 
var poids;
type = ISNinputString ();
poids = ISNinputInt (); 
if (type=="verte") {
	if (poids <= 20) {
		ISNprintln('0,57 euro');
	}
		else if (poids <= 50) {
			ISNprintln('0,95 euro');
		}
			else if (poids <= 100) {
				ISNprintln('1,40 euro');
			}			
}
	else if (type=="prioritaire") {
		if (poids <= 20) {
			ISNprintln('0,60 euro');
		}
			else if (poids <= 50) {
				ISNprintln('1,00 euro');
			}
				else if (poids <= 100) {
					ISNprintln('1,45 euro');
				}
	}
		else if (type=="ecopli") {
			if (poids <= 20) {
				ISNprintln('0,55 euro');
			}
				else if (poids <= 50) {
					ISNprintln('0,78 euro');
				}
					else if (poids <= 100) {
						ISNprintln('1,00 euro');
					}
		}
