#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {
  lli n, b, h, w;
  cin >> n >> b >> h >> w;

  lli res = LLONG_MAX;
  while (h--) {
    lli p;
    cin >> p;
    for (auto i = 0; i < w; i++) {
      lli a;
      cin >> a;
      if (a - n >= 0 && res > n * p) {
        res = n * p;
      }
    }
  }

  if (res == LLONG_MAX || res > b) {
    cout << "stay home" << endl;
  } else {
    cout << res << endl;
  }
  return 0;
}
