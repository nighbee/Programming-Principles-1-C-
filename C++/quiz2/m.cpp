#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    string k; 
    cin>>k; 
    vector<int> s;
    for(int i=0;i<k.size();i++){
        s.push_back(int(k[i]));
    }
    if(accumulate(s.begin(), s.end(), 0)>=300)
     cout<<"It is tasty!";
     else 
      cout<<"Oh, no!";
}
