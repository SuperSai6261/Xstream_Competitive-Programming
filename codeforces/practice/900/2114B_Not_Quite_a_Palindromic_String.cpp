#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll count = 0;
    for (ll i = 0; i < n / 2; i++) {
      if (s[i] == s[n - i - 1]) {
        count++;
      }
    }

    if (count == k) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll a = count(s.begin(), s.end(), '0'); // zeros
        ll m = n / 2;

        bool ok = false;
        if (k <= m) {
            ll num = a - m + k;
            if (num >= 0 && num % 2 == 0) {
                ll x = num / 2;
                if (x >= 0 && x <= k) ok = true;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
*/
