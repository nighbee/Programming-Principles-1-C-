#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n;
     cin>>n;
     vector<int> s;
     for(int f=0;f<n;f++){
        int x; cin>>x;
        s.push_back(x);
     }
     sort(s.begin(), s.end());
     s.erase(unique(s.begin(), s.end()), s.end());
     int sum=0, k=s.size();
     for(int i=0;i<k;++i){
        if(s[i]%2==1){
            cout<<s[i]<<" ";
        }
     }
 }