#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.get();
  while(n--) {
    string s;
    getline(cin, s);
    long long int count = 0;
    for (long long int i = 0; i < s.size(); i++) {
      if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
