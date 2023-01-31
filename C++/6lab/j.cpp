#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void f (){
    int a[4],i,max=-99999;
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    for (i=0;i<4;i++){
        if(a[i]>max)
         max =a[i];
    }
    cout<<max;

}
int main (){
   f ();
}