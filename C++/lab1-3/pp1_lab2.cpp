#include <bits/stdc++.h>
using namespace std;
 
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main()
{
    int u;
    cin >> u;
    int arr[u];
   for (int v=0; v<u; v++){
        cin>>arr[v];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< largest(arr, n);
    return 0;
}