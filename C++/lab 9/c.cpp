#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 void printrep(int arr[], int n){
    map<int, int> mp;
    for(int i=0;i<n;i++){
     mp[arr[i]]++;
    }

    int s=0; 
    for (int i=0;i<n;i++){
        if(mp[arr[i]]>1){
            s++;
            mp[arr[i]]=0;
        }
    }
    cout<<s;
 }
 int main (){
   int x; cin>>x;
   int arr[x];
   for(int i=0;i<x;i++)
      cin>>arr[i];
    
    int n=sizeof(arr)/sizeof(arr[0]);
    printrep(arr, n);
    return 0; 
 }