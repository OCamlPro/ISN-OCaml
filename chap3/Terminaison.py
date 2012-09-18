# Ces programmes sont sous licence CeCILL-B V1.
s = 2
p = False
while not p:
   # Nous rappelons que range(1,s) signifie [1; s[
   for i in range(1,s):
      j = s - i
      if i * i == 25 * j * j:
         print(i,j)
         p = True
   s = s + 1
