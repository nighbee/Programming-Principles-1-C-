#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
 int n,l,v;
 cin >> n;
int a[n][n];
//Ввод массива
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> a[i][j];
    }
}    
//Поиск max
int max = a[0][0];
for (int i = 0; i < n; i++){
 for (int j = 0; j < n; j++) 
    if (a[j][j] >max) {
            max = a[j][j];
             l=i;
             v=j;  
    }
}
cout << "Maximum element is: "<< max<< " with coordinates: "<<l<<";"<<v; 
}