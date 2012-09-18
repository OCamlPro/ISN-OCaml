// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int i;

int h (int j)
{ 
   int k;
   j = j + 1;
   printf("%d\n",i);
   printf("%d\n",j);
   k = j + i;
   i = 5;
   return k;
}

int main()
{
   int m, n;
   m = 1;
   i = 10;
   printf("%d\n",m);
   n = h(m);
   printf("%d\n",m);
   printf("%d\n",n);
   printf("%d\n",i);
}
