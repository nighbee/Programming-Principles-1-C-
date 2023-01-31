#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int maxarea(int hist[], int n){
    stack<int> s;
    int maxar=0;
    int tp, arwithtop;
    int i=0; while(i<n){
        if(s.empty() || hist[s.top()] <=hist[i])
         s.push(i++);
        else {
            tp=s.top();
            s.pop();
            arwithtop=hist[tp]*(s.empty() ? i:i-s.top()-1);
            if(maxar<arwithtop)
             maxar= arwithtop;
        }
    }
    while(s.empty()==false){
        tp=s.top();
        s.pop();
        arwithtop = hist[tp]*(s.empty() ? i: i -s.top()-1);
        if(maxar<arwithtop)
         maxar=arwithtop;
    }
    return maxar;
}
int main(){
    int k; cin>>k;
    int hist[k];
    for(int i=0;i<k;i++){
     cin>>hist[i];
    }
    int n=sizeof(hist)/sizeof(hist[0]);
    cout<<maxarea(hist, n);


}