// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>

int main() 
{
   double a,b,c,delta;
   // Voici un programme qui résout l'équation du second degré 
   //a x^2 + b x + c = 0
   scanf("%lf", &a);
   scanf("%lf", &b);
   scanf("%lf", &c);
   // Test du coefficient dominant
   if (a == 0.0) 
   {
      printf("Pas une équation du second degré\n");
   }
   else 
   {
      // Calcul du discriminant
      delta = b * b - 4 * a * c;
      // Affichage des solutions
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
}
