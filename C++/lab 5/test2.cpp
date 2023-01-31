#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s; 
    cin>> s; 
    char a; 
    cin >> a; 
    int n,u=0;
    cin>>n;
    for (int i=0;i<s.size();i++){
        if(s[i]==a){
            u=u+1;
        }
    }
    if (u==n)
     cout<<"YES";
    else cout << "NO";
}