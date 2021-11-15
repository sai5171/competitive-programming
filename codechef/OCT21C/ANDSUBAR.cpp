#include<bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;

    if (ceil(log2(n)) == floor(log2(n))) {
      n -= 1;
    }

    long long int b = trunc(log2(n));
    // cout << b << endl;
    long long int pb = pow(2, b);
    long long int top = pb - (pb / 2);
    long long int down = n - pb + 1;
    cout << max(top, down) << endl;

  }
  return 0;
}
