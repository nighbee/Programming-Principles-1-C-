#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 int main (){
   string s;
   getline (cin,s);
   int b=1;
   char c=' ';
   for (int i=0;i<s.size();i++){
    if (s[i]==c)
     b++;
   }
   cout<<b;
 }