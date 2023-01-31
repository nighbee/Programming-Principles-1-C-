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
      if(!mp[s])
       cout<< "new user added"<<endl;
      else cout<<"user already exists"<<endl;
      mp[s]++;
   }
}