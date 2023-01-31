#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b;
    cin>> b; 
    bool l= false;
    if( s.size()==b.size()){
        for (int i=0; i<s.size();i++){
            if(s[i]==b[i])
             l=true;
            else 
             l=false;
        }
    }
    if (l==true) 
     cout<<"YES";
    else cout<<"NO";
}