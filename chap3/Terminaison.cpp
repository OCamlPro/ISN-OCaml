// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int main()
{
   int s,i,j;
   bool p;
   s = 2;
   p = false;
   while (!p) 
   {
      for (i = 1; i <= s - 1; i = i + 1)
      {
         j = s - i;
         if (i * i == 25 * j * j) 
         {
            cout << i;
            cout << "  ";
            cout << j << endl;
            p = true;
         }
      }
      s = s + 1;
   }
}
