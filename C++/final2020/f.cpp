#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    if(n==1) cout<<"NO";
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==a[j][i]) cnt++; 
        }
     }
    }
    cout<<cnt<<endl;
    if(cnt>n*n-n) cout<<"YES";
    else cout<<"NO";
}