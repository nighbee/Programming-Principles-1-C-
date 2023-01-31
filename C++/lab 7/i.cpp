#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    vector<long long> a;
    int n;
    while(cin>>n){
        a.push_back(n);
        if (n==0)
         break;
    }
    cout<<accumulate(a.begin(),a.end(),0);
}