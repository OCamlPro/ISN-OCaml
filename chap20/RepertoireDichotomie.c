// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

#define TAILLE_REPERTOIRE 10
#define MAX_LETTRES       200

int main()
{
   const char * nom[TAILLE_REPERTOIRE];
   const char * tel[TAILLE_REPERTOIRE];
   int i,j,k;
   char s[MAX_LETTRES];

   nom[0] = "Alice";
   tel[0] = "0606060606";
   nom[1] = "Bob";
   tel[1] = "0606060607";
   nom[2] = "Charles";
   tel[2] = "0606060608";
   nom[3] = "Djamel";
   tel[3] = "0606060609";
   nom[4] = "Etienne";
   tel[4] = "0606060610";
   nom[5] = "Frédérique";
   tel[5] = "0606060611";
   nom[6] = "Guillaume";
   tel[6] = "0606060612";
   nom[7] = "Hector";
   tel[7] = "0606060613";
   nom[8] = "Isabelle";
   tel[8] = "0606060614";
   nom[9] = "Jérôme";
   tel[9] = "0606060615";

   scanf("%s", s);
   i = 0;
   j = TAILLE_REPERTOIRE - 1;
   while (i < j) 
   {
      k = (i + j) / 2; 
      if (strcmp(s,nom[k]) == 0)
      {
         i = k; 
         j = k;
      }
      else 
      {
         if (strcmp(s,nom[k]) < 0)
         {
            j = k-1;
         }
         else 
         {
            i = k+1;
         }
      }
   }
   if (strcmp(s,nom[i]) == 0) 
   {
      printf("%s\n",tel[i]);
   }
   else
   {
      printf("Inconnu\n");
   }
}
