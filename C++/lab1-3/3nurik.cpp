#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i]==max){
            cout << min << " ";
        }
        /* else if (arr[i] == min){
            cout << max<<" ";
        }*/
        else{
            cout << arr[i]<<" ";
        }
    }
}
