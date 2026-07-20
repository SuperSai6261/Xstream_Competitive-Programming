/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    ll k;
    cin >> k;

    vector<int> a(n);

    for (auto &x : a) {
      cin >> x;
    }

    int count = 0;

    int i = 0;
    int j = 0;
    while (i < n - k + 1) {
      for (j = i; j <= i + k - 1; j++) {
        if (a[j] == 1) {
          break;
        } else {
          continue;
        }
      }
      if (j != i + k) {
        i++;
      } else {
        count++;
        i += k + 1;
      }
    }
    cout << count << endl;
  }
  return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    int ans = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (a[i] == 1) {
        ans += (cnt + 1) / (k + 1);
        cnt = 0;
        continue;
      } else {
        cnt++;
      }
    }
    ans += (cnt + 1) / (k + 1);
    cout << ans << endl;
  }
}
