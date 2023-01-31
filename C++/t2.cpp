#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
   int n; 
   cin>>n;
   vector<int> v;   
   vector<int> vec;
   for(int i=0;i<n;i++){
      int x; cin>>x;
      if(i>=0 && i<=n/2)
       vec.push_back(x);
      if (i>n/2&&i<=n)
       v.push_back(x);
   }
   for(int i=0;i<v.size();i++){
      int temp=v[i];
      int rev=0;
      while (temp != 0) {
         int rem=temp%10;
         rev= rev * 10 + rem;
            temp/= 10;
            }
            v.push_back(rev);
   }
   v.erase(v.begin(), v.end()+n/2);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
 }