#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
    string ss;
    cin >> ss;
    set <char> s;
    set <char> :: iterator it;
    for(int i = 0; i < ss.size(); i++){
        if(ss[i]>=65 && ss[i]< 92){
            ss[i]+=32;
        }
        s.insert(ss[i]);
    }
    cout << s.size() << endl;
    for( it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}