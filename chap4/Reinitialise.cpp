// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

int x;

void reinitialise ()
{ 
   x = 0;
}

int main()
{
   x = 3;
   x = 5;
   reinitialise();
   x = 7;
   reinitialise();
   x = 4;
}
