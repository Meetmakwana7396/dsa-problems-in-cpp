#include <iostream>
using namespace std;

int main()
{
   char x;
   cout << "Enter Character: ";
   cin >> x;
   int ascii = x;

   if (ascii >= 97 && ascii <= 122)
   {
      cout << ascii;
      cout << "Lower Case\n";
   }
   else if (ascii >= 65 && ascii <= 90)
   {
      cout << ascii;
      cout << "Upper Case\n";
   }
   else if (ascii >= 48 && ascii <= 57)
   {
      cout << ascii;
      cout << "Numericl\n";
   }
   else
   {
      cout << ascii;
      cout << "Well.. I don't know this..\n";
   }
}