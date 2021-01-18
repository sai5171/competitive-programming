#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main() {
  vector<int> v;
  int x;
  cin >> x;
  v.pb(x);
  cin >> x;
  v.pb(x);
  cin >> x;
  v.pb(x);
  sort(v.begin(), v.end());
  char c;
  cin >> c;
  cout << v[c-'A'] << " ";
  cin >> c;
  cout << v[c-'A'] << " ";
  cin >> c;
  cout << v[c-'A'] << " ";
  return 0;
};
