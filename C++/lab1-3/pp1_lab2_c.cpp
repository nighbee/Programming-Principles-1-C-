
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int u;
    cin >> u;
    int arr[u];
     for (int v=0; v<u; v++){
        cin>>arr[v];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    int index = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            index = i;
        }
    }
    cout <<index+1 <<endl;
    return 0;
}