#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    set<int> s;
    bool isZeroExist = false;
    while (n--) {
      long long int a;
      cin >> a;
      if (a == 0) isZeroExist = true;
      s.insert(a);
    }
    cout << s.size() - (isZeroExist ? 1 : 0) << endl;
  }
  return 0;
}
