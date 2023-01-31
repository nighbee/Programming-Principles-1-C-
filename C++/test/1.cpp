#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n,i,j,max;
    cin>>n;
    int a[n][n];
    char g=';';
    string c="Maximum element is:  ";
    string r=" with coordinates: ";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int l,v;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            max=a[0][0];
             if (i==j){
                if (a[i][j]>max)
                    max=a[i][j];
                 }
        }

    }
    cout<<c<<max<<r<<l<<g<<v;
    /*for (j=0;j<m;j++){
        for (i=0;i<n;i++){
            csum=csum+a[i][j];
        }
        cout<<c<<j+1<<h<<csum<<endl;
         csum=0;
    }*/
}