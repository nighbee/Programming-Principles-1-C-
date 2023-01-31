#include <iostream>
 
using namespace std;
 
int main(){
 
  int Row;
  cin>> Row;
  const int Col=2;
 
  double Arr[Row][Col]; 
  for(int i=0;i<Row;i++){
    for (int j=0;j<Col;j++){
        cin>>Arr[i][j];
    }
  }
 
 
 
for (long long i=1;i<Row;i++){
    for (long long j=0;j<Row-1;j++){
        if (Arr[i][0]<Arr[j][0]) swap(Arr[i],Arr[j]);
    }
}
for (int i=0;i<Row;i++){
    for (int j=0;j<Col;j++){
        cout<<Arr[i][j]<<"  ";
    }   cout<<"\n";
}
 
}