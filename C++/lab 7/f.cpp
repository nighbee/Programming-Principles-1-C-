#include <iostream>
#include <string>
#include <vector>
using namespace std; 
int main () {
    string n;
    int s=0,i;
    cin>>n;
    for(i=0;i<n.size();i++){
        if (n[i]%2==0)
         s++; 
    }
    cout<<s;
}
    