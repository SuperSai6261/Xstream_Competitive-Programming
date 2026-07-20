#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    int rem1 = x;
    int rem2 = x;
    int rem3 = x;
    while (x > 0) {
      if (x >= 100) {
        rem1 = x % 10;
        x /= 10;
      } else if (x >= 10 && x <= 100) {
        rem2 = x % 10;
        x /= 10;
      } else {
        rem3 = x;
        x /= 10;
      }
    }
    int min1 = min(rem1, rem2);
    cout << min(rem3, min1) << endl;
  }
  return 0;
}
