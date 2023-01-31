#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s; 
    string a;
    string rep;
    cin>>a;
    int l=a.size()/s.size();
    for (int i=0;i<l;i++){
        rep+=s;
    }
    if(rep==a)
     cout<<"YES";
    else 
     cout<<"NO";
}