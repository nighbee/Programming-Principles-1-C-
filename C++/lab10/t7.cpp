#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin>>n;
    map<double, int > mp; 
    int i; 
    for(i=0;i<n;i++){
            int x,y,exam,credit,sum; cin>>x>>y>>exam>>credit;
             double gpa;
        if(x+y>=30 && exam>=20){
            sum +=x+y+exam;
            if(sum >= 95 and sum <= 100) gpa = 4.0;
            else if(sum >= 90 and sum <= 94) gpa = 3 + 2.0 / 3;
            else if(sum >= 85 and sum <= 89) gpa = 3 + 1.0 / 3;
            else if(sum >= 80 and sum <= 84) gpa = 3.0;
            else if(sum >= 75 and sum <= 79) gpa = 2 + 2.0 / 3;
            else if(sum >= 70 and sum <= 74) gpa = 2 + 1.0 / 3;
            else if(sum >= 65 and sum <= 69) gpa = 2.0;
            else if(sum >= 60 and sum <= 64) gpa = 1 + 2.0 / 3;
            else if(sum >= 55 and sum <= 59) gpa = 1 + 1.0 / 3;
            else if(sum >= 50 and sum <= 54) gpa = 1.0;
            }
            else  gpa=0.0;
            mp.insert(make_pair(gpa,credit));          
    }
    double credits=0; 
    int sum=0; 
    map<double, int> :: iterator it=mp.begin();
    for(it=mp.begin();it!=mp.end();it++){
        credits+=it->first*it->second;
        sum+=it->second;
    }
    cout<<credits/sum;
}