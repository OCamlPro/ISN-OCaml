// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

// Dans cette fonction "lettre" est censé ne contenir 
// qu'un seul caractère.
// On vérifie si ce caractère apparaît dans la chaîne "mot"

static bool appartient(char lettre, string mot)
{
   int i;
   bool resultat;
   resultat = false;
   for (i = 0; i <= (int)mot.length() - 1; i = i + 1) 
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
   string autorises, pseudo;
   bool pseudoOk;
   int i;
   autorises = "abcdefghijklmnopqrstuvwxyz";
   pseudoOk = false;
   // On redemande un pseudo tant qu'il n'est pas correct 
   while (!pseudoOk)
   {
      cout << "Entrer votre pseudo :" << endl;
      cin >> pseudo;
      pseudoOk = true;
      // On vérifie que chaque caractère du pseudo est autorisé
      for (i = 0; i <= (int)pseudo.length() - 1; i = i + 1) 
      {
         if (!appartient(pseudo[i],autorises))
         {
            pseudoOk=false;
         }
      }
   }
}
