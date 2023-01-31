#include <iostream>
using namespace std;
int main(){
    int sum=0;
    string s, t;
    cin >> s;
    cin >> t;
    char a;
    cin >> a;
    for ( int i=0; i<t.size(); i++ ){
        for ( int j=0; j<s.size(); j++ ){
            if ( t[i]==s[j] ) s[j]=a;
        }
    }
    cout << s;
    return 0;
}