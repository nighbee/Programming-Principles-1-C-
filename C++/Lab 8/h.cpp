#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

 int main (){
    int n; 
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int k; cin>>k;
    for(int i=0;i<k;i++){
        cout<<vec[i]<<" ";
    }
 }