# Ces programmes sont sous licence CeCILL-B V1.
for mois in range(1,13):
   if mois == 2:
      nbj = 28
   else:
      nbj = 30 + (mois + (mois // 8)) % 2
   for jour in range(1,nbj+1):
      print(jour,"/",mois)
