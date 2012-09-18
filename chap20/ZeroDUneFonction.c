// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, m, e;
   e = 1E-5;
   a = 2.0;
   b = 4.0;
   m = (a + b) / 2;
   while (b - a > e && fabs(sin(m)) > e) 
   {
      if (sin(a) * sin(m) <= 0) 
      {
         b = m;
      }   
      else
      { 
         a = m;
      }
      m = (a + b) / 2;
   }
   printf("%lf\n",m);
}
