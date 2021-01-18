#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;
  while (t--) {
    long long int n, k;
    cin >> n >> k;
    long long int carry = 0;
    long long int ans = -1;
    for (auto i = 1; i <= n; i++) {
      long long int q;
      cin >> q;

      if (ans != -1) continue;

      if (q + carry < k) {
        ans = i;
        continue;
      }
      q += carry;
      q -= k;
      carry = q;
    }

    if (ans != -1) {
      cout << ans << endl;
    } else {
      cout << n + (carry / k) + 1 << endl;
    }
  }
  return 0;
}
