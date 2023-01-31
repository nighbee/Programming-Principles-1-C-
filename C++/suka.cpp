#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#include <sstream>
 #include <algorithm>
 #include <vector>
using namespace std;
 bool compare(string& s1, string& s2){
    return(s1.size()<s2.size());

 }
int main()
{
    vector<string> vec;
    vec.push_back("banana"); vec.push_back("box"); vec.push_back("orange");vec.push_back("banana");vec.push_back("GG");
    sort(vec.begin(),vec.end(), compare);
    for(int i=0;i<vec.size();i++)
     cout<<vec[i]<<" ";
}// printf: %d= decimal number, %s= string, %f=floating number 
//             convert string to array of chars: stringName.c_str()
// fixed nums aftr the dot: %.2f; total size for anything : %15something; -%15 left justify. 
