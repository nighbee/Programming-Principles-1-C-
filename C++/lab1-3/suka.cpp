#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
     int max=0, s=0, l;
    int n;
     cin>>n;
     for(int i=0;i<n;i++){
        string x; cin>>x;
        for(int j=0;j<x.size();j++){
            if(x[j]>='a' && x[j]<='z'){
             s++;
            }
        }
          if(s>max)
              max=s;
             l=i+1;
             s=0;
     }
     cout<<l;
    }