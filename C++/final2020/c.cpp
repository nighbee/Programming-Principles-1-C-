#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    string s; 
    cin>>s; 
    vector<char> vec; 
    vector<pair<char, int> > vec1;
    for(int i=0;i<s.size();i++) vec.push_back(s[i]);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for(int i=0;i<s.size();i++){ int x;
    x=0;    
        for(int j=0;j<vec.size();j++){
            if(s[i]==vec[j]) {
              x++;
            }
        }
        vec1.push_back(make_pair(s[i], x));
    }
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    }
}