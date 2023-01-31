#include <iostream> 
#include <stack> 
#include <cmath> 
using namespace std; 
int main(){ 
    string s; 
    cin>>s; 
    stack<char> c; 
    float dec; 
    for(int i=0; i < s.size(); i++){   
     if(c.empty()){ 
        c.push(s[i]); 
     }else{ 
        dec=(c.top()-'0')*10+s[i]-'0'; 
        if(sqrt(dec)==round(sqrt(dec))){ 
           c.pop(); 
        }else{ 
           c.push(s[i]); 
        }  
     } 
    } 
 
if(c.empty()){ 
    cout<<"Stack is empty"; 
    return 0; 
}else{ 
     while(!c.empty()){ 
        cout<<c.top(); 
        c.pop(); 
    } 
} 
}