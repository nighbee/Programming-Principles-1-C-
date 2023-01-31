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
    vector<int> vec;
    for(int i=0;i<s.size(); i++){
        if(s[i]-'0'>=0 && s[i]-'0'<=9)
         vec.push_back(s[i]-'0');
    }
    cout<<accumulate(vec.begin(), vec.end(), 0);
    }