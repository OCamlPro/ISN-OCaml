// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

int main()
{
   string nom;
   int i;
   getline(cin,nom);
   cout << nom[0];
   for (i = 0; i <= (int)nom.length() - 2; i = i + 1)
   {
      if (nom[i] == ' ')
      {
         cout << nom[i + 1];
      }
   }
   cout << endl;
}
