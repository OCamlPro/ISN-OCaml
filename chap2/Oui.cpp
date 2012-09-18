// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

int main()
{
   int longueur, n;
   string s = "un oui ou un non ce n'est pourtant pas la même chose";
   longueur = s.length();
   n = 0;
   while (n <= longueur-3 && s[n] != 'o' && s[n+1] != 'u' && s[n+2] != 'i')
   {
      n = n + 1;
   }
   if (n > longueur - 3) 
   {
      cout << "pas de oui" << endl;
   } 
   else 
   {
      cout << n << endl;
   }
}
