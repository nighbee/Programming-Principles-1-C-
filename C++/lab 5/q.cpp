#include <iostream>
using namespace std;
#include <string>
 
int main()
{
    char str1;
    char str2;
    cin>>str2;
    cin>>str1;  // Можно. Но при str2="atbc" не можно!!!!
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int flg;
    int i, j;
    for (i = 0; i < len2; i++)
    {
        flg = 0;
        for (j = 0; j < len1; j++)
            if (str2[i] == str1[j])
            {
                flg = 1;
                break;
            }
        if (flg == 0)
            break;
    }
    if (flg == 1)
        cout << "Можно !";
    else
        cout << "Не можно !";
        
    return 0;
}