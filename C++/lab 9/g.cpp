#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 int main (){
    string s;
    cin>>s;
  for(int i=0; i<s.size();i++){
    if(s[i]=='0') cout<<s[i];
    else if(s[i]=='1' && s[i+1]=='1') i++;
    else cout<<s[i];
  }
 }