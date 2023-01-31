#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    int n, m; cin>>n>>m;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    rotate(vec.begin(), vec.begin()+m, vec.end());
    reverse(vec.begin(), vec.end());
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
 }