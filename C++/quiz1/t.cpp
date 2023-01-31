
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <string>
int main(){
    int n,m;
    cin>>n;
    int a[n];
    int i,sum=0;

    for (i=0;i<n;i++){
        cin>>a[i];
    }
   for(i=0;i<n;i++){
    while(a[i]!=0){
        sum= sum+a[i]%10;
        a[i]=a[i]/10;
    }
    if(sum%2==0) cout << "Sum of digits is even!"<<endl;
    else cout<<"Sum of digits is odd!"<<endl;
    sum=0;
   }
}