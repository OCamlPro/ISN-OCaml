// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ITEMS 16

int main()
{
   int i,b,x,y,s;
   int tab[MAX_ITEMS]; 
   int tab1[MAX_ITEMS]; 
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
   s = 1; 
   while (s <= MAX_ITEMS - 1)
   {
      b = 0;
      x = 0;
      y = s;
      for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
      {
         if ((x < b + s && y < b + 2*s && tab[x] < tab[y]) || (y == b + 2*s))
         {
            tab1[i] = tab[x];
            x = x + 1;
         }
         else
         {
            tab1[i] = tab[y]; 
            y = y + 1;
         }
         if (x == b + s && y == b + 2 * s) 
         {
            b = b + 2 * s; 
            x = b; 
            y = b + s;
         }
      }
      for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
      {
         tab[i] = tab1[i];
      }
      s = s * 2;
   }
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      printf("%d ",tab[i]);
   }
   printf("\n");
}
