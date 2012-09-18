# Ces programmes sont sous licence CeCILL-B V1.
def appartient(lettre,mot):
   """
   Dans cette fonction "lettre" est censé ne contenir 
   qu'un seul caractère.
   On vérifie si ce caractère apparaît dans la chaîne "mot"
   """
   resultat = False
   for caractere in mot:
      if caractere == lettre:
         resultat = True
   return resultat

autorises = "abcdefghijklmnopqrstuvwxyz"
pseudoOk = False
# On redemande un pseudo tant qu'il n'est pas correct 
while not pseudoOk:
   print("Entrer votre pseudo :")
   pseudo = input()
   pseudoOk = pseudo != ""
# On vérifie que chaque caractère du pseudo est autorisé
   for caractere in pseudo:
      if not appartient(caractere,autorises):
         pseudoOk = False
