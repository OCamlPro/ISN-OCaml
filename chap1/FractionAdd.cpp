// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int main() 
{
   int a,b,c,d;
   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;
   if (b == 0 || d == 0)
      cout << "Dénominateur nul interdit !" << endl;
   else 
   {
      cout << a * d + c * b << endl;
      cout << b * d << endl;
   }
}
