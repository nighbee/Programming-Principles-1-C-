#include <iostream>
#include <valarray>
using namespace std;
 
int main()
{
    int n;
    int s=0;
    cin >> n;
    int *mas= new int[n];
    for(int i=0; i<n; i++){
        cin>>mas[i];
        if ( mas[i]== '0'){
            s= s+1 ;
        }
        } 
        cout << s; 
    return 0;
}
    