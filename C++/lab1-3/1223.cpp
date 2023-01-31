#include <iostream>
using namespace std; 
int main()
{
    int n;
    long long l, r , s=0;  
    int mas[100000];
    cin>> n>> l >> r;
    if ( 1<= l && l<=r && r<=n){
    for (int i=0; i< n; i++){
        cin >> mas[i];
        if (l-1 <= i && i<= r-1)
         s += mas[i];
    } cout << s;
    } 
} 