#include <iostream>
using namespace std;
int main (){
    int n,m;
    cin >>n>>m;
    int a[n][m];
    int i,j; 
    for (i=0; i<n;i++){
        for (j=0;j<m;j++){
            cin >> a[i][j];}
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            if ((i+j)%2==0){
                a[i][j]=a[i][j]+1;
                cout<<a[i][j]<<" ";
            }
            if ((i+j)%2==1){
                a[i][j]=a[i][j]-1;
                cout<<a[i][j]<< " ";
            }
        }
        cout<<endl;
    }
}