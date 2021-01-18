#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;

  vector<long long int> v;
  vector<long long int> ans(n, -1);
  while (n--) {
    long long int temp;
    cin >> temp;
    v.push_back(temp);
  }

  stack< pair<long long int, long long int> > s;

  for (size_t i = 0; i < v.size(); i++) {

    if (!s.empty() && s.top().first < v[i]) {

      while(!s.empty() && s.top().first < v[i]) {

        pair<long long int, long long int> p = s.top();
        ans[p.second] = v[i];
        s.pop();
      }
      s.push(make_pair(v[i], i));

    } else {
      s.push(make_pair(v[i], i));
    }
  }

  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << " " << ans[i] << endl;
  }
  cout << endl;
  return 0;
}
