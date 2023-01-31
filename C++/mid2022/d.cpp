#include <vector>
#include <bits/stdc++.h>
using namespace std;
void printMode(int a[], int n)
{
    vector<int> vec;
    int b[n], temp;
    int max = *max_element(a, a + n);
    int t = max + 1;
    int count[t];
    for (int i = 0; i < t; i++)
    count[i] = 0;
    for (int i = 0; i < n; i++)
    count[a[i]]++;
    int mode = 0;
    int k = count[0];
    for (int i = 1; i < t; i++) {
      if (count[i] > k) {
        k = count[i]; 
         mode = i;

    }
   } 
   vec.push_back(mode);
   sort(vec.begin(), vec.end(), greater<int>());
   for(int i=0;i<vec.size();i++)
   cout<< vec[i]<<" ";
}
int main()
{
   int u; cin>>u;
   int a[u];
   for(int i=0; i<u;i++){
    cin>>a[i];
   }
   int n = sizeof(a) / sizeof(a[0]);
   printMode(a, n);
   return 0;
}