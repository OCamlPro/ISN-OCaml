# Ces programmes sont sous licence CeCILL-B V1.
s = "un oui ou un non ce n'est pourtant pas la même chose"
longueur = len(s)
n = 0
while (n <= longueur-3) and ((s[n] != "o") or (s[n+1] != "u") or (s[n+2] != "i")):
   n = n + 1
if n > longueur - 3:
   print("pas de oui")
else:
   print(n)
