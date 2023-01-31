#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int n; cin>> n;
    int k; cin>>k;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    int s=0;
    sort(vec.begin(), vec.end());
    for(int i=0; i<n;i++){
        if(abs(vec[i]-vec[i+1])<=k)
         s++;
    }
    if(s>0)
     cout<<"cheater";
     else
     cout<<"no";

}