#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n; cin>>n; int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (n-1==i+j){
                for(int u=1;u<=n;u++)
                 cout<<u<<" ";
            }
            else cout<<"."<<" ";
        }
        cout<<endl;
    }

    // for(int i=0;i<n;i++)
}