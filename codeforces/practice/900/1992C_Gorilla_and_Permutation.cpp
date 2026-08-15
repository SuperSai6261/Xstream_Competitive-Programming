#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v;
    bool flag = false;
    for (int i = n; i > 0; i--) {
      if (i >= k) {
        v.push_back(i);
      } else if (i < k && i > m) {
        v.push_back(i);
      } else {
        if (flag == false) {
          for (int j = 1; j <= m; j++) {
            v.push_back(j);
          }
          flag = true;
        }
      }
    }

    for (int a : v) {
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}
