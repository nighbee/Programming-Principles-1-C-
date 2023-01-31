#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s; 
    char ch='a';
    char ch2='{';
    //string p; 
    for (int i=0;i<s.size();i++){
        s[i]=s[i]+1;
        if(s[i]==ch2)
         s[i]=ch;
        cout<<s[i];
    }
}