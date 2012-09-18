# Ces programmes sont sous licence CeCILL-B V1.
# Allocations et initialisations
taille = 400
rouge = [[255]*taille for loop in range(taille)]
vert  = [[255]*taille for loop in range(taille)]
bleu  = [[255]*taille for loop in range(taille)]

# Le sol
for j in range(250,300 + 1):
   for i in range(400 - j,j + 1):
      if (10 * (i+j-400) // (j-200) + 10 * (600-2*j) // (j-200))%2 == 0:
         rouge[i][j],vert[i][j],bleu[i][j] = (167,103,38)
      else:
         rouge[i][j],vert[i][j],bleu[i][j] = (255,255,0)

# Les murs
for i in range(100,150 + 1):
   for j in range(i,400 - i + 1):
      rouge[i][j],vert[i][j],bleu[i][j] = (240,195,0)
for i in range(250,300 + 1):
   for j in range(400 - i,i + 1):
      rouge[i][j],vert[i][j],bleu[i][j] = (240,195,0)

# Le plafond
for j in range(100,150 + 1):
   for i in range(j,400 - j + 1):
      rouge[i][j],vert[i][j],bleu[i][j] = (246,220,18)

# Le mur du fond 
for i in range(150,250 + 1):
   for j in range(150,250 + 1):
      if (160 <= i) and (i <= 210) and (160 <= j) and (j <= 220):
         rouge[i][j],vert[i][j],bleu[i][j] = (119,181,254)
      else:
         rouge[i][j],vert[i][j],bleu[i][j] = (255,244,141)

# Écriture du fichier ppm
f = open("botticelli.ppm","w")
print("P3",file=f)
print("#",file=f)
print(taille,taille,file=f)
print(255,file=f)
for j in range(taille):
   for i in range(taille):
      print(rouge[i][j],file=f)
      print(vert[i][j],file=f)
      print(bleu[i][j],file=f)
f.close()
