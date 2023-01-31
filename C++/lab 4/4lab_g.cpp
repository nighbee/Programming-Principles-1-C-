#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int i,p=1,j;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
        }
    }
      for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)==n-1){
              cout<<p;  
              p++; 
              } 
               else {
                cout<<".";
               }
        }
        cout<<endl;
    }
    return 0;
}