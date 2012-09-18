// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

static int puissance (int n)
{
   if (n == 0) 
   {
      return 1;
   }
   else
   {
      return (2 * puissance(n-1));
   }
}

int main() 
{
   printf("%d\n",puissance(10));
}
