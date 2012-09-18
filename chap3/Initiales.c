// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

#define MAX_LETTRES 200

int main()
{
   char nom[MAX_LETTRES];
   int i;
   scanf("%[^\n]",nom);
   printf("%c",nom[0]);
   for (i = 0; i <= (int)strlen(nom) - 2; i = i + 1)
   {
      if (nom[i] == ' ')
      {
         printf("%c",nom[i + 1]);
      }
   }
   printf("\n");
}
