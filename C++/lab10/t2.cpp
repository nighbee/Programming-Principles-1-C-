#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>
#include <map> 
using namespace std;
int main(){
    int n; cin>>n;
    multimap<string, int> map;
    multimap<string, int> :: iterator it=map.begin();
    for(int i=0;i<n;i++){
        string a; cin>>a; 
        int k; cin>>k;
        string b; cin>>b; 
        int u; cin>>u;
        string c=a+" and "+b;
        int sum=k+u;
        if(c!=it->first){ 
         map.insert(make_pair(c, sum));
        }
    }
    for(it=map.begin(); it!=map.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}