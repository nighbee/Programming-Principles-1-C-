
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <string>
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && c+b>a)
     cout << "Valid";
    else cout<<"Invalid"; 
}