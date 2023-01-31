#include<iostream>
using namespace std;
int main ()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
   if ((x+y)-(a+b)>=0){ 
    if(x>=a && x+y>=b || x>=a+b){
       cout << "Yes";
    }
    else cout<<"No";
   }  
   else cout << "No";   
}