// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

#define DEGRE_MAX 3

int main()
{
   int i;
   double x,y,c;
   double t[DEGRE_MAX + 1];
   double u[DEGRE_MAX + 1]; 

   t[3] = 2;
   t[2] = 8;
   t[1] = 7;
   t[0] = 3;

   //Affichage de la fonction
   for (i = 0; i <= DEGRE_MAX; i = i + 1)
   {
      printf("%.1lf",t[i]);
      if (i != 0) 
      {
         printf(" x");
         if (i != 1)
         {
            printf("^");
            printf("%d",i);
         }
      }
      if (i != DEGRE_MAX)
      {
         printf(" + ");
      }
   }
   printf("\n");


   //Calcul et affichage de sa valeur
   x = 5;
   y = 0;
   c = 1;
   for (i = 0; i <= DEGRE_MAX; i = i + 1) 
   {
      y = y + t[i] * c;
      c = c * x;
   }
   printf("%.1lf\n",y);

   //Calcul de sa dérivée
   for (i = 0; i <= DEGRE_MAX - 1; i = i + 1)
   {
      u[i] = t[i+1] * (i + 1);
   }
   u[DEGRE_MAX] = 0;

   //Affichage de sa dérivée
   for (i = 0; i <= DEGRE_MAX; i = i + 1)
   {
      printf("%.1lf",u[i]);
      if (i != 0) 
      {
         printf(" x");
         if (i != 1)
         {
            printf("^");
            printf("%d",i);
         }
      }
      if (i != DEGRE_MAX) 
      {
         printf(" + ");
      }
   }
   printf("\n");
}
