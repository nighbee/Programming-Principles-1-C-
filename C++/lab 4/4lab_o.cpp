#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n],i,j;
    int l,v,max=-99999;
    for (i=0;i<n;i++){
         for (j=0;j<n;j++){
            cin>>a[i][j];
          }
    }
    for (i=0;i<n;i++){
      for(j=0;j<n;j++){
        if(i==j && a[i][j]>max){
         max=a[i][j];
         l=i;
         v=j;
        }
      }
    }
    cout<<"Maximum element is: "<<max<<" "<<"with coordinates: "<<l+1<<";"<<v+1; 
}