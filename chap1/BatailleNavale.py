# Ces programmes sont sous licence CeCILL-B V1.
a = 4
b = 7
print("À vous de jouer (deux entiers sur deux lignes, un par ligne)");
x = int(input())
y = int(input())
if (x == a) and (y==b):
   print("Coulé")
elif (x == a) or (y == b):
   print("En vue")
else:
   print("À l'eau")
