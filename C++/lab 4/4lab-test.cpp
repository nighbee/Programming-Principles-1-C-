 /*if(j<=n-1)
          cout<<i*j<<" ";
         else
          cout <<i*j<<" ";*/
          #include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long i,j,a[n][n],u,l,v;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin>>a[i][j];
             int max=a[0][0];
              if(i==j)
               if(a[i][j]>max){
                 a[i][j]=u; 
                  i=l;
                   j=v ;
                }
        }
    }
   cout<< "Maximum element is: "<<u<<" with coordinates: "<<l+1<<";"<<v+1;
}