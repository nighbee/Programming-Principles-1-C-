#include <bits/stdc++.h>

using namespace std;

int gcd(int meh, int hem)
{
    if (hem == 0)
 {
        return meh;
    }
    return gcd(hem, meh % hem);
}

int main()
{
    int meh, hem;
    int SIZE;
    
    cin >> SIZE;
    
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; ++i) 
 {
  cin >> arr[i];
 }
 
    int maxGCD =- 10000000;
    
    for (int i = 0; i < SIZE; ++i)
 {
        for (int j = i + 1; j < SIZE; ++j)
  {
            int gc = gcd(arr[i], arr[j]);
            if (maxGCD < gc) 
   {
    maxGCD = gc; 
   }
        }
    }
    
    cout << maxGCD;
    
}