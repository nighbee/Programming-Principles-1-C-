#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    int x,s=0;
    cin>>x;
    for (i=0;i<n;i++){
        if(a[i]==x)
         s++;
    }
     if (s>0)
          cout<<"Yes";
    else 
          cout<<"No";
}