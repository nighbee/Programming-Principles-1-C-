#include <iostream>
using namespace std; 
int main()
{
    long long n, l, r,s=0; 
    int mas[n];
    cin>> n>> l >> r;
    if ( 1<= l && l<=r && r<=n){
    for (int i=0; i< n; i++){
        cin >> mas[i];
     if (l <= i && i<= r)
         s += mas[i];
    } cout << s;
    } 
} 