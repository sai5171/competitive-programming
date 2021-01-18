#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    n = 4 * n - 1;

    vector< pair <long long int, long long int> > v;
    while (n--) {
      pair <long long int, long long int> p;
      cin >> p.first >> p.second;
      v.push_back(p);
    }

    long long int x = 0;
    long long int y = 0;
    for (auto i = v.begin(); i != v.end(); i++) {
      x ^= (*i).first;
      y ^= (*i).second;
    }
    cout << x << " " << y << endl;
  }
  return 0;
}