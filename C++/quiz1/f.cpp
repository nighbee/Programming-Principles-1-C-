#include<iostream>
using namespace std;
#include <math.h>
#include <cmath>
int main (){
    int x,y,x1,y1,l,v;
    cin>>x>>y>>x1>>y1>>l>>v;
    if (x<=l && l<=x1 && y>=v && v>=y1)
     cout <<"yes";
    else cout << "no"; 
}