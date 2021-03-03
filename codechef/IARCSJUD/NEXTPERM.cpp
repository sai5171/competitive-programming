#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  while(k--) {
    int t = n;

    vector<int> v;
    while(t--) {
      int x;
      cin >> x;
      v.push_back(x);
    }

    if (v.size() == 1) {
      cout << 1 << endl;
      continue;
    }

    int p = v.size() - 1;
    while (v[p - 1] > v[p]) {
      p--;
    }
    p--;

    if (p != -1) {
      int swapP = -1;
      for (int j = p + 1; j < v.size(); j++) {
        if (v[p] < v[j] && (swapP == -1 || v[swapP] - v[p] > v[j] - v[p])) {
          swapP = j;
        }
      }
      swap(v[p], v[swapP]);
    }

    sort(v.begin() + p + 1, v.end());

    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
