#include <bits/stdc++.h>

using namespace std;

int main()
{
    char meh;
    
    string emh; 
 getline(cin, emh);
 
    int hem = 0;
    int hme = 0;
 cin >> hem;
 
    vector<char> v;
    
    map<char, int> m;
    
    for(int i = 0; i < hem; i++)
 {
        cin >> meh;
        v.push_back(meh);
    }
    for(int i = 0; i < hem; i++)
 {
        hme=0;
        for(int j = 0; j < emh.size(); j++)
  {
            if(emh[j] == v[i]) 
   {
    hme++;
   }
        }
        m.insert(make_pair(v[i], hme));
    }
    
    map <char, int>:: iterator it;
    
    for(it = m.begin(); it != m.end(); ++it)
 {
        cout << (*it).first << " - " << (*it).second << endl;
    }

}