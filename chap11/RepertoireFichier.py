# Ces programmes sont sous licence CeCILL-B V1.
tailleRepertoire = 10
nom = [None]*tailleRepertoire
tel = [None]*tailleRepertoire

# Le codage peut être aussi "iso-8859-1" ou (beurk windows !) "cp1252"
f = open("repertoire.txt","r",encoding="utf-8")
# strip() retire les blancs devant et derrière, ici surtout 
# les caractères de fin de ligne que readline() laisse
for i in range(tailleRepertoire):
   nom[i] = f.readline().strip()
   tel[i] = f.readline().strip()
f.close()

s = input()
i = 0
while (i < 10) and not (s == nom[i]):
   i = i + 1
if i < 10:
   print(tel[i])
else:
   print("Inconnu")
