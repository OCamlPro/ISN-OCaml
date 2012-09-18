// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main() 
{
   int jour;
   double somme, temperature;
   somme = 0;
   for (jour = 1; jour <= 7; jour = jour + 1) 
   {
      scanf("%lf", &temperature);
      somme = somme + temperature;
   }
   printf ("%lf\n",somme / 7.0);
}
