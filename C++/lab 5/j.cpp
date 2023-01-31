#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string p=s;
    reverse(p.begin(),p.end());
    if (p==s){
        cout<<"YES";
    }
    else {s=s+s[0];
    p=s; 
    reverse(p.begin(),p.end());
    if(p==s){
        cout<<"YES";
    }
    else cout<<"NO";
    }
}