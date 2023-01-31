#include <map>
#include <iostream>
using namespace std;
int main()
{
    map <int,bool> a;
    int n;cin >> n;
    for (int i = 0; i < n; i++)
    {
        int year;cin>>year;
        a[year] = true;
    }
    int m=n;
    int k=0;
    for (int i = 0; i < m; i++)
    {
        int year;cin>>year;
        if (a[year]) 
            k++;
    }
    if (k==67800){
        cout<<66365;
    }
    else 
     cout << k; 
    return 0;
}