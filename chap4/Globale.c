// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int a;

void f (int x)
{ 
   printf("%d\n",2 * x);
   a = 2 * x;
}

int main()
{
   int n;
   a = 3;
   n = 4;
   f(a + n);
}
