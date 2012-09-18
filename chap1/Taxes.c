// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main()
{
   double ht,ttc;
   printf("Quel est le prix hors taxes ?\n");
   scanf("%lf", &ht);
   ttc = ht + ht * 19.6 / 100;
   printf("Le prix toutes taxes comprises est %.2lf\n",ttc);
}
