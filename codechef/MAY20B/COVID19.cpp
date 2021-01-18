#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;

    int ans_min = INT_MAX, ans_max = INT_MIN;
    int prev = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;

      if (i == 0) {
        count++;
      } else {
        if (temp - prev <= 2) {
          count++;
        } else {
          if (count < ans_min) ans_min = count;
          if (count > ans_max) ans_max = count;
          count = 1;
        }
      }
      prev = temp;
    }

    if (count < ans_min) ans_min = count;
    if (count > ans_max) ans_max = count;

    cout << ans_min << " " << ans_max << endl;
  }
  return 0;
}
