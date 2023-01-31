#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
 int main (){
    vector<int> vec;
    int a,b,k; cin>>a>>b>>k;
     if(a<b){
     for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
          vec.push_back(i);
    }
    }  
    }
    else 
     for(int i=1;i<=b;i++){
       if(a%i==0 && b%i==0){
        vec.push_back(i);
      }
     }
      sort(vec.begin(),vec.end(), greater<int>());
    //   for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    //   }
    //   cout<<endl;
        cout<<vec[k-1];
}