// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int a[1];
int b[1];

void echange (int x[], int y[]) 
{
   int z; 
   z = x[0];
   x[0] = y[0];
   y[0] = z;
}

int main()
{
   a[0] = 4;
   b[0] = 7;
   echange(a,b);
   printf("%d",a[0]);
   printf("   ");
   printf("%d\n",b[0]);
}
