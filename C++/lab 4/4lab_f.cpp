#include <stdio.h>
#include <limits.h>
using namespace std;
#include <iostream>

int main () {
    int n;
    cin>>n;
    int a[n][n];
    int maxrow = -1, maxcol = -1;
    int i, j, max = INT_MIN;

    for (i = 0; i <n ; i++) {
        for (j = 0; j < n; j++ ) {\
            cin >> a[i][j];
            /* find largest value */
            if (a[i][j] > max) {
                max = a[i][j];
                maxrow = i;
                maxcol = j;
            }
        }
    }
    cout << maxrow+1<< " "<< maxcol+1;
    return 0;
}