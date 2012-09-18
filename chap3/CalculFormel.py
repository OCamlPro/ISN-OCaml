# Ces programmes sont sous licence CeCILL-B V1.
degreMax = 3
t = [0]*(degreMax + 1) 
u = [0]*(degreMax + 1)   
t[3] = 2
t[2] = 8
t[1] = 7
t[0] = 3

# Affichage de la fonction
for degre in range(degreMax + 1):
   print(t[degre],end="")
   if degre != 0:
      print(" x",end="")
      if degre != 1:
         print("^",end="")
         print(degre,end="")
   if degre != degreMax:
      print(" + ",end="")
print()


# Calcul et affichage de sa valeur
x = 5
y = 0
c = 1
for degre in range(degreMax + 1):
   y = y + t[degre] * c;
   c = c * x
print(y)

# Calcul de sa dérivée
for degre in range(degreMax):
   u[degre] = t[degre + 1] * (degre + 1)
u[3] = 0

# Affichage de sa dérivée
for degre in range(degreMax + 1):
   print(u[degre],end="")
   if degre != 0:
      print(" x",end="")
      if degre != 1:
         print("^",end="")
         print(degre,end="")
   if degre != degreMax:
      print(" + ",end="")
print()
