// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>

using namespace std;

const int MAX_BITS = 10;

int main()
{
   int i;
   bool a,b,c;
   bool n[MAX_BITS];
   bool p[MAX_BITS];
   bool r[MAX_BITS + 1];
   n[0] = true;
   n[1] = true;
   n[2] = true;
   n[3] = false;
   n[4] = false;
   n[5] = false;
   n[6] = false;
   n[7] = false;
   n[8] = false;
   n[9] = false;
   p[0] = false;
   p[1] = true;
   p[2] = false;
   p[3] = false;
   p[4] = false;
   p[5] = false;
   p[6] = false;
   p[7] = false;
   p[8] = false;
   p[9] = false;
   c = false;
   for (i = 0; i <= MAX_BITS - 1; i = i + 1)
   {
      a = n[i];
      b = p[i];
      r[i] = (a && !b && !c) || (!a && b && !c) || (!a && !b && c) || (a && b && c);
      c = (a && b) || (b && c) || (a && c);
   }
   r[MAX_BITS] = c;
   cout << " "; 
   for (i = 0; i <= MAX_BITS - 1; i = i + 1)
   {
      if (n[MAX_BITS-i+1]) 
      {
         cout << "1";
      } 
      else
      {
         cout << "0";
      }
   }
   cout << endl;
   cout << " "; 
   for (i = 0; i <= MAX_BITS - 1; i = i + 1) 
   {
      if (p[MAX_BITS-i+1]) 
      {
         cout << "1";
      } 
      else 
      {
         cout << "0";
      }
   }
   cout << endl;
   for (i = 0; i <= MAX_BITS; i = i + 1) 
   {
      if (r[MAX_BITS-i]) 
      {
         cout << "1";
      } 
      else 
      {
         cout << "0";
      }
   }
   cout << endl;
}
