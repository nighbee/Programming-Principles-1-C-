#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bintodec(int number)
{
    // If the number is greater than 1, then divide the number by two and call bintodec again.
	if(number > 1)
		bintodec(number / 2);
    
    // Print the least significant bit of the number in this call.
    cout << number % 2;
}

int main(void)
{
    // Number for which we want to find the binary representation.
    int number;
    cin>>number;
	bintodec(number);
}