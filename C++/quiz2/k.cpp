#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; 
    string s; 
    cin>>s;
    vector<int> vec;;
    for(int i=0;i<s.size(); i++){
        vec.push_back(s[i]-'0');
    }
    reverse(vec.begin(), vec.end());
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum=sum+(vec[i]*pow(2, i));
    }
    cout<<sum;
 }