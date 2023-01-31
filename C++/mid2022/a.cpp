#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; vector<int> rs;
    vector<int> ls;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x%2==1)
         rs.push_back(x);
        else if(x%2==0)
         ls.push_back(x);
    }
    
      cout<<"Left hand magic power: "<<accumulate(ls.begin(), ls.end(), 0)*ls.size()<<endl;
      cout<<"Right hand magic power: "<<accumulate(rs.begin(), rs.end(), 0)*rs.size();
    }