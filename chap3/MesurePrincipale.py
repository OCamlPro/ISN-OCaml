# Ces programmes sont sous licence CeCILL-B V1.
from math import floor,pi
alpha = float(input())
n = floor(alpha / (2 * pi))
principale = alpha - 2 * n * pi
if principale > pi:
   principale = principale - 2 * pi
print(principale)
