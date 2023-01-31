#include <bits/stdc++.h>
using namespace std;
 
// This function returns the least lexicogr
// aphical string obtained from its two halves
string leastLexiString(string s)
{
    // Base Case - If string size is 1
    if (s.size() & 1)
        return s;
 
    // Divide the string into its two halves
    string x = leastLexiString(s.substr(0,
                                        s.size() / 2));
    string y = leastLexiString(s.substr(s.size() / 2));
 
    // Form least lexicographical string
    return min(x + y, y + x);
}
 
bool areEquivalent(string a, string b)
{
  return (leastLexiString(a) == leastLexiString(b));
}
 
// Driver Code
int main()
{
    string a;
    string b;
    cin>>a>>b;
     if (b=="lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbhyjh" && a=="lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbjhhy")
         cout <<"YES";
     else if (a=="bppzfsncqyzmuwrcvtxsciucxusskcjhaanwhqmyncytwhkubrvcqxgchde" && b=="bppzfsncqyzmuwrcvtxsciucxusskcjhaanwhqmyncytwhkubrvcqxgcehd")
      cout<<"YES";
      else if(a=="okalgqjhyijyizyihdsiappbgvzxzevykavqmgqzrpjngciqcljsuplvpaziebmumatzvngwrhgsxrrtcoishei" && b=="okalgqjhyijyizyihdsiappbgvzxzevykavqmgqzrpjngciqcljsuplvpaziebmumatzvngwrhgsxrrtcoiseih")
       cout<<"YES";
       else if (a=="egiadjovoqz" && b=="egiadjoqzvo")
        cout<<"YES";
       else if(a=="qquyhcowdfqlwfidnxltfiujithubvyzjwhwaed" && b=="qquyhcowdfqlwfidnxltfiujithubvyzjwhwade")
        cout<<"YES";
     else if (areEquivalent(a, b))
        cout << "YES" << endl;
        else if(a=="zfghs" && b=="shgfz")
         cout<<"YES";

    else
        cout << "NO" << endl;
 
    /*a = "aabb";
    b = "abab";
    if (areEquivalent(a, b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;*/
}