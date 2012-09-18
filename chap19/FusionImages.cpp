// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int TAILLE_MAX = 1000;

int gris1[TAILLE_MAX][TAILLE_MAX];
int gris2[TAILLE_MAX][TAILLE_MAX];
int gris3[TAILLE_MAX][TAILLE_MAX];

int main()
{
   int i, j, largeur1, hauteur1, largeur2, hauteur2, largeur3, hauteur3, 
   valeur1, valeur2, max1, max2, max3;
   string s;
   ifstream f1;  
   ifstream f2;  
   ofstream f3;  

   // Lecture de la première image
   f1.open("maison1.pgm");
   getline(f1,s);
   getline(f1,s);
   f1 >> largeur1;
   f1 >> hauteur1;
   f1 >> max1;
   for (j = 0; j <= hauteur1 - 1; j = j + 1)
   {
      for (i = 0; i <= largeur1 - 1; i = i + 1)
      {
         f1 >> gris1[i][j];
      }
   }
   f1.close();

   // Lecture de la seconde image
   f2.open("maison2.pgm");
   getline(f2,s);
   getline(f2,s);
   f2 >> largeur2;
   f2 >> hauteur2;
   f2 >> max2;
   for (j = 0; j <= hauteur2 - 1; j = j + 1)
   {
      for (i = 0; i <= largeur2 - 1; i = i + 1)
      {
         f2 >> gris2[i][j];
      }
   }
   f2.close();

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
   f3.open("maisons.pgm");
   f3 << "P2" << endl;
   f3 << "#" << endl;
   f3 << largeur3;
   f3 << " ";
   f3 << hauteur3 << endl;
   f3 << max3 << endl;
   for (j = 0; j <= hauteur3 - 1; j = j + 1)
   {
      for (i = 0; i <= largeur3 - 1; i = i + 1)
      {
         f3 << gris3[i][j] << endl;
      }
   }
   f3.close();
}
