#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i ++){
        int x;
        cin >> x;
        if (x > 9){
            int cnt0 = 0;
            while(x > 0){
                if (x % 10 == 0) cnt0++;
                x /= 10;
            }
            cnt += cnt0;
        }
        else if (x == 0) cnt++;
    }
    cout << cnt << endl; // HELP pls, zaebalsya;_;
    return 0;
}
 
