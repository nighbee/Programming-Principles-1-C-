#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cin>>number;    
 vector<int> vec;
 vec.push_back(n1);
 vec.push_back(n2);     
 for(i=2;i<number;++i){    
  n3=n1+n2;    
  vec.push_back(n3);
  //cout<<n3<<" ";   
  n1=n2;    
  n2=n3;    
 }  
 cout<<vec[number-1];   
   return 0;  
   }  