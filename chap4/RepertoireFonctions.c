// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>
#include <string.h>

#define MAX_LETTRES 200
#define TAILLE_REPERTOIRE 10

const char * nom[TAILLE_REPERTOIRE];
const char * tel[TAILLE_REPERTOIRE];
int nb;

void initialise () 
{
   nb = TAILLE_REPERTOIRE;
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
}

const char * recherche (const char s[]) 
{
   int i;
   const char * r;
   i = 0;
   while  (i < nb && strcmp(s,nom[i]) != 0)
   {
      i = i + 1;
   }
   if (i < nb) 
   {
      r = tel[i];
   } 
   else
   {
      r = "Inconnu";
   }
   return r;
}

int main() 
{
   char n[MAX_LETTRES];
   initialise ();
   scanf("%s", n);
   printf("%s\n",recherche(n));
}
