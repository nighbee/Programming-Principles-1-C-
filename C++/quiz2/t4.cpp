#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string s;
    getline(cin, s);
    int n; cin>>n;
    vector<char> vec;
    for(int i=0;i<n;i++){
        char l; cin>>l;
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" - "<<count_if(s.begin(), s.end(), vec[i]==s[i])<<endl;
    }
 }