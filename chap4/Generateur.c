// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

int valeur;
int periode;

//Cette fonction initialise le générateur
void origine(int graine)
{
   int graineTronquee;
   graineTronquee = graine % periode;
   valeur = graineTronquee;
}

//Cette fonction crée et renvoie un nombre pseudo-aléatoire 
//compris entre 0 et periode-1
int hasard()
{
   valeur = (15 * valeur + 3) % periode;
   return valeur;
}

// Cette fonction affiche periode valeurs pseudo-aléatoires
int main()
{
   int i;
   periode = 7;  
   origine(8);
   for (i = 1; i <= periode; i = i + 1)
   {
      printf("%d\n",hasard());
   }
}
