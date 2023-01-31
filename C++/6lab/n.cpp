#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    f ();
    return 0;
}