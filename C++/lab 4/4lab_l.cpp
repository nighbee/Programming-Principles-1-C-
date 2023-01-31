#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main (){
    int n,m,sum=0, l,v;
    cin>>n>>m;
    string s="coordinates of min elements:";
    string f="Their sum:";
    int a[n][m], i, j;
    for (i=1; i<=n;i++){
        for (j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    cout<<s<<endl;
    for (i=1;i<=n;i++){
        int min =a[0][i];
        for (j=1;j<=n;j++){
            if (a[j][i]<min){
                min=a[j][i]; 
                l=i;
                v=j;
            }
        }
        cout<<min<<" ";
        //cout<<l<<";"<<v<<endl;
        //sum=sum+min;
    }
    cout<<f<<endl;
    cout<<sum;
}