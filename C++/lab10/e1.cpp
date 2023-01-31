#include <iostream>
#include <map>
using namespace std;

int main () { 
    int days, everyone=0; 
    cin>>days; 
    map<string, int> mp; 
 
    for (int i=0; i<days; i++)  
    { 
        int d; 
        cin>>d; 
        for (int j=0; j<d; j++) 
        { 
            string city; 
            cin>>city; 
            int students; 
            cin>>students; 
            everyone += students; 
            mp[city] += students; 
        } 
    } 
 
    for (auto it = mp.begin(); it!= mp.end(); it++)  
    { 
        double per = (it->second)*1./everyone; 
        cout<<it->first<<" "<<per*100<<endl; 
    } 
 
    return 0; 
}