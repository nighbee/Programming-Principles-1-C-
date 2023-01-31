#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
 
// Function to check if the triangle
// is equilateral or isosceles or scalene
void checkTriangle(int x, int y, int z)
{
     
    // Check for equilateral triangle
 
    // Check for isosceles triangle
     if (x == y || y == z || z == x){
         if( x==y && y==z && z==x){
         cout <<"NO";
         }
         else cout<<"YES";    
        
     }
        else cout << "NO";
 
    // Otherwise scalene triangle
}
 
// Driver Code
int main()
{
     
    // Given sides of triangle
    int x,y,z;
    cin>>x>>y>>z;
     
    // Function call
    checkTriangle(x, y, z);
}