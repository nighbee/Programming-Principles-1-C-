#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 int main (){
    vector<string> vec{"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string k; cin>>k;
    int n= vec.size();
    if(k=="SUN")
     cout<<vec.size();
    for(int i=0;i<n;i++){
        if (k=="SUN")
         break;
        else if(k==vec[i])
         cout<<n-i-1;
    }

 }