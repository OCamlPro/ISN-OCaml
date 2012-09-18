// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main()
{
   int n;
   double x;
   scanf("%lf", &x);
   n = 0;
   while (x > 1) 
   {
      x = x / 2;
      n = n + 1;
   }
   printf("%d\n",n);
}
