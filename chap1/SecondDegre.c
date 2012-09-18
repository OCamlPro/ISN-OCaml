// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>

int main()
{
   double a,b,c,delta;
   scanf("%lf", &a);
   scanf("%lf", &b);
   scanf("%lf", &c);
   delta = b * b - 4 * a * c;
   if (delta < 0.0) 
   {
      printf("Pas de solution\n");
   }
   else
   {
      if (delta == 0.0) 
      {
         printf("Une solution : %lf\n",- b / (2 * a));
      }
      else
      {
         printf("Deux solutions : ");
         printf("%lf",(- b - sqrt(delta)) / (2 * a));
         printf(" et ");
         printf("%lf\n",(- b + sqrt(delta)) / (2 * a));
      }
   }
}
