// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>

int main()
{
   double alpha,principale,n;
   scanf("%lf", &alpha);
   n = floor(alpha / (2 * M_PI));
   principale = alpha - 2 * n * M_PI;
   if (principale > M_PI) 
   {
      principale = principale - 2 * M_PI;
   }
   printf("%lf\n",principale);
}
