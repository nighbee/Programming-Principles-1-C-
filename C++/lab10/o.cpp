#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void dectobin(vector<int> vec){
    long long rem, product=1,binary=0;
     for(int i=0;i<vec.size();i++){
        while (vec[i]>0){
            rem=vec[i]%2;
            binary=binary+(rem*product);
            vec[i]=vec[i]/2;
            product*=10;
        }
        cout<<binary<<endl;
        rem=0; product=1; binary=0;
     }
}
int main(){
    int n; cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    dectobin(vec);
}