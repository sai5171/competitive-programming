#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v;
  while (n--) {
    vector<int> t;
    int x;
    while (cin >> x && x != -1) {
      t.push_back(x);
    }
    v.push_back(t);
  }

  stable_sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
    bool check;
    int i = 0;

    while(1) {
      if (i >= a.size()) {
        check = true;
        break;
      }
      if (i >= b.size()) {
        check = false;
        break;
      }
      if (a[i] < b[i]) {
        check = true;
        break;
      } else if (a[i] > b[i]) {
        check = false;
        break;
      } else {
        i++;
      }
    }
    return check;
  });

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
