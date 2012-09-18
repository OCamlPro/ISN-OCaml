// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ITEMS 16

void fusion (int tab[],int x,int n,int y,int p,int tab1[],int i) 
{
   if (x <= n && (y > p  || tab[x] < tab[y])) 
   {
      tab1[i] = tab[x]; 
      fusion(tab,x+1,n,y,p,tab1,i+1);
   }
   else if (y <= p)
   {
      tab1[i] = tab[y]; 
      fusion(tab,x,n,y+1,p,tab1,i+1);
   }
}


void tri (int tab[], int n, int p) 
{
   int k,i;
   if (n < p)
   {
      k = (n + p)/2;
      tri(tab,n,k);
      tri(tab,k+1,p);
      int tab1[p+1];
      fusion(tab,n,k,k+1,p,tab1,n);
      for (i = n; i <= p; i = i + 1) 
      {
         tab[i] = tab1[i];
      }
   }
}

int main()
{
   int i;
   int tab[MAX_ITEMS]; 
   srand( time(NULL) );
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      tab[i] = (int)floor((double)rand() / ((double)RAND_MAX + 1) * 1000);
   }
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1) 
   {
      printf("%d ",tab[i]);
   }
   printf("\n");
   tri(tab,0,MAX_ITEMS - 1);
   for (i = 0; i <= MAX_ITEMS - 1; i = i + 1)
   {
      printf("%d ",tab[i]);
   }
   printf("\n");
}
