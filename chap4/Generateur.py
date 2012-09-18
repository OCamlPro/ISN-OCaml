# Ces programmes sont sous licence CeCILL-B V1.
def origine(graine):
   """Cette fonction initialise le générateur"""
   # Notons que periode est aussi globale puis qu'elle n'apparait
   # pas dans le membre gauche d'une affectation.
   # Il est plus clair de toute façon de le déclarer.
   global valeur
   graineTronquee = graine % periode;
   valeur = graineTronquee

def hasard():
   """Cette fonction crée et renvoie un nombre pseudo-aléatoire 
   compris entre 0 et periode-1"""
   # Notons que periode est aussi globale puis qu'elle n'apparait
   # pas dans le membre gauche d'une affectation.
   # Il est plus clair de toute façon de le déclarer.
   global valeur
   valeur = (15 * valeur + 3) % periode
   return valeur

"""Ce programme affiche periode valeurs pseudo-aléatoires"""
periode = 7 
origine(8)
for loop in range(periode):
   print( hasard() )
