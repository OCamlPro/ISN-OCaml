// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;
   double epsilon, racine, racineprec;
   cin >> n;
   epsilon = pow(10,-n);
   racine = 1.0;
   racineprec = 2.0;
   while (abs(racine - racineprec) > epsilon)
   {
      racineprec = racine;
      racine = 1.0 / (2.0 + racineprec);
   }
   cout.precision(17);
   cout << racine + 1.0 << endl;
}
