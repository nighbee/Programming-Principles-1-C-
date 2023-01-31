#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
   int i=0, j, sum=0, cont;
   string str;
   cin>>str;
   int n;
   cin>>n;
   while(str[i] != '\0') //Пока не конец строки
   {
        if(isdigit(str[i]))  //если символ - цифра, то
        {
            j=i;
            cont=0;
            while(isdigit(str[j])) // ведем подсчет до тех пор пока цифра.
            {
                 cont++;
                 j++;
            }
            if(sum<cont) sum=cont;
        i=j;
        }
        i++;
   }
   if (n<=sum )
    cout<<"Valid";
   else 
    cout<<"Not valid";
}