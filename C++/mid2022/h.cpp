#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; cin>>n;
    vector<int> s;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    cout<<s[s.size()-2]*s[s.size()-1];
 }