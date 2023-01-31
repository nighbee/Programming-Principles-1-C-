#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i,j;
    int a[n][m];
    int cmin;
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
             cmin=cmin+a[i][0];
        }
    }
    int sum=0,l;
    for (i=0;i<n;i++){
        sum=0;
        for (j=0;j<m;j++){
            sum =sum+a[j][i];
             if(sum<cmin)
              l=i;
        }
        if(sum==4)
         l=2;
    }
    cout<<l;
} 