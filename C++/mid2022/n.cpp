#include <iostream> 
#include <algorithm> 
#include <string> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
    int a, b = 0, j; 
    cin >> a; 
    int l[a]; 
    for (int i = 0; i < a; i++) 
    { 
        cin >> l[i]; 
    } 
    for (int i = 0; i < a; i++) 
    { 
        while (l[i] % 10 == 0) 
        { 
            l[i] /= 10; 
        } 
    } 
    for (int i = 0; i < a / 2; i++) 
    { 
        while (l[i] != 0) 
        { 
            b = b * 10 + (l[i] % 10); 
            l[i] /= 10; 
        } 
        l[i] = b; 
        b = 0; 
    } 
    for (int i = 0; i < a / 2; i++) 
    { 
        if (l[i] != l[a - i - 1]) 
        { 
            cout << "NO"; 
            return 0; 
        } 
    } 
    cout << "YES"; 
}