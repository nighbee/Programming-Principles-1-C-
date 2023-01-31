#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
void f (){ 
  int n;
  vector<int> vec;
  cin>>n;
  int a[n],b[n];
  int i,j;
  for (i=0;i<n;i++){
    cin>>a[i];
  }
  for (j=0;j<n;j++){
    cin>>b[j];
  }
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      if(i==j){
      int d=b[j]-a[i];
       if (d<0){
        d=d*(-1);
        vec.push_back(d);
       }
       else 
       vec.push_back(d);
      }
    }
  }
  for (int u=0;u<vec.size();u++){
    cout<<vec[u]<<" ";
  }
}
int main(){
  f ();
}