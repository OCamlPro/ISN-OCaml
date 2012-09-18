# Ces programmes sont sous licence CeCILL-B V1.
f1 = open("joconde.ppm","r")
   
s = f1.readline()
s = f1.readline()
largeur, hauteur = map( int, f1.readline().split() )
max = int(f1.readline())

rouge = [[255]*hauteur for loop in range(largeur)]
vert  = [[255]*hauteur for loop in range(largeur)]
bleu  = [[255]*hauteur for loop in range(largeur)]

for j in range(hauteur):
   for i in range(largeur):
      rouge[i][j] = int(f1.readline())
      vert [i][j] = int(f1.readline())
      bleu [i][j] = int(f1.readline())
f1.close()

t = [[255]*hauteur for loop in range(largeur)]
for i in range(largeur):
   for j in range(hauteur):
      t[i][j] = (rouge[i][j] + bleu[i][j] + vert[i][j]) // 3

t1 = [[255]*hauteur for loop in range(largeur)]
for i in range(largeur):
   for j in range(hauteur):
      if t[i][j] <= max // 5:
         t1[i][j] = 0
      else:
         t1[i][j] = max

f2 = open("jocondenoiretblanc.pgm","w")
print("P2",file=f2)
print("#",file=f2)
print(largeur,hauteur,file=f2)
print(max,file=f2)
for j in range(hauteur):
   for i in range(largeur):
      print(t1[i][j],file=f2)
f2.close()
