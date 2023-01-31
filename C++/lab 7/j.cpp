#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n,m,s=0;
    cin>>n;
    while ( n>0)
     {
        m=(n%10)/2;
        s=s+m;
        n=n/10;
     }
     cout<<s;
}