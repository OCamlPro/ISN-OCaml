// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
   double a,b,c,delta;
   // Voici un programme qui résout l'équation du second degré 
   //a x^2 + b x + c = 0
   cin >> a;
   cin >> b;
   cin >> c;
   // Test du coefficient dominant
   if (a == 0.0) 
   {
      cout << "Pas une équation du second degré" << endl;
   }
   else 
   {
      // Calcul du discriminant
      delta = b * b - 4 * a * c;
      // Affichage des solutions
      if (delta < 0.0)
      {
         cout << "Pas de solution" << endl;
      }
      else
      {
         if (delta == 0.0)
         {
            cout << "Une solution : ";
            cout << - b / (2 * a) << endl;
         }
         else
         {
            cout << "Deux solutions : ";
            cout << (- b - sqrt(delta)) / (2 * a);
            cout << " et ";
            cout << (- b + sqrt(delta)) / (2 * a) << endl;
         }
      }
   }
}
