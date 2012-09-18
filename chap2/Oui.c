// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

int main()
{
   int longueur, n;
   char s[] = "un oui ou un non ce n'est pourtant pas la même chose";
   longueur = strlen(s);
   n = 0;
   while (n <= longueur-3 && s[n] != 'o' && s[n+1] != 'u' && s[n+2] != 'i')
   {
      n = n + 1;
   }
   if (n > longueur - 3) 
   {
      printf("pas de oui\n");
   } 
   else 
   {
      printf("%d\n",n);
   }
}
