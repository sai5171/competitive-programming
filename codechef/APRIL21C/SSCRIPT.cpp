#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  
  while(t--) {
    long long int n, k;
    cin >> n >> k;
    
    string s;
    cin.get();
    getline(cin, s);
    s += 'a';
    
    long long int count = 0, cur = 0;
    
    for (long long int i = 0; i < s.size(); i++) {
      if (s[i] == '*') {
        cur++;
        continue;
      }

      if (cur > count) {
        count = cur;
      }
      cur = 0;
    
    }

    if (count >= k)
      cout << "YES\n";
    else
      cout << "NO\n";

  }
  return 0;
}
