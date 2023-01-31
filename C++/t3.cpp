#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void rem(string s){
istringstream ss(s);
set<string> h;
do {
    string word;
    ss>>word;
    while(h.find(word)==h.end()){
        cout<<word<<" ";
        h.insert(word);
    }
} while (ss);
}
int main(){
    vector<string> vec;
    string s;
    getline(cin, s);
    rem(s);
}