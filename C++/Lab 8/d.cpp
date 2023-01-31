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
    int l;
    cin>>l; 
    vec.erase(vec.begin()+l);
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
            }
    
}