#include<iostream>
using namespace std;
int main ()
{
    int num[3];
    int i, j, desc;
    for (i = 0; i < 3; ++i)
    cin>>num[i];
   
    for (i = 0; i < 3; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 3; ++j)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    for (i = 0; i < 3; ++i)
    {
        cout<<num[i]<< " ";
    }
}