// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i;

   for (i = 1; i <= 1000; i = i + 1) 
   {
      printf("%c", (char) floor((double)rand() / ((double)RAND_MAX + 1) * 26 + 'a') );
   }
   printf("\n");
}
