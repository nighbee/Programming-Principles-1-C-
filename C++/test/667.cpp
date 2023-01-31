#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void f (){
    int n,m;
    cin>>n>>m;
    int i,j,min=99999,sum=0;
    int a[n][m];
    string s="coordinates of min elements:";
    string c="Their sum:";
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<s<<endl;
    for (j=0;j<m;j++){
        for (i=0;i<n;i++){
            if(a[i][j]<min)
              min=a[i][j];
            }
            cout<<i<<";"<<j+1<<endl;
            sum=min+sum;
            min=99999;
    }
    cout<<endl;
    cout<<c<<endl;
    cout<<sum;
}
int main(){
    f ();
}