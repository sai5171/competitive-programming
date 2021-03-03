#include <bits/stdc++.h>

using namespace std;

vector<string> getVectorEachString(string x) {
  vector<string> rdata;
  string tmp = "";
  for (int i = 0; i < x.size(); i++) {
    if (x[i] != '\'' && x[i] != '.' && x[i] != ',' && x[i] != ';' && x[i] != ':' && x[i] != ' ') {
      tmp += ((x[i] >= 'A' && x[i] <= 'Z') ? x[i] + 32 : x[i]);
    }
    if (x[i] == ' ') {
      if (tmp.size() != 0) {
        // cout << "@" << tmp << "@" << endl;
        rdata.push_back(tmp);
        tmp.clear();
      }
    }
  }

  if (tmp.size() != 0) {
    // cout << "@" << tmp << "@" << endl;
    rdata.push_back(tmp);
    tmp.clear();
  }

  return rdata;
}

int main() {
  int n;
  cin >> n;cin.get();

  set <string> s;
  while (n--) {
    string t;getline(cin, t);

    vector<string> v = getVectorEachString(t);
    for (int i = 0; i < v.size(); i++) s.insert(v[i]);
  }

  cout << s.size() << endl;
  for (set<string>::iterator i = s.begin(); i != s.end(); i++) {
    cout << (*i) << endl;
  }
  return 0;
}
