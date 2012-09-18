// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

static int quotient (int dividende, int diviseur)
{
   if (dividende < diviseur)
   {
      return 0;
   }
   else 
   {
      return (1 + quotient(dividende - diviseur, diviseur));
   }
}

int main() 
{
   cout << quotient(17,3) << endl;
}
