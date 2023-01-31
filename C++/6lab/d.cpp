#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int n,i,x,s=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    for(i=0;i<n;i++){
        if (a[i]==x)
         s++;
    }
    if (s>0)
     cout<<"Yes";
    else 
     cout << "No";
}
int main(){
    f ();
}