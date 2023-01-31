#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    int n; cin>>n;
    vector<string> s;
    vector<int> vec;
    for(int i=0;i<n;i++){
        string g; cin>>g;
        s.push_back(g);
        int x; cin>>x;
        vec.push_back(x);
    }
    sort(s.begin(), s.end());
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++)
     cout<<s[i]<<" "<<vec[i]<<endl;

 }