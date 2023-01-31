#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    vector<int> vec;
    vector<int> s;
    int n; cin>>n; 
    for(int i=0;i<n;i++){
        int x; cin>>x; 
        vec.push_back(x);
        s.push_back(x);
    } 
    reverse(s.begin(), s.end());

    for(int i=0;i<n;i++){
        if(vec[i]!=s[i])
         cout<<"Instead of "<<vec[i]<<" here was "<<s[i]<<endl;
        else
         cout<<"OK"<<endl;
    }
 }