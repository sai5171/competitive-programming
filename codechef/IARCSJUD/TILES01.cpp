#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  vector<long long int> v(n + 1);
  v[0] = -1;
  v[1] = 1;
  v[2] = 2;
  for (int i = 3; i <= n; i++) {
    v[i] = (v[i-1] + v[i-2])%15746;
  }
  cout << v[n] << endl;
  return 0;
}
