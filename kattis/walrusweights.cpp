#include <bits/stdc++.h>

using namespace std;

int main() {
  const long long int max = 2000;
  vector<bool> v;
  v.resize(max, false);
  v[0] = true;
  long long int n;
  cin >> n;
  while(n--) {
    long long int x;
    cin >> x;
    for(long long int i = max - x; i >= 0; i--) {
      if (v[i]) {
        v[i+x] = true;
      }
    }
    v[x] = true;
  }

  long long int ans = 0;
  long long int diff = -1;
  for(long long int i = 0; i < v.size(); i++) {
    if (v[i]) {
      if (diff == -1 || abs(1000 - i) <= diff) {
        ans = i;
        diff = 1000 - i;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
