// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int a;

void f (int x)
{ 
   cout << 2 * x << endl;
   a = 2 * x;
}

int main()
{
   int n;
   a = 3;
   n = 4;
   f(a + n);
}
