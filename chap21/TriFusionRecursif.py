# Ces programmes sont sous licence CeCILL-B V1.
from random import randint

minItem = 0
maxItem = 1000-1
nbItems = 16
items = [None]*nbItems 
temp  = [None]*nbItems 
for item in range(nbItems):
   items[item] = randint(minItem,maxItem)
   
for item in range(nbItems):
   print(items[item],end=" ")
print()

def fusion(items,debut,milieu,fin):
   global temp
   item1 = debut
   item2 = milieu
   for item in range(debut,fin):
      if (item2 == fin) or (item1 < milieu and items[item1] < items[item2]):
         temp[item] = items[item1] 
         item1 = item1 + 1
      else:
         temp[item] = items[item2] 
         item2 = item2 + 1
   for item in range(debut,fin):
      items[item] = temp[item]
         
def triFusion(items,debut,fin):
   """Tri sur l'intervalle [debut;fin["""
   if fin - debut > 1:
      milieu = (debut + fin) // 2
      triFusion(items,debut,milieu)
      triFusion(items,milieu,fin)
      fusion(items,debut,milieu,fin)

triFusion(items,0,nbItems)
      
for item in range(nbItems):
   print(items[item],end=" ")
print()
