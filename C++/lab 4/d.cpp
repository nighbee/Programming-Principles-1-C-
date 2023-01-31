#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n; 
    int i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           a[i][j]=i*j;
           a[0][0]=0;
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
