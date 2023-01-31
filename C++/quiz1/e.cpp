// perfect square.
#include <bits/stdc++.h>
using namespace std;
 
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
 
int main()
{
    long long x;
    cin>>x;
    if (isPerfectSquare(x))
        cout << "Perfecto";
    else
        cout << "Simple";
    return 0;
}