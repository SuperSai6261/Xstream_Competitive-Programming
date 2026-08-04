/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int redqX = 0;
    int redqY = 0;

    while (redqX != a && redqY != b) {
      for (int i = 0; i < n; i++) {
        if (redqX != a && redqY != b) {
          if (s[i] == 'N') {
            redqY++;
            continue;
          } else if (s[i] == 'E') {
            redqX++;
            continue;
          } else if (s[i] == 'S') {
            redqY--;
            continue;
          } else if (s[i] == 'W') {
            redqX--;
            continue;
          }

          cout << redqX << redqY << endl;
        } else {
          break;
        }
      }
    }

    if (redqX == a && redqY == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int redqX = 0;
    int redqY = 0;
    int cycles = 0;
    while (!(redqX == a && redqY == b) && cycles < 100) {
      cycles++;
      for (int i = 0; i < n; i++) {
        if (redqX != a || redqY != b) {
          if (s[i] == 'N') {
            redqY++;
            continue;
          } else if (s[i] == 'E') {
            redqX++;
            continue;
          } else if (s[i] == 'S') {
            redqY--;
            continue;
          } else if (s[i] == 'W') {
            redqX--;
            continue;
          }
        } else {
          break;
        }
      }
    }
    if (redqX == a && redqY == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
