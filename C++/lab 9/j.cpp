#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
   map<string, int> mp;
   int n; cin>>n;
   for(int i=0;i<n;i++){
      string s; cin>>s;
      int x; cin>>x; 
      if(!mp[s])
       mp[s]=x;
       else 
       mp[s]+=x;
   }
   map<string,int> :: iterator it=mp.begin();
   for(it=mp.begin(); it!=mp.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}