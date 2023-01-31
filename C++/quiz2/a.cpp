#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    char a; cin>>a;
    string s;
    cin>>s;
    string k;
    for(int i=0;i<s.size(); i++){
        if(s[i]!=a)
         k.push_back(s[i]);
    }
    cout<<k;
 }