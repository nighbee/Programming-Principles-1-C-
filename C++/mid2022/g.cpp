#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    vector<int> vec;
    int n,m,k; cin>>n>>m>>k;
    for(int i=1;i<m;i++){
        if(pow(i,2)>=n && pow(i,2)<=m)
         vec.push_back(pow(i, 2));
    }
    if(k==1)
     sort(vec.begin(), vec.end());
    if(k==-1)
     sort(vec.begin(),vec.end(), greater<int>());
    for(int i=0;i<vec.size(); i++)
     cout<<vec[i]<<" ";
 }