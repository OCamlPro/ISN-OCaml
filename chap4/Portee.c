// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

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
   printf("%lf\n",v(t));
}
