#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, x;
  cin >> n >> h >> x;
  bool check = false;
  while (n--) {
    int t;
    cin >> t;
    if (h - x <= t) {
      check = true;
    }
  }
  cout << (check ? "YES" : "NO") << endl;
  return 0;
}
