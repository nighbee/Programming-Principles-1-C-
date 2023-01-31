#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
 int main (){
int n; cin>>n; 
    map<double , string> mp;
    map<double, string> :: iterator it=mp.begin();
    vector<pair<string, int> > vec;
    for(int i=0;i<n;i++){
        string s; cin>>s; int bal; cin>>bal;
        vec.push_back(make_pair(s,bal));
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++){
        string s=vec[i].first; double bal=vec[i].second;
        if (mp.empty()) mp.insert(make_pair(bal,s));
        else if(s==it->second && bal!=it->first){
            double sum= bal+it->first;
            replace(mp.begin(),mp.end(), it->first, sum);
        } 
    }
    for(it=mp.begin();it!=mp.end();it++)
     cout<<it->second<<" "<<it->first<<endl;
 }