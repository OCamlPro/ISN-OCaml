// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;


int main()
{
   double ht,ttc,taux;
   cout << "Quel est le prix hors taxes ?" << endl;
   cin >> ht;
   cout << "Quel est le taux de TVA ?" << endl;
   cin >> taux;
   ttc = ht + ht * taux / 100;
   cout << "Le prix toutes taxes comprises est ";
   cout << ttc << endl;
}
