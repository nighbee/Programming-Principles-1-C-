#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n; cin>>n;
    for(int i=100;i<1000;i++){
        int y=i,sum=0;
        while(y!=0){
            sum+=y%10;
            y=y/10;
        }
        if(sum==n)
         cout<<i<<endl;
    }
}