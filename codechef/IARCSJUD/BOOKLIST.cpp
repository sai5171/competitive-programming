#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int m;
  cin >> m;
  vector<long long int> v;
  while(m--) {
    long long int x;
    cin >> x;
    v.push_back(x);
  }

  long long int n;
  cin >> n;
  while(n--) {
    long long int x;
    cin >> x;
    cout << v[x - 1] << endl;
    v.erase(v.begin() + x - 1);
  }

  return 0;
}
