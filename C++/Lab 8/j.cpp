#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 int main (){
    vector<int> vec;
    int n,i;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
        vec.push_back(a[i]);
    } 
    int min=99999,max=-99999,s=0;
 
    for (int i=0;i<vec.size();i++){
        if(vec[i]<min){
            min=vec[i];
        }
    }
     for (int i=0;i<vec.size();i++){
        if(vec[i]>max){
            max=vec[i];
        }
    }
    s=max-min;
    cout<<s;
}