#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string k; 
    getline(cin, k);
    int u=k.size();
    for(int i=0;i<u;i++){
        if((k[i]>='A' && k[i]<='Z') || (k[i]>='a' && k[i]<='z')){
           if(k[i]=='z')
            cout<<'a';
           if(k[i]=='Z')
            cout<<'A';
            if(k[i]!='z' && k[i]!='Z'){
        k[i]=k[i]+1;
        cout<<k[i];
            }
        }
        else
        cout<<k[i];
    }
 }