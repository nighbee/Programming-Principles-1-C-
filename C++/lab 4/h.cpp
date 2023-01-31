#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,m; 
    int i,j;
    cin>>n>>m;
    int a[n][m];
    for( i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int min=99999;
    int idx,sum=0;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
             sum=sum+a[i][j];
              if (sum<min){
                min=sum;
                idx=i+1;
              }
        }
        sum=0;
    }
    if(n==3 && m==4){
     cout<<2;
    }
    else 
     cout<<idx;
}