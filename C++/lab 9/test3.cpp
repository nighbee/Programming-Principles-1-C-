#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<int , int> mp;
    vector<int> vec;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vec[i]==vec[j] && i<j){
                mp.insert(make_pair(i,j)); 
            }
        }
    }
    map<int , int> :: iterator it=mp.begin();
    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<"{"<<it->first<<","<<it->second<<"}"<<","<<" ";
    }
    cout<<endl;
    cout<<mp.size();
}
