#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int n;
    cin>>n;
    int a[n];
    int i;
    for ( i=0;i<n;i++){
        cin>>a[i];
    }
    for (i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}
int main (){
    f ();
    return 0;
}