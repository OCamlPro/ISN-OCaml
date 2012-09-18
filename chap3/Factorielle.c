// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main() 
{
   int n, i, f;
   scanf("%d", &n);
   f = 1;
   for (i = 1; i <= n; i = i + 1) 
   {
      f = f * i;
   }
   printf("%d\n",f);
}
