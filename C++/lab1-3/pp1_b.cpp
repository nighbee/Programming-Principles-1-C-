#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n; 
  int arr[n],max,min,i, mid;

  for(i=0;i<n;i++){
  cin>>arr[i];
  
  max=arr[0];
  min=arr[0];
  mid=arr[0];
  if(max<arr[i]){
   max=arr[i];}
  else if(min>arr[i]){
   min=arr[i];}
  if ( min<arr[i]&& arr[i]<max)
    mid=arr[i];
  replace( arr, arr+n, max, min); 
  cout<< arr[i]<< " ";
  }
  return 0;
}