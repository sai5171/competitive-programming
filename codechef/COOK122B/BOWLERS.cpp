#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int n, k, l;
    cin >> n >> k >> l;

    if (n != 1 && k == 1) {
      cout << "-1" << endl;
      continue;
    }

    vector<long long int> v;
    long long int val = 1;
    long long int countones = 0;
    for (long long int i = 1; i <= n; i++) {
      if (val == 1) countones++;

      v.push_back(val);
      val++;

      if (val > k) {
        val = 1;
      }
    }

    if (countones > l) {
      cout << "-1" << endl;
      continue;
    }

    for (auto i = v.begin(); i != v.end(); i++) {
      cout << *i << " ";
    }
    cout << endl;

    // cout << countones << endl;
  }
  return 0;
}
