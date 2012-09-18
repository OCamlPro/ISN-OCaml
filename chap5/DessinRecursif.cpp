// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

// Définition des directions
const int GAUCHE = 0;
const int DROITE = 1;
const int HAUT   = 2;
const int BAS    = 3;
const int AUCUN  = 4;

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
