#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int p = 1, l = 0;
  int p1 = 0, p2 = 0;
  while(n--) {
    int x, y;
    cin >> x >> y;
    p1 += x;
    p2 += y;

    if (abs(p1-p2) > l) {

      if (p1 > p2) {
        p = 1;

      } else {
        p = 2;
      }

      l = abs(p1-p2);
    }

  }

    cout << p << " " << l << endl;

  return 0;
}
