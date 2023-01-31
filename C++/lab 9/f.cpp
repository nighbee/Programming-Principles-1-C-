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
    char a='(';
    char b=')';
    int u=0,l=0;
    for( int i=0;i<s.size(); i++ ){
        if(s[i]==a)
         u++;
        if (s[i]==b)
         l++;
    }
    int k=s.size();
    if (s[k-1]=='(')
     cout<<"NO";
    else if(u==l)
       cout<<"YES";
    else  
     cout<<"NO";
 }