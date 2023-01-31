#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m; cin>>n,m;
    vector<int> f;
    //vector<int> s;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        f.push_back(x);
    }
    vector<int> s;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        s.push_back(x);
    }
    for(int i=0;i<f.size();i++){
        f.push_back(s[i]);
    }
    unique(f.begin(), f.end());
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }
}