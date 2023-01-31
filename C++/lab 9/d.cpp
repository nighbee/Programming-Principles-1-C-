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
     int u;
      cin>>u;
     vector<int> s;
     for(int f=0;f<n;f++){
        int x; cin>>x;
        s.push_back(x);
     }
     int sum=0;
     int k=s.size();
     for(int i=0;i<k;i++){
        if(s[i]==u)
         sum++;
     }
     cout<<sum;
 }