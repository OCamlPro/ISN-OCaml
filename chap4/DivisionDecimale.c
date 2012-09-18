// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

// Ces constantes ne sont définies qu'en C99 toutefois 
// ces definitions engendrent des warnings à la compilation
#define POSITIVE_INFINITY ((double)1/0)
#define NEGATIVE_INFINITY (-POSITIVE_INFINITY)
#define NOT_A_NUMBER      (0*POSITIVE_INFINITY)

static double divisionDecimale (int dividende, int diviseur) 
{
   double quotient;
   if (diviseur == 0) 
   {
      quotient = POSITIVE_INFINITY;
   }
   else 
   {
      quotient = ((double) dividende) / ((double) diviseur);
   }
   return quotient;}

int main() 
{
   printf("%lf\n",divisionDecimale(2,3));
}
