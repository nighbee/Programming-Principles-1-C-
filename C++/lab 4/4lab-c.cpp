#include <stdio.h>
#include <limits.h>
using namespace std;
#include <iostream>

int main () {
    int n, m,s=0;
    cin>>n>>m;
    int a[n][m];\
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
             if(a[i][j]<0){
                s=s+1;
             }
        }
    }
    cout<<s;
}