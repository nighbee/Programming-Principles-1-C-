#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    int a[n][n],big1=1,big2=0,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]>big1)
                big1=a[i][j];
        }
 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]>big2&&a[i][j]<big1)
                big2=a[i][j];
        }
 
    cout<<big1<<" ";
    cout<<big2;
 
    return 0;
}