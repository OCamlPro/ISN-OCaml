# Ces programmes sont sous licence CeCILL-B V1.
from random import randint

minItem = 0
maxItem = 1000-1
nbItems = 16
items = [None]*nbItems 
for item in range(nbItems):
   items[item] = randint(minItem,maxItem)
   
for item in range(nbItems):
   print(items[item],end=" ")
print()

for premier in range(nbItems-1):
   posMin = premier; 
   for item in range(premier + 1,nbItems):
      if items[item] < items[posMin]:
         posMin = item
   items[premier],items[posMin] =  items[posMin],items[premier]
   
for item in range(nbItems):
   print(items[item],end=" ")
print()
