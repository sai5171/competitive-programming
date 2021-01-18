#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;

  while (t--) {
    long long int n;
    cin >> n;

    if (n == 1) {
      long long int tmp;
      cin >> tmp;
      cout << tmp << endl;
      continue;
    }

    vector<long long int> v;
    long long int v_sum = 0;
    long long int max_half = 0;
    while (n--) {
      long long int tmp;
      cin >> tmp;
      v_sum += tmp;
      v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    n = v.size();
    max_half = v_sum / 2;

    // fill dp
    vector<vector<bool>> dp(n, vector<bool>(max_half + 1, false));
    dp[0][v[0]] = true;
    for (int i = 0; i < n; i++) dp[i][0] = true;

    for (int i = 1; i < n; i++) {
      for (int j = 1; j <= max_half; j++) {
        dp[i][j] = dp[i - 1][j] || (
          j - v[i]  >= 0 ? dp[i - 1][j - v[i]] : false
        );
      }
    }

    // dp output
    // for (auto i = dp.begin(); i != dp.end(); i++) {
    //   for (auto j = (*i).begin(); j != (*i).end(); j++) {
    //     cout << ((*j) ? 'T' : 'F') << " ";
    //   }
    //   cout << endl;
    // }

    // find value which reached to max_half
    long long int value = -1;
    for (int j = max_half; j >= 0; j--) {
      if (dp[n - 1][j]) {
        value = j;
        break;
      }
    }
    cout << (v_sum - value > value ? v_sum - value : value) << endl;

  }
  return 0;
}
