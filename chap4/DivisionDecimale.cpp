// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <limits>

using namespace std;

static double divisionDecimale (int dividende, int diviseur) 
{
   double quotient;
   if (diviseur == 0) 
   {
      quotient = numeric_limits<double>::infinity();
   }
   else 
   {
      quotient = ((double) dividende) / ((double) diviseur);
   }
   return quotient;}

int main() 
{
   cout << divisionDecimale(2,3) << endl;
}
