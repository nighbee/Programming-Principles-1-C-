#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    
    string s,p; 
    cin>>s; 
    int i=0;
    for (i=0;i<s.size();i++){
        if (i%2==0){
            putchar(toupper(s[i])); 
        }
         else if (i%2==1)
          cout<<s[i];
         
    }
}
int main(){
    f ();
}