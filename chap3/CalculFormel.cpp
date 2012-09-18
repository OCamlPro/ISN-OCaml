// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

const int DEGRE_MAX = 3;

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
      cout << t[i];
      if (i != 0) 
      {
         cout << " x";
         if (i != 1)
         {
            cout << "^";
            cout << i;
         }
      }
      if (i != DEGRE_MAX)
      {
         cout << " + ";
      }
   }
   cout << endl;


   //Calcul et affichage de sa valeur
   x = 5;
   y = 0;
   c = 1;
   for (i = 0; i <= DEGRE_MAX; i = i + 1) 
   {
      y = y + t[i] * c;
      c = c * x;
   }
   cout << y << endl;

   //Calcul de sa dérivée
   for (i = 0; i <= DEGRE_MAX - 1; i = i + 1)
   {
      u[i] = t[i+1] * (i + 1);
   }
   u[DEGRE_MAX] = 0;

   //Affichage de sa dérivée
   for (i = 0; i <= DEGRE_MAX; i = i + 1)
   {
      cout << u[i];
      if (i != 0) 
      {
         cout << " x";
         if (i != 1)
         {
            cout << "^";
            cout << i;
         }
      }
      if (i != DEGRE_MAX) 
      {
         cout << " + ";
      }
   }
   cout << endl;
}
