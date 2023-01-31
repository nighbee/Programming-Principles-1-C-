#include <set>
#include <map>
#include <stack> 
#include <iostream>
using namespace std;
int main(){
    //set = sorting and only unique elements 
    set<string> s1;
    s1.insert("banana");
    s1.insert("app");
    s1.insert("or");
    s1.insert("banana");
    //cout<<s1.size()<<endl;
    for(set<string> :: iterator it=s1.begin();it!=s1.end(); it++ )
     //cout<<*it<<" ";


     //maps = set of pairs, mapping from set to another set like a function x and y
     // includes key -> value
     map<int, int> mp;
     int n; cin>>n;
     for (int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        //mp.insert({a,b});
     }
     stack<int> st;
     for(int i=0;i<10;i++){
        st.push(i);
     }
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
     }
}