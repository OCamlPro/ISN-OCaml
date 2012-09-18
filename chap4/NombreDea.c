// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

static int nombreDea (const char s[])
{
   int i, n;
   n = 0;
   for (i = 0; i <= (int)strlen(s) - 1;i = i + 1) 
   {
      if (s[i] == 'a') 
      {
         n = n + 1;
      }
   }
   return n;
}

int main() 
{
   printf("%d\n",nombreDea("abracadabra"));
}
