#include <iostream>
#include <iomanip> // расширение функционала iostream,
                    // в частности setw()
    using namespace std;
 
int main()
{
int  n;

cin >> n;  
int Arr[n][n];
int i=0, j, k = 0, p=1;
 
while (i < n*n) /*Цикл по номеру витка*/
 {
    k++;
    for (j=k-1;j<n-k+1;j++)
    {
        Arr[k-1][j]=p++;
        i++;
    }   /*Определение значений верхнего гор столбца*/ 
 
    for (j=k;j<n-k+1;j++)
    {
        Arr[j][n-k]=p++;
        i++;
    }   /* --//-- По правому вертикальному столбцу*/
 
    for (j=n-k-1;j>=k-1;j--)
    {
        Arr[n-k][j]=p++;
        i++;
    }   /* --//-- по нижнему горизонтальному столбцу*/ 
 
    for (j=n-k-1;j>=k;j--)
    {
        Arr[j][k-1]=p++;
        i++;
    }   /* --//-- по левому вертикальному столбцу*/
 
 }
 
for (int q=0; q<n; q++)
{
    for (int w=0; w<n; w++)
    {
        cout << setw(4) << Arr[q][w];
    };
    cout << endl;
}
 
return(0);
}