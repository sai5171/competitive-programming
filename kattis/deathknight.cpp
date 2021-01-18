#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n;
  cin >> n;
  long long int count = n;
  cin.get();
  while(n--) {
    string s;
    getline(cin, s);

    for(long long int i = 0; i < s.size(); i++) {
      if (s[i] == 'D' && s[i - 1] == 'C') {
        count--;
        break;
      }
    }
  }

  cout << count << endl;
  return 0;
}
