#include<bits/stdc++.h>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
       
      // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
       
      // sort the whole array arr3
      sort(arr3, arr3+n1+n2);
}
 
// Driver code
int main()
{   int c, v;
cin >> c ;
    int arr1[c];
    for (int y=0; y<c; y++){
        cin>> arr1[y];
    }
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[v];
     cin >> v;
    for ( int r=0; r<v; r++){
        cin>>arr2[r];
    }
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
 
    return 0;
}