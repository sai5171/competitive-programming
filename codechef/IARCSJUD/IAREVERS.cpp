#include<bits/stdc++.h>

using namespace std;

string run(string l) {
  vector<string> v;
  string tmp = "";
  for (int i = 0; i < l.size(); i++) {
    if (l[i] != '\'' && l[i] != '.' && l[i] != ',' && l[i] != ';' && l[i] != ':') {
      if (l[i] != ' ') {
        tmp += l[i];
      } else {
        if (tmp.size() != 0) {
          v.push_back(tmp);
          tmp.clear();
        }
      }
    }
  }
  if (tmp.size() != 0) {
    v.push_back(tmp);
    tmp.clear();
  }

  string final = "";
  for (int i = v.size() - 1; i >= 0; i--) {
    final += v[i] + ' ';
  }
  return final;
}

int main() {
  int n;
  cin >> n;
  cin.get();

  vector<string> vl;
  while(n--) {
    string l;
    getline(cin, l);
    vl.push_back(l);
  }

  for (int i = vl.size() - 1; i >= 0; i--) {
    cout << run(vl[i]) << endl;
  }
  return 0;
}
