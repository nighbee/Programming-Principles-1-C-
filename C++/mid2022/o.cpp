#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    long long n,m,i,j; cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
     for( j=0;j<m;j++){
        cin>>a[i][j];
     }
     vector<int> vec;
     int s=0;
     for( i=0;i<n;i++){
        s=0;
      for( j=0;j<m;j++) {
        s=s+a[i][j];
      }   
       vec.push_back(s);
     }
     for(i=0;i<vec.size();i++)
      cout<<vec[i]/m<<" ";
 } 
