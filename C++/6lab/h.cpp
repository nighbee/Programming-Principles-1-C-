#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    string s;
    cin>>s;
    int i,n=0;
    for (i=0;i<s.size();i++){
        if (s[i]%2==0)
         n++;
        else
         n=0;
    }
    if (n==s.size())
     cout<<"Valid";
    else 
     cout<<"Not valid"; 
}
int main(){
    f ();
    return 0;
}