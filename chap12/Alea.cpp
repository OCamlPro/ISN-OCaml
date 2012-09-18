// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
   int i;

   for (i = 1; i <= 1000; i = i + 1) 
   {
      cout << (char) floor((double)rand() / ((double)RAND_MAX + 1) * 26 + 'a');
   }
   cout << endl;
}
