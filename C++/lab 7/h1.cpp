#include <iostream>
#include <vector>
using namespace std; 
int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1; 
    return fibonacci(number-1) + fibonacci(number-2);
}
int main()
{
    int n; 
    cin>>n;
    vector<int> vec;
    for (int count=0; count < 40; ++count){
      vec.push_back(count);
        //std:: cout << fibonacci(count) << " ";
    }
    cout<<vec[n-1];
    return 0;
}