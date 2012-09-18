// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a,b,c,delta;
   cin >> a;
   cin >> b;
   cin >> c;
   delta = b * b - 4 * a * c;
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
