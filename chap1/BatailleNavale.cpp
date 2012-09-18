// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int main() 
{
   int a;
   int b;
   int x;
   int y;
   a = 4;
   b = 7;
   cout << "À vous de jouer" << endl;
   cin >> x;
   cin >> y;
   if (x == a && y == b) {
      cout << "Coulé" << endl;
   }
   else 
   { 
      if (x == a || y == b) 
      {
         cout << "En vue" << endl;
      }
      else 
      { 
         cout << "À l'eau" << endl;
      }
   }
}
