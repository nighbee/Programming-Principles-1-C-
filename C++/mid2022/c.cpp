#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; vector<int> ev;
    vector<int> nev;
    cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x%2==0)
         ev.push_back(x);
        else if(x%2==1)
         nev.push_back(x);
    }
    for(int i=0;i<ev.size();i++){
        cout<<ev[i]<<" ";
    }
    for(int i=0;i<nev.size();i++){
        cout<<nev[i]<<" ";
    }

}