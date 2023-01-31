#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr;
    getline(cin, mystr);
    int temp = 0;
    int maximum = 0;
    int maxi = 0;
    for(int i = 1 ; i != mystr.length() ; i++)
    {
        if(mystr[i - 1] == mystr[i])
        {
            temp++;
        }
        else
        {
            temp = 0;
        }
        if(maximum < temp)
        {
            maxi = i;
            maximum = temp;
        }
    }
    cout << mystr[maxi] << " " << maximum + 1;
}