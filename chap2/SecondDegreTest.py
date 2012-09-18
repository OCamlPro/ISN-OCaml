# Ces programmes sont sous licence CeCILL-B V1.
# Voici un programme qui résout l'équation du second degré 
# a x^2 + b x + c = 0
from math import sqrt

a = float(input())
b = float(input())
c = float(input())
# Test du coefficient dominant
if a == 0.0:
   print("Pas une équation du second degré")
else:
# Calcul du discriminant
   delta = b * b - 4 * a * c;
# Affichage des solutions
   if delta < 0.0: 
      print("Pas de solution")
   elif delta == 0.0:
      print("Une solution :",- b / (2 * a))
   else:
      print("Deux solutions : ",end="")
      print((- b - sqrt(delta)) / (2 * a),end="")
      print(" et ",end="")
      print((- b + sqrt(delta)) / (2 * a))
