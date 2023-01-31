#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s; 
    int sum1=0,sum2=0;
    for (int i=0; i<s.size();i++){
        if(i%2==0){
            sum1=s[i]+sum1;
        }
        else if(i%2==1){
            sum2=s[i]+sum2;
        }
    }
    if (sum1 == sum2 )
     cout << "YES";
    else cout<<"NO";
}