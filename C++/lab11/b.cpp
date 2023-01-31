#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    int n; cin>>n;
    set<int> set;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
        set.insert(x);
    }
    if(vec.size()==set.size())
     cout<<"YES";
     else cout<<"NO";
 }