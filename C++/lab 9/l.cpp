#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n; cin>>n;
    multimap<int, int> mp;
    multimap<int,int> :: iterator it=mp.begin();
    for(int i=1;i<=n;i++){
        int a,b; cin>>a>>b;
        mp.insert(make_pair(a+b,i));
    }
    for(it=mp.begin();it!=mp.end();it++)
     cout<<it->second<<" ";


     return 0;
}