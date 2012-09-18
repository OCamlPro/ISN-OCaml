// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

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
   printf("%d",a);
   printf("   ");
   printf("%d\n",b);
}
