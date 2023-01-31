#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i, j;
    int a[i][j];
    for (i=-1;i<n-1;i++){
        for (j=-1; j<n-1;j++){
            a[i][j]=(i+1)*(j+1);
            cout<<a[i][j]<<" ";           
    }
    cout<<endl; 
    }
}    

