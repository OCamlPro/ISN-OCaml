// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

static int nombreDea (string s)
{
   int i, n;
   n = 0;
   for (i = 0; i <= (int)s.length() - 1;i = i + 1) 
   {
      if (s[i] == 'a') 
      {
         n = n + 1;
      }
   }
   return n;
}

int main() 
{
   cout << nombreDea("abracadabra") << endl;
}
