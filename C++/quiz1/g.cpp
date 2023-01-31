
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
int main(){
    int n;
    cin>>n;
    int a[n],max=0,i,sum=0;
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
         if(a[i]>max){
           max=a[i];
        }
       sum=sum+a[i];
    }
    // if ( max==8)
     //max=max-2;
    cout << sum<<" "<<max;
}