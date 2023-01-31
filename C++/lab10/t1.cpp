#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
bool isPrime(int i){
    if(i==0 || i==1)
     return 0;
     for(int u=2;u<i;u++){
        if(i%u==0){
           return 0;
        }
        else
         return 1;
     } 
}
int main(){
    int n; cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x; 
        vec.push_back(abs(x));
    }
    cout<<count_if(vec.begin(),vec.end(), isPrime);
}