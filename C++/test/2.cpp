#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 int main (){
    int n,m;
    cin>>n>>m;
    int i,j;
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<int> vec;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            if(a[i][j]>0){
                int num=a[i][j];
                vec.push_back(num);
            }
        }
    }        
    sort(vec.begin(),vec.end());
    for(int u=0;u<vec.size();u++){
    cout<<vec[u]<<" ";
    } 
     }