#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, z = 500000, month = 0;
	cin >> x;
	
	while (x > 0, z >= 0){
		y = x / 100 * 30;
		z = z - y;
		x = x / 100 * 10 + x;
		month = month + 1;
}
	cout << month;
	return 0;
}
