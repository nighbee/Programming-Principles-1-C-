#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
   int s=1;
   while (n!=1){
      s=s*n;
      n--;
   }
   return s;
}
int factr(int n){
   if(n=0)
    return 1;
   return n*factr(n-1);
}
 int main (){
     int n; cin>>n;
     //cout<<fact(n)<<endl;
     cout<<factr(n);
 }