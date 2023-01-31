
#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <string>
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>=30){
      if(c>=20){
        if(a+b+c>=70){
            cout <<"YES!";
        }
        else cout <<"NO.";
     }
      else cout <<"NO.";
    } 
    else 
     cout << "NO.";
}