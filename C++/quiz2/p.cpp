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
    int u=s.size();
    if(s.size()==1 && s[0]-'0'==1)
     cout<<"true";
    else if(s.size()==1 && s[0]-'0'==0)
     cout<<"false";
    else{
        for(int i=0;i<u; i++){
            cout<<s[i];
        }
    }
 }