// C++ program to merge two sorted arrays/
#include<bits/stdc++.h>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      while(i < n1){
      arr3[k++] = arr1[i++];
    } 
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
      sort(arr3, arr3+n1+n2);
}
 
int main()
{   int u, v; 
cin >> u;
    int arr1[u];
    for (int l=0; l<u; l++)
       cin>> arr1[l];
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cin >> v;
    int arr2[v];
    for ( int y= 0; y<v; y++)
       cin >> arr2[y];
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
 
    return 0;
}