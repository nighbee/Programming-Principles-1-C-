// CPP program to illustrate
// std::reverse() function of STL
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> vec1;
    vector<int>::iterator p;
  
    // Inserting elements in vector
    int n; 
    cin >> n; 
    int l, k,a ;
    cin >>l >> k;
    l= l -1; 
    for (int i = 0; i < n; i++) {
        cin>>a  ;
        vec1.push_back(a);
    }
    // Reversing elements from index 5 to index 7
    reverse(vec1.begin() + l, vec1.begin() + k);
    // Displaying elements of vector after Reversing
    for (p = vec1.begin(); p < vec1.end(); p++) {
        cout << *p << " ";
    }
    return 0;
}