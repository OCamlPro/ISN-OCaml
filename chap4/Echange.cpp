// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int a,b;

void echange (int x, int y) 
{
   int z; 
   z = x;
   x = y;
   y = z;
}

int main()
{
   a = 4;
   b = 7;
   echange(a,b);
   cout << a;
   cout << "   ";
   cout << b << endl;
}
