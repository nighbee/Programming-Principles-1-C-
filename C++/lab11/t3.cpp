#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#include <sstream>
 #include <algorithm>
 #include <vector>
using namespace std;
// bool comp(int sc1, int sc2){
//     return sc1>sc2;
// }
int main(){
    vector<pair<string, int> > vec;
    int n,i,j; cin>>n;
    for(i=0;i<n;i++){
        string name; cin>>name; 
        int score; cin>>score;
        vec.push_back(make_pair(name, score));
    }
    cout<<endl;
    vector<pair<int, string> > vec2;
    int size2=vec2.size();
    sort(vec.begin(),vec.end());
    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
        string f, s; int fp=vec[i].second; int sp=vec[j].second;
        f=vec[i].first; s=vec[j].first;
        if(f==s && fp!=sp){
            vec2.push_back(make_pair(fp+sp, f));
        }
    }
    }
    sort(vec2.begin(), vec2.end());
    for(int i=0;i<vec2.size();i++)
     cout<<vec2[i].second<<" "<<vec2[i].first<<endl;
}