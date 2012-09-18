# Ces programmes sont sous licence CeCILL-B V1.
a = int(input())
b = int(input())
c = int(input())
d = int(input())
if (b == 0) or(d == 0):
   print("Dénominateur nul interdit !")
else:
   print(a * d + c * b)
   print(b * d)
