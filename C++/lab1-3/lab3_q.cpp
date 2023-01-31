#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    bool isPrime = true;
    cin>>n;
    for (i=2; i<=(sqrt(abs(n))); i++){
        if (n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}