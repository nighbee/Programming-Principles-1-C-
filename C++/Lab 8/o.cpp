#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string c;
    cin>>c;
   int n=c.size();
     vector<char> s;
     for(int f=0;f<n;f++){
       
        s.push_back(c[f]);
     }
     sort(s.begin(), s.end());
     s.erase(unique(s.begin(), s.end()), s.end());
     int sum=0, k=s.size();
     cout<<k<<endl;
     for(int i=0;i<k;++i){
        cout<<s[i]<<" ";
     }
 }