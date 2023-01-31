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
    map<int , string> mp;
    map<int, string> :: iterator it=mp.begin();
    for(int i=0;i<n;i++){
        string s; cin>>s; int bal; cin>>bal;
        mp.insert(make_pair(bal, s));
        for(it=mp.begin(); it!=mp.end();it++){
            if(s==it->second){
            int k=it->first+bal;
              replace(mp.begin(), mp.end(), it->first, k);
        }
        }
    }
    double sum=0;
    for(it=mp.begin(); it!=mp.end(); it++){
        sum=sum+it->first;
    }
    for(it=mp.begin();it!=mp.end();it++){
        double prc=sum/it->first;
        
    }
    for(it=mp.begin(); it!=mp.end();it++)
     cout<<it->second<<" "<<it->first<<"%"<<endl;
 }