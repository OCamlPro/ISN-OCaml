// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

const int TAILLE_REPERTOIRE = 10;

int main()
{
   string nom[TAILLE_REPERTOIRE];
   string tel[TAILLE_REPERTOIRE];
   int i,j,k;
   string s;

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

   cin >> s;
   i = 0;
   j = TAILLE_REPERTOIRE - 1;
   while (i < j) 
   {
      k = (i + j) / 2; 
      if (s.compare(nom[k]) == 0)
      {
         i = k; 
         j = k;
      }
      else 
      {
         if (s.compare(nom[k]) < 0)
         {
            j = k-1;
         }
         else 
         {
            i = k+1;
         }
      }
   }
   if (s.compare(nom[k]) == 0) 
   {
      cout << tel[i] << endl;
   }
   else
   {
      cout << "Inconnu" << endl;
   }
}
