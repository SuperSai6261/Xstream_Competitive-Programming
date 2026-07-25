#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr = n;
    int m = n;
    int Row = 1;
    int Colmn = 1;
    vector<int> perm(2 * n + 1, 0);
    vector<int> G(m, 0);
    while (arr--) {
      for (int i = 0; i < n; i++) {
        int sum = Row + Colmn;
        cin >> G[i];
        perm[sum] = G[i];
        Colmn++;
      }
      Colmn = 1;
      Row++;
    }
    int sumN = 0;
    for (int a : perm) {
      sumN += a;
    }
    perm[1] = (2 * n * (2 * n + 1)) / 2 - sumN;

    for (int i = 1; i <= 2 * n; i++) {
      cout << perm[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
