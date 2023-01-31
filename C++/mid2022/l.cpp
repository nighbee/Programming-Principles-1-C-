#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i,j,a[n][m],s=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int l; cin>>l;
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          if(a[i][j]>l)
           s++;  
        }
    }
    if(s>0)
     cout<<"Penalty!";
     else
      cout<<"No penalty for today.";
}