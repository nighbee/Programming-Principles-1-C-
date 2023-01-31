#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; cin>>n;
    vector<int> a;
    vector<int> b;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x; a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x; cin>>x; b.push_back(x);
    }
    /*for(int i=0; i<n;i++){
        int u=a[i]+b[i];
        vec.push_back(u);
    }*/
    int k,s=0; cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]<=k && k<=b[i])
         s++;
    }
    cout<<s;
 }