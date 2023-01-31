#include <iostream>
using namespace std;
 
int main(){
    long long   n, a;
    int l,r; 
    int input[n], output[n];
    cin >> n>> l >> r ;
    for(a  = 0; a < n; a++){
        cin >> input[a];
    }
    if ( l<a && a<r){
    for(a = 0; a < n; a++){
        output[a] = input[n-a-1];
    }   }  
    for(a = 0; a < n; a++){
        cout << output[a] << " ";
    }
    return 0;
}