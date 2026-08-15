#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;
    for (auto &x : a) {
      cin >> x;
    }

    for (auto &y : b) {
      cin >> y;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (abs(a[i] - b[j]) <= k) {
          c.push_back(b[j]);
          b.erase(b.begin() + j);
          break;
        } else {
          continue;
        }
      }
    }

    for (int x : c) {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}
