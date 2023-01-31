#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cin>>a[i][j];
     }
    }

     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        int k=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
        if(k == 0 || k==4){
         cout<<"NO";
        return 0;
        }
      }
     }
      cout<<"YES";
 }