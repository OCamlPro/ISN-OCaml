// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
   int i,j;
   int r[400][400];
   int v[400][400];
   int b[400][400];
   ofstream f;

   // Allocations et initialisations
   for (i = 0; i <= 399; i = i + 1) 
   {
      for (j = 0; j <= 399; j = j + 1) 
      {
         r[i][j] = 255;
         v[i][j] = 255;
         b[i][j] = 255;
      }
   }

   // Le sol
   for (j = 250; j <= 300; j = j + 1)
   {
      for (i = 400 - j; i <= j; i = i + 1) 
      {
         if ((10 * (i+j-400) / (j-200) + 10 * (600-2*j) / (j-200))%2 == 0)
         {
            r[i][j] = 167;
            v[i][j] = 103;
            b[i][j] = 38;
         }
         else
         {
            r[i][j] = 255;
            v[i][j] = 255;
            b[i][j] = 0;
         }
      }
   }

   // Les murs latéraux
   for (i = 100; i <= 150; i = i + 1)
   {
      for (j = i; j <= 400-i; j = j + 1) 
      {
         r[i][j] = 240;
         v[i][j] = 195;
         b[i][j] = 0;
      }
   }
   for (i = 250; i <= 300; i = i + 1)
   {
      for (j = 400 - i;  j <= i; j = j + 1)
      {
         r[i][j] = 240;
         v[i][j] = 195;
         b[i][j] = 0;
      }
   }

   // Le plafond
   for (j = 100; j <= 150; j = j + 1)
   {
      for (i = j; i <= 400 - j; i = i + 1) 
      {
         r[i][j] = 246;
         v[i][j] = 220;
         b[i][j] = 18;
      }
   }

   // Le mur du fond 
   for (i = 150; i <= 250; i = i + 1)
   {
      for (j = 150; j <= 250; j = j + 1)
      {
         if (160 <= i && i <= 210 && 160 <= j && j <= 220)
         {
            r[i][j] = 119;
            v[i][j] = 181;
            b[i][j] = 254;
         }
         else 
         {
            r[i][j] = 255;
            v[i][j] = 244;
            b[i][j] = 141;
         }
      }
   }

   // Écriture du fichier ppm
   f.open("botticelli.ppm");
   f << "P3" << endl;
   f << "#" << endl;
   f << 400 << endl;
   f << 400 << endl;
   f << 255 << endl;
   for (j = 0; j <= 399; j = j + 1) 
   {
      for (i = 0; i <= 399; i = i + 1) 
      {
         f << r[i][j] << endl;
         f << v[i][j] << endl;
         f << b[i][j] << endl;
      }
   }
   f.close();
}
