
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <string>
int main(){
    int a,b,c;
    int p,p1,p2;
    int m;
    cin>>a>>b>>c>>p>>p1>>p2>>m;
    if (m-(a*p+b*p1+c*p2)>=0){
        cout << "Yes";  
    }
    else cout<<"No";
}