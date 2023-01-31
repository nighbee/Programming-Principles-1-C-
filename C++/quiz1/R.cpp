#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 
int main(){ 
   long long n;
   cin>>n;
   int sum=0,mul=1; 
   while(n!=0){
      sum= sum+n%10;
      mul=mul*(n%10);
      n=n/10;
   }
   cout<<mul+sum;
}