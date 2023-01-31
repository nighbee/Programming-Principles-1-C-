#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string k; 
    getline(cin, k);
    for(int i=0; i<k.size(); i++){
        if((k[i]>='a' && k[i]<='z') || (k[i]>='A' && k[i]<='Z'))
         cout<<k[i];
    }
    }