#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void calculateMode(vector<int> vec)
{   sort(vec.begin(), vec.end());   
     int counter = 1;
     vector<int> s;
        int max = 0;
        int mode = vec[0];
        for (int pass = 0; pass < vec.size(); pass++)
        {
           if ( vec[pass] == vec[pass+1] )
           {
              counter++;
              if ( counter >= max )
              {
                  max = counter;
                  mode = vec[pass];
              }
           } else
              counter = 1; // reset counter.
        }
        sort(s.begin(), s.end(), greater<int>());
        for(int i=0;i<s.size(); i++)
         cout<<s[i]<<" ";
}
int main(){
    int n; cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    calculateMode(vec);
} 