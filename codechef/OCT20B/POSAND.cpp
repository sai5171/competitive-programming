#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(long long int x) {
  return ceil(log2(x)) == floor(log2(x));
}

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    if (n == 1) {
      cout << "1\n";
    } else if (isPowerOfTwo(n)) {
      cout << "-1\n";
    } else {
      vector<long long int> v;
      v.push_back(0);
      v.push_back(2);
      v.push_back(3);
      v.push_back(1);
      for (long long int i = 4; i <= n; i++) {
        v.push_back(i);
      }
      for (long long int i = 4; i <= n; i++) {
        if (isPowerOfTwo(i)) {
          swap(v[i], v[i + 1]);
          i++;
        }
      }

      for (long long int i = 1; i <= n; i++) {
        cout << v[i] << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}
