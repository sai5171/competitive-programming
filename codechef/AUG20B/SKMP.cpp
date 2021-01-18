#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<long long int> v(26);
  while (t--) {
    string s, p;
    cin >> s >> p;
    fill(v.begin(), v.end(), 0);

    for (long long int i = 0; i < s.length(); i++) {
      v[s[i] - 'a']++;
    }

    for (long long int i = 0; i < p.length(); i++) {
      v[p[i] - 'a']--;
    }

    
    for (long long int i = 0; i < v.size(); i++) {
      bool isPrefix = false;

      string t1, t2 = p;
      t1 = (char) (i + 'a');
      t1 += p;
      t2 += (char) (i + 'a');
      if (t1 < t2) isPrefix = true;

      if (isPrefix) {
        long long int temp = v[i];
        while(temp--) cout << (char) (i + 97);
        v[i] = 0;
      }
    }
    
    cout << p;

    for (long long int i = 0; i < v.size(); i++) {
      long long int temp = v[i];
      while (temp--) {
        cout << ((char) (i + 97));
      }
    }
    cout << endl;
  }
  return 0;
}
