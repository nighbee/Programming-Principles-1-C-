#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
      int n; cin>>n; 
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
      //int u=int(s[i]); int z=int('Z');
      if(s[i]+n<='Z') s[i]=s[i]+n;
      else {
         s[i]=(s[i]+n);
         s[i]=s[i]-25-1;
      }
   }
   cout<<s;
}
