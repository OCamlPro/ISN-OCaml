// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() 
{
   int n, i, f;
   cin >> n;
   f = 1;
   for (i = 1; i <= n; i = i + 1) 
   {
      f = f * i;
   }
   cout << f << endl;
}
