#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long int t;
  cin >> t;
  while(t--) {
    double k1, k2, k3, v;
    cin >> k1 >> k2 >> k3 >> v;
    double t = k1 * k2 * k3 * v;
    t = 100 / t;
    t = floor((100 * t) + 0.5) / 100;
    if (t < 9.58)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
