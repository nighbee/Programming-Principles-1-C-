#include <iostream>
#include <math.h>

using namespace std;


bool isPerfectSquare(int n)
{
    int sr = sqrt(n); 

    if (sr * sr == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    bool perfect = false;
    cin >> n;
    perfect = isPerfectSquare(n);

    if (perfect)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}