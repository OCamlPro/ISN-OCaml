// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

#define MAX_TEXTE 200

int main()
{
   char type[MAX_TEXTE]; 
   int poids;
   scanf("%s", type);
   scanf("%d", &poids); 
   if (strcmp(type,"verte") == 0)
   {
      if (poids <= 20)
      {
         printf("%.2lf\n",0.57);
      }
      else 
      {
         if (poids <= 50)
         {
            printf("%.2lf\n",0.95);
         }
         else
         {
            if (poids <= 100)
            {
               printf("%.2lf\n",1.40);
            }
         }
      }
   }
   else
   {
      if (strcmp(type,"prioritaire") == 0)
      {
         if (poids <= 20)
         {
            printf("%.2lf\n",0.60);
         }
         else
         {
            if (poids <= 50)
            {
               printf("%.2lf\n",1.00);
            }
            else
            {
               if (poids <= 100)
               {
                  printf("%.2lf\n",1.45);
               }
            }
         }
      }
      else 
      {
         if (strcmp(type,"ecopli") == 0) 
         {
            if (poids <= 20) 
            {
               printf("%.2lf\n",0.55);
            }
            else 
            {
               if (poids <= 50)
               {
                  printf("%.2lf\n",0.78);
               }
               else 
               {
                  if (poids <= 100) 
                  {
                     printf("%.2lf\n",1.00);
                  }
               }
            }
         }
      }
   }
}
