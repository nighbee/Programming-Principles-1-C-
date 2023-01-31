#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int n,s=0;
    cin>>n;
    int l=n%10;
    while(n>0){
        s=n%10+s;
        n=n/10;
    }
    if(s%l==0)
     cout<<"Yes";
    else 
    cout<<"No";
}
int main (){
    f ();
    return 0;
}