#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n; cin>>n;
    map<string, int>   mp;
    int sum=0;
    for(int i=0;i<n;i++){
        string name; cin>>name; 
        int point; cin>>point; 
        sum=sum+point;
        mp[name]+=point;
    }
    vector<pair<double, string> > vec;
    map<string, int> :: iterator it=mp.begin();
    for(it=mp.begin(); it!=mp.end();it++){
        double per=(it->second)*1./sum;
        // cout<<it->first<<" "<<per*100<<"%"<<endl;
        vec.push_back(make_pair(per*100,it->first));
    }
    sort(vec.begin(),vec.end() );
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].second<<" "<<vec[i].first<<"%"<<endl;
    }
}