// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

#define TAILLE_MAX 1000
#define MAX_TAMPON 200

int gris1[TAILLE_MAX][TAILLE_MAX];
int gris2[TAILLE_MAX][TAILLE_MAX];
int gris3[TAILLE_MAX][TAILLE_MAX];

int main()
{
   int i, j, largeur1, hauteur1, largeur2, hauteur2, largeur3, hauteur3, 
   valeur1, valeur2, max1, max2, max3;
   char s[MAX_TAMPON];
   FILE * f1;  
   FILE * f2;  
   FILE * f3;  

   // Lecture de la première image
   f1 = fopen("maison1.pgm","r");
   fscanf(f1,"%[^\n]\n", s);
   fscanf(f1,"%[^\n]\n", s);
   fscanf(f1,"%d", &largeur1);
   fscanf(f1,"%d", &hauteur1);
   fscanf(f1,"%d", &max1);
   for (j = 0; j <= hauteur1 - 1; j = j + 1)
   {
      for (i = 0; i <= largeur1 - 1; i = i + 1)
      {
         fscanf(f1,"%d",&gris1[i][j]);
      }
   }
   fclose(f1);

   // Lecture de la seconde image
   f2 = fopen("maison2.pgm","r");
   fscanf(f2,"%[^\n]\n", s);
   fscanf(f2,"%[^\n]\n", s);
   fscanf(f2,"%d", &largeur2);
   fscanf(f2,"%d", &hauteur2);
   fscanf(f2,"%d", &max2);
   for (j = 0; j <= hauteur2 - 1; j = j + 1)
   {
      for (i = 0; i <= largeur2 - 1; i = i + 1)
      {
         fscanf(f2,"%d",&gris2[i][j]);
      }
   }
   fclose(f2);

   // Calcul des dimensions maximales des deux images
   if (largeur1 >= largeur2)
   {
      largeur3 = largeur1;
   } 
   else 
   {
      largeur3 = largeur2;
   }
   if (hauteur1 >= hauteur2) 
   {
      hauteur3 = hauteur1;
   } 
   else 
   {
      hauteur3 = hauteur2;
   }

   // Calcul du niveau de gris maximal
   if (max1 >= max2)
   {
      max3 = max1;
   } 
   else 
   {
      max3 = max2;
   }

   // Calcul de l'image fusionnée
   for (j = 0; j <=  hauteur3 - 1; j = j + 1) 
   {
      for (i = 0; i <= largeur3 - 1; i = i + 1) 
      {
         if (i < largeur1 && j < hauteur1) 
         {
            valeur1 = max3 * gris1[i][j] / max1;
         } 
         else 
         {
            valeur1 = max3;
         }
         if (i < largeur2 && j < hauteur2) 
         {
            valeur2 = max3 * gris2[i][j] / max2;
         } 
         else 
         {
            valeur2 = max3;
         }
         if (valeur1 < valeur2) 
         {
            gris3[i][j] = valeur1;
         } 
         else 
         {
            gris3[i][j] = valeur2;
         }
      }
   }

   // Écriture de l'image fusionnée
   f3 = fopen("maisons.pgm","w");
   fprintf(f3,"P2\n");
   fprintf(f3,"#\n");
   fprintf(f3,"%d",largeur3);
   fprintf(f3," ");
   fprintf(f3,"%d\n",hauteur3);
   fprintf(f3,"%d\n",max3);
   for (j = 0; j <= hauteur3-1; j = j + 1)
   {
      for (i = 0; i <= largeur3-1; i = i + 1) 
      {
         fprintf(f3,"%d\n",gris3[i][j]);
      }
   }
   fclose(f3);
}
