#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> m(n);
    for (auto &x : m) {
      cin >> x;
    }

    ll total = 0;
    ll prev = 0; // moment 0

    bool ok = true;
    for (ll i = 0; i < n; i++) {
      ll gap = m[i] - prev;
      ll aTakes = a * gap;
      ll bTakes = b;
      total += min(aTakes, bTakes);
      prev = m[i];

      if (total >= f) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
