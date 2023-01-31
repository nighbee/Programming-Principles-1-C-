#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#include <map>
#include <sstream>
 #include <algorithm>
 #include <vector>
using namespace std;
#include <bits/stdc++.h>
 using namespace std;
 int main(){  int n;  cin>>n;  
 map<string,int>m;  
 map<string,int>res;  
 for(int i = 0; i< n; i++)  {  
     string s; int x;   cin >>s>>x;   
     if(m[s]!=x){    m[s]=x;    res[s]++;}  
      else   {    continue;   }  }  map<string,int> ::iterator it;  for(it = res.begin(); it != res.end(); ++it)  {   if(it->second>=3)   {    cout << it->first <<" "<<"+1"<<endl;   }   
else   {    cout << it->first <<" "<<"NO BONUS"<<endl;   }  } return 0; }