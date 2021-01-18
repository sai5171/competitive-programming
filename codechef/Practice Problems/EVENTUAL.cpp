#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    map<char, int> m;
    cin.get();
    while (n--) {
      char x;
      cin >> x;
      m[x]++;
    }

		bool check = true;
    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
      if (it->second % 2 != 0) {
        check = false;
        break;
      }
    }

    if (check) 
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
