#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main(){
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s*i;
    }
    cout<<s;
}