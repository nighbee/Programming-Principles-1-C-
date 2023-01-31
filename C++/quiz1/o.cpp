
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <string>
int main(){
    int n,m;
    cin>>n;
    m= n%10*1000 + n/10%10*100 + n/100%10*10 + n/1000; 
    if (n==m)
     cout << "YES";
    else cout << "NO";
}