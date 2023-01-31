#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x; vec.push_back(x);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    vector<int> g; 
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++){
        if(vec[i]!=vec[j])
         g.push_back(__gcd(vec[i],vec[j]));
     }
     sort(g.begin(),g.end(),greater<int>());
    cout<<g[0];
 }
