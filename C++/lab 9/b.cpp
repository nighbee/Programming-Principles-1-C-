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
     vector<int> ev;
     vector<int> od;
     int a[n];
     for(int i=0;i<n;i++){
      cin>>a[i];
      if (a[i]%2==0 )
        ev.push_back(a[i]);
      if ( a[i]%2==1) 
       od.push_back(a[i]);
     } 
     sort(ev.begin(), ev.end(), greater<int>());
     sort(od.begin(), od.end());
     vector<int> vec=ev;
     for(int i=0;i<od.size();i++){
      vec.push_back(od[i]);
     }
     for(int i=0;i<n;i++)
      cout<<vec[i]<<" ";
     }
