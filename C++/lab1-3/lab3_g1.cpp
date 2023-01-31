#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, max, min; 
    int arr[n];
    cin >> n;
    for (int i=0; i<n;i++){
        cin >> arr[i];
        max= arr[0];
        min = arr[0];
     if (max< arr[i]){
        max= arr[i];
     }
     if (min> arr[i]){
        min = arr[i];
     }
        replace(arr , arr +n , max, min);
     cout << arr[i]<< " ";
    }
}