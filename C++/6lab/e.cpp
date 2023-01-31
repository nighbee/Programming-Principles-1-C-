#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
using namespace std;
int f (){
    float a,b;
    float c;
    cin>>a>>b;
    c=float(sqrt((pow(a,2)+pow(b,2))));
    cout<<setprecision(4)<<c;
}
int main (){
    f ();
    return 0;
}