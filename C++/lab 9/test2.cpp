#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
  multiset<pair<int, int> > mp;
  int n; cin>>n;
  for(int i=0;i<n;i++){
    int a,b; cin>>a>>b; 
    mp.insert(make_pair(a,b));
  }
  multiset<pair<int,int> >::iterator it=mp.begin();

for(it=mp.begin(); it!=mp.end();it++)
 cout<<it->first<<" "<<it->second<<endl;
 }