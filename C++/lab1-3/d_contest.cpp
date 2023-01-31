#include <iostream>
 using namespace std;
 int main (){
    int n, x, m; 
    cin >> n; 
    cin>> x;
    int arr[n];
    for (int i=0; i< n; i++){
        cin>> arr[i];
        if ( x== arr[i]){
            m=i; 
            cout << m+1 ; 
        }
        else if ( x == arr[i]+1){
            m= i;
           cout << m+1 ; 
        }
        else if (x ==arr[i]-1){
            m=i;
            cout<<m;
        }
    }
 } 