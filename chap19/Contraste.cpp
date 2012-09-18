// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int TAILLE_MAX = 1000;
int r[TAILLE_MAX][TAILLE_MAX];
int v[TAILLE_MAX][TAILLE_MAX];
int b[TAILLE_MAX][TAILLE_MAX];
int t[TAILLE_MAX][TAILLE_MAX];
int t1[TAILLE_MAX][TAILLE_MAX];

int main() 
{
   int i,j,l,h,max; 
   string s;
   ifstream f1;  
   ofstream f2;  

   f1.open("joconde.ppm");
   getline(f1,s);
   getline(f1,s);
   f1 >> l;
   f1 >> h;
   f1 >> max;
   for (j = 0; j <= h-1; j = j + 1) 
   {
      for (i = 0; i <= l-1; i = i + 1)
      {
         f1 >> r[i][j];
         f1 >> v[i][j];
         f1 >> b[i][j];
      }
   }
   f1.close();

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

   f2.open("jocondenoiretblanc.pgm");
   f2 << "P2" << endl;
   f2 << "#" << endl;
   f2 << l;
   f2 << " ";
   f2 << h << endl;
   f2 << max << endl;
   for (j = 0; j <= h-1; j = j + 1)
   {
      for (i = 0; i <= l-1; i = i + 1) 
      {
         f2 << t1[i][j] << endl;
      }
   }
   f2.close();
}
