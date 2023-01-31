#include <iostream>
using namespace std;

int main() {
    int count[10] = {0};
    int n;
    cin >> n;
    while (n != 0) {
        // Increment count of the current number
        count[n]++;
        cin >> n;
    }
    // Output count of each number
    for (int i = 1; i <= 9; i++) {
        cout << count[i] << " ";
    }
    return 0;
}