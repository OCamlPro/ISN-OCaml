// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

static int quotient (int dividende, int diviseur)
{
   if (dividende < diviseur)
   {
      return 0;
   }
   else 
   {
      return (1 + quotient(dividende - diviseur, diviseur));
   }
}

int main() 
{
   printf("%d\n",quotient(17,3));
}
