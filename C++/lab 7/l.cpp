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
        cout<<"Yes";
    }
    else cout<<"No";
}