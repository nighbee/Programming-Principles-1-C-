 /*if(j<=n-1)
          cout<<i*j<<" ";
         else
          cout <<i*j<<" ";*/
          #include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    long long i,j,a[n][m];
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            long long sr=sqrt(a[i][j]);
            if (sr*sr==a[i][j])
             cout<<sqrt(a[i][j])<<" ";
            else cout<<a[i][j]<<" "; 
        }
        cout <<endl;
    }
}