#include <iostream>
using namespace std;
 
int main()
{
    int u;
    cin >> u;
    int array[u];
    for ( int v=0; v<u; v++){
        cin>>array[v];
    }    
    int size = sizeof(array)/sizeof(array[0]);
    int k=0, reverse[size];
    for(int i=size-1; i>=0; ){
        reverse[k++] = array[i--];
    }
    for(int i=0; i<size; i++){
        cout << reverse[i] <<" ";
    }
    return 0;
}