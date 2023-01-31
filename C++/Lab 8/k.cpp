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
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end(), greater<int>());
    int k; cin>>k; int s=0;
    for(int i=0;i<k;i++){
        s=s+vec[i];
    }
    cout<<s;
 }