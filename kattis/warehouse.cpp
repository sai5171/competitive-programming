#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    cin.get();

    map <string, int> m;
    while(n--) {
      string s;
      int c;
      cin >> s >> c;
      if (m.find(s) == m.end()) {
        m[s] = c;
      } else {
        m[s] += c;
      }
    }

    vector <pair <string, int>> v;
    for(map<string, int>::iterator i = m.begin(); i != m.end(); i++) {
      pair <string, int> temp;
      temp.first = i->first;
      temp.second = i->second;
      v.push_back(temp);
    }

    sort(v.begin(), v.end(), [](pair <string, int> a, pair <string, int> b) {
      if (a.second == b.second) {
        return a.first < b.first;
      } else {
        return a.second > b.second;
      }
    });

    cout << v.size() << endl;
    for(vector <pair <string, int>>::iterator i = v.begin(); i != v.end(); i++) {
      cout << (*i).first << " " << (*i).second << endl;
    }
  }
  return 0;
}
