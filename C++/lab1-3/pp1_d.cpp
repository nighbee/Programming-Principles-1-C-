#include <iostream>
#include <stdio.h>
using namespace std;
void reverse(int mas[], int l, int r){

}

int main() {
   int n;
   cin >>n;
   int mas[n];
   int l,r ;
   cin >>l>>r ;
   for (int i=0; i<=n; i++){
       cin>>mas[i];
      l=i;r = i;
      reverse(mas, l, r);
      cout<< mas[i]<< " ";
   }
}