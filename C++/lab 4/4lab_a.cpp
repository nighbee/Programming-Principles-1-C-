#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, max;
    int a[n][n];
    cin >> n;
    max=-99999;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
         cin>>a[i][j];
         if (a[i][j] > max){
            max=a[i][j];
           }
        }
    }
    cout<<max<<endl;
}