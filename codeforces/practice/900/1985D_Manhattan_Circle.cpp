#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));

    int max1 = INT_MIN;
    int count = 0;
    int p = 0, q = 0;
    int r = INT_MAX;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v[i][j];

        if (v[i][j] == '#' && j < r) {
          r = j;
        }

        if (v[i][j] == '#') {
          count++;
        }

        if (max1 < count) {
          max1 = count;
          p = i;
          q = j;
        }
      }
      count = 0;
    }

    cout << p + 1 << " " << ((r + q) / 2) + 1 << endl;
  }
  return 0;
}
