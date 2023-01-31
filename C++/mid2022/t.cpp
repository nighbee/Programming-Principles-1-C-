#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a,x; cin>>n>>m>>a;
    vector<int> vec;
    for(int i=1;i<m;i++){
        x=i*i;
        if(x>=n && i<=x){
            vec.push_back(x);
        }
    }
    if(a==1) 
     sort(vec.begin(), vec.end());
    else
     sort(vec.begin(),vec.end(), greater<int>());
     for(int j=0;j<vec.size(); j++){
        cout<<vec[j]<<" ";
     }
}