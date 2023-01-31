#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
         if(s[i]>n)
          n=s[i];
    }
    cout<<static_cast<char>(n);
}