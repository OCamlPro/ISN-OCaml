// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int y,z;

double v (double x) 
{ 
   double u;
   u = x * x;
   z = (int)x;
   return u;
}

int main() 
{
   double t;
   y = 4;
   t = 1 / (double)y;
   cout << v(t) << endl;
}
