#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    string s; cin>>s;
    sort(s.begin(),s.end()); s.erase(unique(s.begin(),s.end()), s.end());
    int sum=1;
    for(int j=1;j<=s.size();j++) sum=sum*j;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;
    cout<<sum;
    }