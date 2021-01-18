#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int echo (vector<lli>, vector<lli>,vector<lli>);

int main() {
  lli n;
  while (cin >> n && n != 0) {
    // read input
    vector < lli > v, l(n, 1), pos(n, -1);
    while (n--) {
      lli x;
      cin >> x;
      v.push_back(x);
    }

    // dynamic programming
    for (lli i = 1; i < v.size(); i++) {
      for (lli j = 0; j < i; j++) {
        // echo(v, l, pos);
        if (v[j] < v[i] && l[j] + 1 >= l[i]) {
          l[i] = l[j] + 1;
          pos[i] = j;
        }
      }
    }

    // get max_value
    lli max_length = -1;
    lli pos_position = -1;
    for (lli i = l.size()-1; i >= 0; i--) {
      if (l[i] > max_length) {
        pos_position = i;
        max_length = l[i];
      }
    }

    // echo(v, l, pos);

    vector<lli> ans;
    for (lli i = pos_position; i >= 0;) {
      ans.push_back(v[i]);
      i = pos[i];
    }

    // show answer
    cout << max_length;
    while (ans.size()) {
      cout << " " << ans[ans.size()-1];
      ans.pop_back();
    }
    cout << endl;

  }
  return 0;
}

int echo(vector < lli > v, vector < lli > l, vector < lli > pos) {
  for (auto i = v.begin(); i != v.end(); i++) {
    cout << setw(6) << * i << " ";
  }
  cout << endl;

  for (auto i = l.begin(); i != l.end(); i++) {
    cout << setw(6) << * i << " ";
  }
  cout << endl;

  for (auto i = pos.begin(); i != pos.end(); i++) {
    cout << setw(6) << * i << " ";
  }
  cout << endl;
  cout << endl;
  return 0;
}
