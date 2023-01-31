// c, given matrix nxn, if elements above and under main diagonal equals to each other 
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n;
    cin>>n;
    int i,j;
    int a[n][n];
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int s=0;
        for (i=0;i<n;i++){
        for(j=0;j<n;j++)
        if (i!=j)
         if(a[i][j]==a[j][i])
          s++;
        {
        }
        }
        if (s>=n*n-n)
         cout<<"Perfect.";
        else 
         cout<<"Not perfect.";
 }