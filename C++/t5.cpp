#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#include <sstream>
 #include <algorithm>
 #include <vector>
using namespace std; 
bool m(vector<int> vec, int max){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==max) return 1;
        return 0;
    }
}
int main(){
  int n; cin>>n; vector<int> vec;
  for(int i=0;i<n;i++){
    int x; cin>>x; vec.push_back(x);
  } 
  int cnt=0;
       int max=vec[0];
  sort(vec.begin(), vec.end(),greater<int>());
  count_if(vec.begin(),vec.end(), m);

//   for(int i=0;i<vec.size();i++){ //int cnt=0;
//     if(vec[i]==max) cnt++;
//   }
  cout<<cnt<<" ";
}   