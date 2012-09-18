# Ces programmes sont sous licence CeCILL-B V1.
def nombreDea (chaine):
   nombre = 0
   for caractere in chaine:
      if caractere == "a":
         nombre = nombre + 1
   return nombre

print( nombreDea("abracadabra") )
