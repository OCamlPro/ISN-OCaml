# Ces programmes sont sous licence CeCILL-B V1.
# Lecture de la première image
f1 = open("maison1.pgm","r")

s = f1.readline()
s = f1.readline()
largeur1, hauteur1 = map( int, f1.readline().split() )
max1 = int(f1.readline())

gris1 = [[255]*hauteur1 for loop in range(largeur1)]

for j in range(hauteur1):
   for i in range(largeur1):
      gris1[i][j] = int(f1.readline())
f1.close()

# Lecture de la seconde image
f2 = open("maison2.pgm","r")

s = f2.readline()
s = f2.readline()
largeur2, hauteur2 = map( int, f2.readline().split() )
max2 = int(f2.readline())

gris2 = [[255]*hauteur2 for loop in range(largeur2)]

for j in range(hauteur2):
   for i in range(largeur2):
      gris2[i][j] = int(f2.readline())
f2.close()

# Calcul des dimensions maximales des deux images
largeur3 = max( largeur1, largeur2 )
hauteur3 = max( hauteur1, hauteur2 )

# Calcul du niveau de gris maximal
max3 = max( max1, max2 )

# Calcul de l'image fusionnée
gris3 = [[255]*hauteur3 for loop in range(largeur3)] 
for j in range(hauteur3):
   for i in range(largeur3):
      if i < largeur1 and j < hauteur1:
         valeur1 = max3 * gris1[i][j] // max1
      else:
         valeur1 = max3
      if i < largeur2 and j < hauteur2:
         valeur2 = max3 * gris2[i][j] // max2 
      else:
         valeur2 = max3
      gris3[i][j] = min( valeur1, valeur2 )

# Écriture de l'image fusionnée
f3 = open("maisons.pgm","w")
print("P2",file=f3)
print("#",file=f3)
print(largeur3,hauteur3,file=f3)
print(max3,file=f3)
for j in range(hauteur3):
   for i in range(largeur3):
      print(gris3[i][j],file=f3)
f3.close()
