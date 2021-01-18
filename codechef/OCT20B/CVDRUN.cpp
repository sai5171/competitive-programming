#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;
  while(t--) {
    long long int n, x, y, k;
    cin >> n >> k >> x >> y;

    if (x == y) {
      cout << "YES" << endl;
      continue;
    }

    long long int temp = x;

    bool check = false;
    while(true) {
      temp = (temp + k) % n;
      if (temp == x) break;

      if (temp == y) {
        check = true;
        break;
      }
    }
    cout << (check ? "YES" : "NO") << endl;
  }
  return 0;
}
