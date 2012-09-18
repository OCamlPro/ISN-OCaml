# Ces programmes sont sous licence CeCILL-B V1.
from random import randint

minItem = 0
maxItem = 1000-1
nbItems = 16
items = [None]*nbItems 
items1 = [None]*nbItems 
for item in range(nbItems):
   items[item] = randint(minItem,maxItem)
   
for item in range(nbItems):
   print(items[item],end=" ")
print()

taille = 1
while taille < nbItems:
   debut = 0
   x = 0
   y = taille
   for i in range(nbItems): 
      if (x < debut + taille and y < debut + 2*taille and items[x] < items[y]) or (y == debut + 2*taille):
         items1[i] = items[x]
         x = x + 1
      else:
         items1[i] = items[y] 
         y = y + 1
      if x == debut + taille and y == debut + 2*taille: 
         debut = debut + 2 * taille 
         x = debut 
         y = debut + taille
   for i in range(nbItems): 
      items[i] = items1[i]
   taille = taille * 2

for item in range(nbItems):
   print(items[item],end=" ")
print()
