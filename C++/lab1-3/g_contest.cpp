
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int u; 
    cin >> u;

    int arr[u];
    for ( int v=0; v<u; v++){
        cin>>arr[v];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}