// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

#define bool char
#define true 1
#define false 0

#define MAX_BITS 10

int main()
{
   int i;
   bool a,b,c;
   bool n[MAX_BITS];
   bool p[MAX_BITS];
   bool r[MAX_BITS + 1];

   n[0] = true;
   n[1] = true;
   n[2] = true;
   n[3] = false;
   n[4] = false;
   n[5] = false;
   n[6] = false;
   n[7] = false;
   n[8] = false;
   n[9] = false;

   p[0] = false;
   p[1] = true;
   p[2] = false;
   p[3] = false;
   p[4] = false;
   p[5] = false;
   p[6] = false;
   p[7] = false;
   p[8] = false;
   p[9] = false;
   c = false;
   for (i = 0; i <= MAX_BITS - 1; i = i + 1)
   {
      a = n[i];
      b = p[i];
      r[i] = (a && !b && !c) || (!a && b && !c)
	|| (!a && !b && c) || (a && b && c);
      c = (a && b) || (b && c) || (a && c);
   }
   r[MAX_BITS] = c;
   printf(" "); 
   for (i = 0; i <= MAX_BITS - 1; i = i + 1)
   {
      if (n[MAX_BITS-i-1]) 
      {
         printf("1");
      } 
      else
      {
         printf("0");
      }
   }
   printf("\n");
   printf(" "); 
   for (i = 0; i <= MAX_BITS - 1; i = i + 1) 
   {
      if (p[MAX_BITS-i-1]) 
      {
         printf("1");
      } 
      else 
      {
         printf("0");
      }
   }
   printf("\n");
   for (i = 0; i <= MAX_BITS; i = i + 1) 
   {
      if (r[MAX_BITS-i]) 
      {
         printf("1");
      } 
      else 
      {
         printf("0");
      }
   }
   printf("\n");
   return 0;
}
