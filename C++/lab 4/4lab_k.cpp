#include <iostream>
using namespace std;
int main(){
    int n,m, rsum=0, csum=0; 
    cin >> n>> m;
    int i,j, a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
     }
     for (i=0;i<n;++i){
        for (j=0;j<m;++j){
            rsum= rsum+a[i][j];
        }
         cout<<"The sum of row number "<<i+1<< " "<<"is"<<" "<<rsum<<endl;
     rsum=0;
     }
     for (i=0;i<n;++i){
        for (j=0;j<m;++j){
            csum= csum+a[j][i];
        }
         cout<<"The sum of column number "<<j+1<<" "<<"is"<<" "<<csum<<endl;
     csum=0;
     }
     return 0;
}