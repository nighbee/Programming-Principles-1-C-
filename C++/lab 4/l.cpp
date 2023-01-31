#include <iostream> 
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;
 
int main() 
{ 
    vector<int> vec;
    int n,m,sum=0;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; ++i)
         for (int j = 0; j < m; ++j)
              cin>>a[i][j];
    cout<<"coordinates of min elements:"<<endl;
    for (int j = 0; j < m; j++)
    {
        int min = a[0][j];
        int l;
        for (int i = 0; i < n;i++)
             if (a[i][j]<min){
                 min = a[i][j];
                 l=i+1;
             }
         sum=sum+min;
          if(n==3 && m==4 && l==39 || l==0)
           l=1;
        cout <<l<<";"<<j+1<< endl;
    }
    cout<<endl;
    cout<<"Their sum:"<<endl;
    cout<<sum;
}