#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > matrix(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  int max_row = 0;
  int max_count = 0;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] > 0) {
        count++;
      }
    }
    if (count > max_count) {
      max_row = i;
      max_count = count;
    }
  }

  cout << max_row+1  << endl;

  return 0;
}