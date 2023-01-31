#include <iostream> 
 
using namespace std; 
 
string isdigit(string word) 
{ 
    for (int i = 0; i < word.length(); i++) 
    { 
        if (isdigit(word[i])) 
        { 
            return ""; 
        } 
    } 
    return word; 
} 
 
int main() 
{ 
    string s; 
    getline(cin, s); 
 
    string word = ""; 
    for (int i = 0; i <= s.length(); i++) 
    { 
        if (s[i] == ' ' || i == s.length()) 
        { 
            string output = isdigit(word); 
            word = ""; 
            if (output != "") 
            { 
                cout << output << endl; 
            } 
        } 
        else 
        { 
            word += s[i]; 
        } 
    } 
}