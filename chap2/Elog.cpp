// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int main()
{
   int n;
   double x;
   cin >> x;
   n = 0;
   while (x > 1) 
   {
      x = x / 2;
      n = n + 1;
   }
   cout << n << endl;
}
