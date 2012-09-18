# Ces programmes sont sous licence CeCILL-B V1.
from math import sqrt

a = float(input())
b = float(input())
c = float(input())
delta = b * b - 4 * a * c
if delta < 0.0:
   print("Pas de solution")
elif delta == 0.0:
   # Dangereux (essayer 0.9 0.6 0.1)
   print("Une solution :",- b / (2 * a))
else:
   print("Deux solutions : ",end="")
   print((- b - sqrt(delta)) / (2 * a),end="")
   print(" et ",end="")
   print((- b + sqrt(delta)) / (2 * a))
