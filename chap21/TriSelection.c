// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ITEMS 16

int main() 
{
   int i,j,k,z; 
   int tab[MAX_ITEMS]; 
   srand( time(NULL) );
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      tab[i] = (int)floor((double)rand() / ((double)RAND_MAX + 1) * 1000);
   }
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      printf("%d ",tab[i]);
   }
   printf("\n");
   for (i = 0; i <= MAX_ITEMS - 2; i = i + 1)
   {
      k = i; 
      for (j = i + 1; j <= MAX_ITEMS - 1; j = j + 1)
      {
         if (tab[j] <= tab[k])
         {
            k = j;
         }
      }
      z = tab[i];
      tab[i] = tab[k]; 
      tab[k] = z;
   }
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      printf("%d ",tab[i]);
   }
   printf("\n");
}
