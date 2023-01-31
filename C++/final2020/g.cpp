#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n; cin>>n; 
    vector<int> vec;
    for(int i=0;i<n;i++) {
        int x; cin>>x; vec.push_back(x);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int max=vec[0],cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==max) cnt++;
    }
    cout<<cnt;
}