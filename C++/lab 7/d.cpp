#include <iostream>
#include <string> 
#include <vector>
#include <numeric>
using namespace std;
int main(){
   string s; 
   cin>>s;
   int sum=0;
   for(int i=0;i<s.size();i++){
    sum=sum+(int)s[i]-48;
   }
   cout<<sum;
}