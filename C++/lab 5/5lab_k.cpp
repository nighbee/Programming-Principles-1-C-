#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s; 
    int sum=0;
    for(int i=0;i<s.size();i++){
        if( s[i]=='u' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o')
         sum ++;
    }
    cout<<sum;
}