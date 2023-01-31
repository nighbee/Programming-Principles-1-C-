#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    int n; cin>>n;
    multimap<int, string> set;
    multimap<int, string> :: iterator it=set.begin();
    for(int i=0;i<n;i++){
        string s; cin>>s; int x; cin>>x;
        int sum=0; sum=sum+x;
        double prc=sum/x;
        set.insert(make_pair(x, s));
        for(it=set.begin(); it!=set.end();it++){
            if(s== it->second)
             replace(set.begin(), set.end(), it->first, it->first+x);
        }
    }
    

 }