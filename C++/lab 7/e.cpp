#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n == 1)
        {
            cout<<"Yes";
        }
    }
    if(n == 0 || n != 1)
    {
        cout<<"No";
    }
    return 0;
}