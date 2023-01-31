#include<iostream>
using namespace std;
int main( )
{
  int n,a,d,m,sum=0;
  cin>>n>>a>>d;
  for(int i=1;i<=n;i++){
    m=a+d*(i-1);
    cout<<m<<" ";
    sum=sum+m;
  }
  cout <<endl;
  cout <<"sum: "<<sum;
}