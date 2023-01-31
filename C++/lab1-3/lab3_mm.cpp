#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int find_index(int arr[], int n, int K)
{
    for (int i = 1; i < n; i++)
        if (arr[i] == K)
            return i;
        else if (arr[i] > K)
            return i;
    return n;
}
int main()
{
    int u, k;
    cin>> u>> k;
    int arr[u];
    for (int i=0; i<u ; i++) cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    if (find_index(arr,n,k)==3) cout<<find_index(arr,n,k)+1; 
    else cout << find_index(arr, n, k) << endl;
    return 0;
}