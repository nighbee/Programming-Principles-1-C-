#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,n;
    cin >>n;
    a=n%2;
    n=n/2;
    b=(n%2);
    n=n/2;
    c=(n%2);
    n=n/2;
    d=(n%2);
    //cout<<a<<b<<c<<d;
    int sum=a*8+b*4+c*2+d*1;
    cout<<sum;

    return 0;
}