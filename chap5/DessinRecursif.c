// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

// Définition des directions
#define GAUCHE 0
#define DROITE 1
#define HAUT   2
#define BAS    3
#define AUCUN  4 

// Dessin
void dessiner (int x, int y, int rayon, int v)
{
   Isn.drawCircle(x,y,rayon,0,0,0);
   if (rayon > 1) 
   {
      if (v != DROITE) 
      {
         dessiner(x + 3 * rayon / 2,y,rayon / 2,GAUCHE);
      }
      if (v != GAUCHE) 
      {
         dessiner(x - 3 * rayon / 2,y,rayon / 2,DROITE);
      }
      if (v != HAUT) 
      {
         dessiner(x,y - 3 * rayon / 2,rayon / 2,BAS);
      }
      if (v != BAS) 
      {
         dessiner(x,y + 3 * rayon / 2,rayon / 2,HAUT);
      }
   }
}

int main()
{
   Isn.initDrawing("DessinRécursif",10,10,400,400);
   dessiner(200,200,64,AUCUN);
}
