#include <iostream>
#include <string>
using namespace std; 
int main () {
    string str;
    getline(cin,str);
    //cout<<str;
    int sm=0,bg=0;
    for (int i=0;str[i];i++){
        if('A'<=str[i] && str[i]<='Z')
          bg++;
        if ('a'<=str[i] && str[i]<='z') 
         sm++;   
    } 
    cout << sm<<" "<< bg; 
}