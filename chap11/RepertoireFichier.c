// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

#define TAILLE_REPERTOIRE 10
#define MAX_LETTRES       20

int main() 
{
   char nom[TAILLE_REPERTOIRE][MAX_LETTRES + 1];
   char tel[TAILLE_REPERTOIRE][MAX_LETTRES + 1];
   int i;
   char s[MAX_LETTRES + 1];

   FILE * f = fopen("repertoire.txt","r");
   for (i = 0; i <= TAILLE_REPERTOIRE - 1; i = i + 1) 
   {
      fscanf(f,"%20[^\n]",nom[i]);
      fscanf(f,"%20[^\n]",tel[i]);
   }
   fclose(f);
   scanf("%20s", s);
   i = 0;
   while (i < TAILLE_REPERTOIRE && strcmp(s,nom[i]) != 0)
   {
      i = i + 1;
   }
   if (i < TAILLE_REPERTOIRE)
   {
      printf("%s\n",tel[i]);
   }
   else 
   {
      printf("Inconnu\n");
   }
}
