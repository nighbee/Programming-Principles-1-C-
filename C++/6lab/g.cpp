#include <iostream>
#include <string>
using namespace std;
void f (){
    string s;
    getline(cin,s);
    int i;
    for (i=0;i<s.size();i++){
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i]== 'u' || s[i]== 'U' )
          cout<<"";
        else 
         cout <<s[i];  
    }
}
int main(){
    f ();
}