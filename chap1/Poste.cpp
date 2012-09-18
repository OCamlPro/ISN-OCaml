// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

int main()
{
   string type; 
   int poids;
   cin >> type;
   cin >> poids; 
   if (type.compare("verte") == 0)
   {
      if (poids <= 20)
      {
         cout << 0.57 << endl;
      }
      else 
      {
         if (poids <= 50)
         {
            cout << 0.95 << endl;
         }
         else
         {
            if (poids <= 100)
            {
               cout << 1.40 << endl;
            }
         }
      }
   }
   else
   {
      if (type.compare("prioritaire") == 0)
      {
         if (poids <= 20)
         {
            cout << 0.60 << endl;
         }
         else
         {
            if (poids <= 50)
            {
               cout << 1.00 << endl;
            }
            else
            {
               if (poids <= 100)
               {
                  cout << 1.45 << endl;
               }
            }
         }
      }
      else 
      {
         if (type.compare("ecopli") == 0) 
         {
            if (poids <= 20) 
            {
               cout << 0.55 << endl;
            }
            else 
            {
               if (poids <= 50)
               {
                  cout << 0.78 << endl;
               }
               else 
               {
                  if (poids <= 100) 
                  {
                     cout << 1.00 << endl;
                  }
               }
            }
         }
      }
   }
}
