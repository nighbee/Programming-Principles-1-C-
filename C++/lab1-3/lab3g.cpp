#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   long long  maxx= -999999999, minn=999999999; 
   int a[100000];
   cin >> n;
   for (int i=1; i<=n; i++){
    cin>> a[i];
    if (a[i]>=maxx) 
      maxx=a[i];
    if(a[i]<=minn) 
      minn=a[i];
   }
   for(int i=1; i<=n; i++){
    if(a[i]== maxx)
      a[i]=minn;
     cout<<a[i]<<" ";
   }
}