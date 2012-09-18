// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int TAILLE_REPERTOIRE = 10;

int main() 
{
   string nom[TAILLE_REPERTOIRE];
   string tel[TAILLE_REPERTOIRE];
   int i;
   string s;

   ifstream f;
   f.open ("repertoire.txt", ifstream::in);
   for (i = 0; i <= TAILLE_REPERTOIRE - 1; i = i + 1) 
   {
      f >> nom[i];
      f >> tel[i];
   }
   f.close();
   cin >> s;
   i = 0;
   while (i < TAILLE_REPERTOIRE && s.compare(nom[i]) != 0)
   {
      i = i + 1;
   }
   if (i < TAILLE_REPERTOIRE)
   {
      cout << tel[i] << endl;
   }
   else 
   {
      cout << "Inconnu" << endl;
   }
}
