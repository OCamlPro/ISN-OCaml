// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <stdbool.h>

int main()
{
   int s,i,j;
   bool p;
   s = 2;
   p = false;
   while (!p) 
   {
      for (i = 1; i <= s - 1; i = i + 1)
      {
         j = s - i;
         if (i * i == 25 * j * j) 
         {
            printf("%d",i);
            printf("  ");
            printf("%d\n",j);
            p = true;
         }
      }
      s = s + 1;
   }
}
