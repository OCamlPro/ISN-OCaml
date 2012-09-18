// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

static int puissance (int n)
{
   if (n == 0) 
   {
      return 1;
   }
   else
   {
      return (2 * puissance(n-1));
   }
}

int main() 
{
   cout << puissance(10) << endl;
}
