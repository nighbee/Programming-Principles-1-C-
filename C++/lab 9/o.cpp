#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int main(){
    map<string, string> m;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string a,b; cin>>a>>b;
        m[a]=b;
    }
    int k; cin>>k;
    for(int i=0;i<k;i++){
        string a,b; cin>>a>>b;
        if(m[a].empty()) cout<<"login error"<<endl;
        else if(m[a]!=b) cout<<"password error"<<endl;
        else cout<<"correct password"<<endl;
    }
}