// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double alpha,principale,n;
   cin >> alpha;
   n = floor(alpha / (2 * M_PI));
   principale = alpha - 2 * n * M_PI;
   if (principale > M_PI)
   {
      principale = principale - 2 * M_PI;
   }
   cout << principale << endl;
}
