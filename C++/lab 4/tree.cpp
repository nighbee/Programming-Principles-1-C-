#include <iostream>
#include <string>
using namespace std;

int main(void) {
   char cTree;
   int iSize;
   int iSpace;
   int iChars;
   cin >> iSize;
   cTree='*';

   for(int i = 0; i < iSize; i++){
      iSpace = (iSize-i)-1;
      iChars = (2*i)+1;
      string sSpace(iSpace, '.');
      string sTree(iChars, cTree);
      cout << sSpace << sTree << sSpace << endl;
   }

   return 0;
}