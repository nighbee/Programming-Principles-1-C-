#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()

{
    int n,m, rsum=0,min=0; 
    cin >> n>> m;
    int i,j, a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
            min=min+a[0][j];
        }
     }
     int idx;
     for (i=0;i<n;++i){
        for (j=0;j<m;++j){
            rsum= rsum+a[i][j];
             if(rsum<min){
              min=rsum;
              idx=i;
             }
        }
     rsum=0;
     }
    cout<<idx;
}
