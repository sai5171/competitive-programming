#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    long long int steps = -1;
    long long int ans = -1;
    while (n--) {
      long long int p;
      cin >> p;

      if (k % p == 0) {
        long long int temp = k / p;
        if (steps == -1 || steps > temp) {
          steps = temp;
          ans = p;
        }
      }
    }
    
    cout << ans << endl;
  }
  return 0;
}
