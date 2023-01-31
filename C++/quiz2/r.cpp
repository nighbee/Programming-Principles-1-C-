#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string s; 
    cin>>s;
    int u=s.size();
    char m; cin>>m;
    vector<int> vec;
    for(int i=0;i<u;i++){
        if(s[i]==m)
         vec.push_back(i);
    }
    int k=vec.size();
    if(vec[0]==vec[k-1])
     cout<<vec[0];
     else 
    cout<<vec[0]<<" "<<vec[vec.size()-1];
    }