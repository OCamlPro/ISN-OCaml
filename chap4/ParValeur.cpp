// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int i;

int h (int j)
{ 
   int k;
   j = j + 1;
   cout << i << endl;
   cout << j << endl;
   k = j + i;
   i = 5;
   return k;
}

int main()
{
   int m, n;
   m = 1;
   i = 10;
   cout << m << endl;
   n = h(m);
   cout << m << endl;
   cout << n << endl;
   cout << i << endl;
}
