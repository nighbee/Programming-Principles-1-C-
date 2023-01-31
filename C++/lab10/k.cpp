#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int prime( int u){
    int m=0;// cnt=0;
    //int flag=0;
    if(u==0)
     return 0;
     if(u==3 || u==2)
      return 1;
    for(int i=2; i<u;i++){
        if(u%i==0){
           m++;
        }
    }
    if(m==2)
     return 1;
    else return 0;
}
 int main (){
    int n; cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++ ){
        int x; cin>>x;
        vec.push_back(x);
    }
    int s=0;
    for(int i=0;i<n;i++){
        int u=abs(vec[i]);
        int isprime = prime(u);
         if(isprime ==1){
          s++;
        cout<<u<<" ";
         }
    }
    cout<<s;

 }