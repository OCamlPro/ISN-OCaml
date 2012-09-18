// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;


int main()
{
   double ht,ttc;
   cout << "Quel est le prix hors taxes ?" << endl;
   cin >> ht;
   ttc = ht + ht * 19.6 / 100;
   cout << "Le prix toutes taxes comprises est ";
   cout << ttc << endl;
}
