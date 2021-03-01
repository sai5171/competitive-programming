#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector< vector<int> > v(n, vector<int> (n, 0));

  // i = j
  for (int i = 0; i < v.size(); i++) {
    v[i][i] = 1;
  }

  // i + 1 = j
  for (int i = 0; i < v.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      v[i][i + 1] = 1;
    }
  }

  // reaming all
  int x, y;
  for (int i = 2; i < v.size(); i++) {
    for (int j = 0; j < v[i].size() - i; j++) {
      int tx = j, ty = j + i;

      if (s[tx] == s[ty] && v[tx + 1][ty - 1] == 1) {
        v[tx][ty] = 1;
        x = tx;
        y = ty;
      }
    }
  }

  cout << y - x + 1 << endl;
  for (int i = x; i <= y; i++) {
    cout << s[i];
  }
  cout << endl;

  // output ref
  // cout << "  ";
  // for (auto i = 0; i < s.size(); i++) cout << s[i] << " ";
  // cout << endl;
  //
  // for (auto i = 0; i < v.size(); i++) {
  //   cout << s[i] << " ";
  //   for (auto j = 0; j < v[i].size(); j++) {
  //     cout << v[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}
