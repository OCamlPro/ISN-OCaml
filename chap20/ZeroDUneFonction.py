# Ces programmes sont sous licence CeCILL-B V1.
from math import sin

seuil = 10**(-5)
inf = 2
sup = 4
milieu = (inf + sup) / 2
while sup - inf > seuil and abs(sin(milieu)) > seuil:
   if sin(inf) * sin(milieu) <= 0:
      sup = milieu
   else:
      inf = milieu
   milieu = (inf + sup) / 2
print(milieu)
