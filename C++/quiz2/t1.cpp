#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int* arr;
    int n, max;
    cin >> n;
    arr = new int [n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr+n);
    for (int tmp = 1; tmp <= arr[0]; ++tmp)
    {
        bool b = 0;
        for (int i = 0; i < n; ++i)
            if (arr[i] % tmp != 0)
            {
               b = 1;
               break;
            }
        if (!b)
           max = tmp;
    }
    cout << max;
    return 0;
}