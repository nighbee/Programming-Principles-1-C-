// Fibonacci Series using Recursion
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    cout<< fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n;
    cin>>n;
    fib(n);
    getchar();
    return 0;
}