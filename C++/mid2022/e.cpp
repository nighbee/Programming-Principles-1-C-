// A, given n number, find if sum of digits mod 10 equals to first digit 
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    long long  n;
    cin>>n;
    vector<int> vec;
    int k, s=0;
    while (n>0){
        k=n%10;
        vec.push_back(k);
        n=n/10;
    }
    int l=vec.size();
    int u;
    for (int i=0;i<l;i++){
        s=s+vec[i];
        u=vec[l-1];
    }
    s=s-u;
    if(s%10==u)
     cout<<"YES";
    else 
     cout<<"NO";
 }