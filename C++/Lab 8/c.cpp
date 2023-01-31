#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        vec.push_back(x);
    }
    int l, r;
    cin >> l >> r;
    reverse(vec.begin() + l, vec.begin() + r + 1);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}