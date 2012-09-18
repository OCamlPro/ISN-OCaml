// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main()
{
   double ht,ttc,taux;
   printf("Quel est le prix hors taxes ?\n");
   scanf("%lf", &ht);
   printf("Quel est le taux de TVA ?\n");
   scanf("%lf", &taux);
   ttc = ht + ht * taux / 100;
   printf("Le prix toutes taxes comprises est %.2lf\n",ttc);
}
