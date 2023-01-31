#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int n,s=0;
    cin>>n;
    while(n>0){
        s=n%10+s;
        n=n/10;
    }
    cout<<s;
}
int main (){
    f ();
    return 0;
}