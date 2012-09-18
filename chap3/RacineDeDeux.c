// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>

int main()
{
   int n;
   double epsilon, racine, racineprec;
   scanf("%d", &n);
   epsilon = pow(10,-n);
   racine = 1.0;
   racineprec = 2.0;
   while (fabs(racine - racineprec) > epsilon)
   {
      racineprec = racine;
      racine = 1.0 / (2.0 + racineprec);
   }
   printf("%.16lf\n",racine + 1.0);
}
