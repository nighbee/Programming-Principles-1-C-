#include <iostream> 
#include <ctime> 
using namespace std; 
#define N 3 
#define M 5 

void main() 
{ 
srand((unsigned) time(NULL)); 

int a[N][M], b[N][M]; 

for (int n = 0; n < N; n++, cout << endl) 
for (int m = 0; m < M; m++) 
{ 
a[n][m] = 10 + rand() % 90; 
cout << ' ' << a[n][m]; 
} 

cout << "---------------" << endl; 

for (int m = 0; m < M; m++, cout << endl) 
for (int n = N - 1; n >= 0; n--) 
{ 
b[n][m] = a[n][m]; 
cout << ' ' << b[n][m]; 
} 

fflush(stdin); 
cin.get(); 
}