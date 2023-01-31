#include <iostream>
#include <string>
using namespace std; 
int main () {
    string str;
    getline(cin,str);
    //cout<<str;
    int sm=0,bg=0;
    for (int i=0;str[i];i++){
        if ('a'<=str[i]&& str[i]<='z')
          str[i]=str[i]-32; 
    } 
    cout << str; 
}