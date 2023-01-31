#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <map>
using namespace std;
int main(){
    vector<pair<string, int> > vec;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string s1, s2; int k1,k2;
        cin>>s1; cin>>k1; cin>>s2; cin>>k2;
        string c=s1+" and "+s2;
        int tt=k1+k2; 
        pair<string, int> g(c, tt);
         vec.push_back(g);
    }
    vec.erase(unique(vec.begin(),vec.end()), vec.end());
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    }
