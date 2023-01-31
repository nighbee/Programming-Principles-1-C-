#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
 int main (){
    int x,y; cin>>x>>y;
    int n; cin>>n; 
    double dist;
    vector<pair<double, pair<int, int> > > vec;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        dist= sqrt( pow(a-x,2)+(pow(b-y,2)));
        if(a>x && b>y) dist= sqrt( pow(a-x,2)+(pow(b-y,2)));
        else if(a<x && b<y) dist= sqrt( pow(x-a,2)+(pow(y-b,2)));
        else if(a<x && b>y) dist= sqrt( pow(x-a,2)+(pow(b-y,2)));
        else if(a>x && b<y) dist= sqrt( pow(a-x,2)+(pow(y-b,2)));
        vec.push_back(make_pair(dist, make_pair(a,b)));
    }
    //cout<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        cout<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
    }
 }
