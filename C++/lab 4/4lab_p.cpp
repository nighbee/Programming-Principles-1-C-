#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int i,j,sum;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
      for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)==n-1){
                sum=sum+a[i][j];
            }
        }
    }
    cout<<sum;

}