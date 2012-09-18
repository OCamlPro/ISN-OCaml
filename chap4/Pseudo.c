// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LETTRES 200

// Dans cette fonction "lettre" est censé ne contenir 
// qu'un seul caractère.
// On vérifie si ce caractère apparaît dans la chaîne "mot"

bool appartient(char lettre, const char mot[])
{
   int i;
   bool resultat;
   resultat = false;
   for (i = 0; i <= (int)strlen(mot) - 1; i = i + 1) 
   {
      if (mot[i] == lettre)
      {
         resultat = true;
      }
   }
   return resultat;
}

int main()
{
   char pseudo[MAX_LETTRES];
   bool pseudoOk;
   int i;
   const char autorises[] = "abcdefghijklmnopqrstuvwxyz";
   pseudoOk = false;
   // On redemande un pseudo tant qu'il n'est pas correct 
   while (!pseudoOk)
   {
      printf("Entrer votre pseudo :\n");
      scanf("%s", pseudo);
      pseudoOk = true;
      // On vérifie que chaque caractère du pseudo est autorisé
      for (i = 0; i <= (int)strlen(pseudo) - 1; i = i + 1) 
      {
         if (!appartient(pseudo[i],autorises))
         {
            pseudoOk=false;
         }
      }
   }
}
