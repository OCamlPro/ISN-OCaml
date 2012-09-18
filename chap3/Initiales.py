# Ces programmes sont sous licence CeCILL-B V1.
nom = input()
print(nom[0],end="")
for i in range(len(nom) - 1):
   if nom[i] == " ":
      print(nom[i + 1],end="")
print()
