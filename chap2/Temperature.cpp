// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int main() 
{
   int jour;
   double somme, temperature;
   somme = 0;
   for (jour = 1; jour <= 7; jour = jour + 1) 
   {
      cin >> temperature;
      somme = somme + temperature;
   }
   cout << (somme / 7.0) << endl;
}
