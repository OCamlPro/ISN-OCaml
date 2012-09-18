// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

static void TirerUnTrait ()
{
   cout << endl;
   cout << "-----------------------------------------------" << endl;
   cout << endl;
}

int main() 
{
   cout << "Le vol en direction de ";
   cout << "Tokyo";
   cout << " décolera à ";
   cout << "9h00";
   TirerUnTrait();

   cout << "Le vol en direction de ";
   cout << "Sydney";
   cout << " décolera à ";
   cout << "9h30";
   TirerUnTrait();

   cout << "Le vol en direction de ";
   cout << "Toulouse";
   cout << " décolera à ";
   cout << "9h45";
   TirerUnTrait();
}
