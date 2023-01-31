#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int i,l=0;
    for (i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
         l=l+1; 
        }
    }
    if (l>=n)
     cout<<"YES";
    else 
     cout<<"NO";
}
int main(){
    f ();
}