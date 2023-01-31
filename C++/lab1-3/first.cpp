// CPP program to illustrate
// std::reverse() function of STL
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> vec1;
    vector<int>::iterator p;
  
    // Inserting elements in vector
    int n; 
    cin >> n; 
    int a , max, min ; 
    for (int i = 0; i < n; i++) {
        cin>>a  ;
        vec1.push_back(a);
    }
    *min_element(vec1.begin(),vec1.end())= min;
    *max_element(vec1.begin(), vec1.end())= max; 
    replace( *a,a+n ,max, min);
    std::cout << *a << " ";  
    return 0;
}