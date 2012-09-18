// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

#define TAILLE_MAX    1000
#define TAILLE_TAMPON 200

int r[TAILLE_MAX][TAILLE_MAX];
int v[TAILLE_MAX][TAILLE_MAX];
int b[TAILLE_MAX][TAILLE_MAX];
int t[TAILLE_MAX][TAILLE_MAX];
int t1[TAILLE_MAX][TAILLE_MAX];

int main() 
{
   int i,j,l,h,max; 
   char s[TAILLE_TAMPON];
   FILE * f1;
   FILE * f2;  

   f1 = fopen("joconde.ppm","r");
   fscanf(f1,"%[^\n]\n", s);
   fscanf(f1,"%[^\n]\n", s);
   fscanf(f1,"%d", &l);
   fscanf(f1,"%d", &h);
   fscanf(f1,"%d", &max);
   for (j = 0; j <= h-1; j = j + 1) 
   {
      for (i = 0; i <= l-1; i = i + 1)
      {
         fscanf(f1,"%d",&r[i][j]);
         fscanf(f1,"%d",&v[i][j]);
         fscanf(f1,"%d",&b[i][j]);
      }
   }
   fclose(f1);

   for (i = 0; i <= l-1; i = i + 1)
   {
      for (j = 0; j <= h-1; j = j + 1)
      {
         t[i][j] = (r[i][j] + b[i][j] + v[i][j])/3;
      }
   }

   for (i = 0; i <= l-1; i = i + 1) 
   {
      for (j = 0; j <= h-1; j = j + 1)
      {
         if (t[i][j] <= max/5) 
         {
            t1[i][j] = 0;
         } 
         else 
         {
            t1[i][j] = max;
         }
      }
   }

   f2 = fopen("jocondenoiretblanc.pgm","w");
   fprintf(f2,"P2\n");
   fprintf(f2,"#\n");
   fprintf(f2,"%d",l);
   fprintf(f2," ");
   fprintf(f2,"%d\n",h);
   fprintf(f2,"%d\n",max);
   for (j = 0; j <= h-1; j = j + 1)
   {
      for (i = 0; i <= l-1; i = i + 1) 
      {
         fprintf(f2,"%d\n",t1[i][j]);
      }
   }
   fclose(f2);
}
