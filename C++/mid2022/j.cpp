#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; 
    vector<int> vec;
    cin>>n;
    while(n>0){
        int s=n%10;
        n=n/10;
        vec.push_back(s);
    }
    sort(vec.begin(), vec.end());
    cout<<vec[vec.size()-1]<<" "<<vec[0]; 
 }