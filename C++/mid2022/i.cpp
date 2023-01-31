#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=0; vector<int> vec;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        vec.push_back(max);
        max=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

 }