// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int main() 
{
   int a,b,c,d;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   scanf("%d", &d);
   if (b == 0 || d == 0)
   {
      printf("Dénominateur nul interdit !\n");
   }
   else
   {
      printf("%d\n",a * c);
      printf("%d\n",b * d);
   }
}
