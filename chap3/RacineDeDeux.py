# Ces programmes sont sous licence CeCILL-B V1.
n = int(input())
epsilon = 10**(-n)
racine = 1
racineprec = 2
while abs(racine - racineprec) > epsilon:
   racineprec = racine
   racine = 1 / (2 + racineprec)
print(racine + 1)
